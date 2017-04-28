/**
 *------------------------------------------------------------------*
	FILE NAME:	hsocket.h
	DESCRIPTION:	Socket Wrapper Class Declaration.
	AUTHOR:		Made by Hojin Choi <pynoos@users.sourceforge.net>

	This library (hsocket.h hsocket.cpp) can be freely distributed
	if you can contain Less General Public License(LGPL).
	
	You must include library ws2_32.lib in win32 VC++ environments.
 *------------------------------------------------------------------*
*/

#ifndef _HSOCKET_H_
#define _HSOCKET_H_

#include "hsockstd.h"

#if defined(WIN32) && !defined(__CYGWIN32__)
	#pragma warning(disable:4786)
#endif

#include <set>
	using std::set;

class HFDObject;
	class HSocket;

class HInetAddr;
class HUnixAddr;

// CONSTANTS
// Error code in selecting.
#define INVALID_FD	(HFD_T)(~0)
const int H_ESELECT	  = -1;
const int H_TIMEOUT	  = -2;

const int H_MAX_ADDRESS_LIST = 32;

class HInetAddr
{
public:
	struct sockaddr_in m_sockaddr;
	unsigned int m_socklen;

	HInetAddr( const char * pHost = 0, unsigned short port = 0 );

	void Set( const char * pHost = 0, unsigned short port = 0 );

	void Set( unsigned int addr, unsigned short port );
	void Set(          int addr, unsigned short port ) { Set( (unsigned int) addr, port); };

	// addr can be host byte order and special addresses( INADDR_ANY, INADDR_BROADCAST ... , etc. );

	unsigned int   GetAddr() const;
	unsigned short GetPort() const;
	const char * GetIPAddr() const;
	void GetSockName( HSocket & sock );
	void GetPeerName( HSocket & sock );
};

#if !defined(WIN32) && !defined(__CYGWIN32__)
class HUnixAddr
{
public:
	struct sockaddr_un m_sockaddr;
	unsigned int m_socklen;

	HUnixAddr( const char * path  = 0 );
	void Set( const char * path );
	const char * Get() const { return m_sockaddr.sun_path; };
};
#else
class HUnixAddr
{
public:
	HUnixAddr( const char * path  = 0 ) {};
	void Set( const char * path ) {};
	const char * Get() const {};
};
#endif

class HInetAddrList
{
public:
	unsigned int m_addrs[H_MAX_ADDRESS_LIST];
	unsigned int m_masks[H_MAX_ADDRESS_LIST];
	int m_count;
	HInetAddrList() :m_count(0) {};
	bool Add( const char * pcIP, const char * pcMask = 0 );
	bool Check( unsigned int addr ) const;
	bool Check( HInetAddr & addr ) const;
	bool CheckRemote( HSocket * pSocket ) const;
	int GetSize() const { return m_count; };
};

class HFDObject
{
protected:
	HFD_T m_fd;

public:
	HFDObject() : m_fd(INVALID_FD) {};
	virtual ~HFDObject() {};
	/// get file descriptor
	virtual int  GetFd() const{ return m_fd;};
	virtual void SetFd( HFD_T fd ) { m_fd = fd;};

	/** 
	multiplexing file descriptors This selection occurs in reading fd.
	@return index where event occurred.  return -1 when time out return -2 when error occured.
	*/
	static int Select( int length, HFDObject ** ppFDArray, int msec =-1 );
};

class HSocket : public HFDObject
{
protected:

#if defined(WIN32) && !defined(__CYGWIN32__)
	HANDLE m_EventForSelect;
#endif

	unsigned short m_port;
	struct sockaddr_in m_sockaddr;

	struct sockaddr_un * m_pUnixAddr;

public:
	HSocket();
	virtual ~HSocket();

public:
	/**
	 * @param port		TCP or UDP Port
	 * @param sockType	SOCK_STREAM(TCP), SOCK_DGRAM(UDP)
	 * @param hostName	In Multi-homed Host, chosen ip will be bound.
	 * @return 		bind success or not.
	 */
	bool Create( unsigned short port = 0, int sockType = SOCK_STREAM, const char * hostName = NULL );


	/**
	 * @param unixSocketPath	unixSocket binding path
	 * @param sockType		SOCK_STREAM, SOCK_DGRAM
	 * @param clean			true: before creation, unixSocketPath deleting or not.
	 * @return		bind success or not
	 */
	bool CreateUnix( const char * unixSocketPath, int sockType = SOCK_STREAM, bool clean = true  );


	/**
	 * @param flag		0: Receive shut down, 1: Send shut down, 2: Both shut down
	 * @return 		false: Failure true:Success
	 */
	bool Shutdown( int flag = 2 ); // 2 == SHUT_RDWR ( in old compiler, SHUT_* is not defined )


	/**
	 * Socket Closing
	 * @return 		false: Failure true:Success
	 */
	bool Close();


	/**
	 * @param hostName	target host (IP Address, Hostname can be OK)
	 * @param port		target port
	 * @return 		false: Failure true: Success
	 */
	bool Connect( const char * hostName, unsigned short port );


	/**
	 * @param pathName	Target Unix Socket's path
	 * @return 		false: Failure true: Success
	 */
	bool Connect( const char * pathName );


	/**
	 * @param buf		Buffer to be sent
	 * @param length	Content length, if -1 then , strlen()'s value will be used.
	 * @return		sent length. 0: closed, -1: error
	 */
	int Send( const char * buf, int length = -1 );


	/**
	 * @param buf		Buffer to be sent
	 * @param length	Content length, if -1 then , strlen()'s value will be used.
	 * @return		sent length. 0: closed, -1: error
	 */
	int Send( const char * buf, unsigned int length = -1 ) { return Send(buf,(int) length);};


	/**
	 * @param buf		Buffer to be sent
	 * @param length	Content length, if -1 then , strlen()'s value will be used.
	 * @param addr		Target UDP Address
	 * @return		sent length. 0: closed, -1: error
	 */
	int SendTo( const char * buf, int length, const HInetAddr & addr );


	/**
	 * @param buf		Buffer to be sent
	 * @param length	Content length, if -1 then , strlen()'s value will be used.
	 * @param addr		Target UDP Address in Unix Socket Domain
	 * @return		sent length. 0: closed, -1: error
	 */
	int SendTo( const char * buf, int length, const HUnixAddr & addr );


	/**
	 * @param buf		Buffer to be stored.
	 * @param size		Maximun buf length.
	 * @param mSecTimeOut	Waiting time (sec)
	 * @param flag		0: receive. MSG_PEEK: Peek from socket receive que.
	 * @return		Received length, 0: close, H_ESELECT: error, H_TIMEOUT: timeout
	 */
	int Receive( char * buf, int size, int mSecTimeOut=0, int flag = 0);


	/**
	 * @param buf		Buffer to be stored.
	 * @param size		Maximun buf length.
	 * @param addr		Remote address to be stored.
	 * @return		Received length, 0: close, -1: error
	 */
	virtual int ReceiveFrom( char * buf, int size, HInetAddr & addr ) {return ReceiveFrom( buf,size,0,addr);};
	

	/**
	 * @param buf		Buffer to be stored.
	 * @param size		Maximun buf length.
	 * @param addr		Remote address to be stored.
	 * @return		Received length, 0: close, -1: error
	 */
	virtual int ReceiveFrom( char * buf, int size, HUnixAddr & addr ) {return ReceiveFrom( buf,size,0,addr);};
	
	

	/**
	 * @param buf		Buffer to be stored.
	 * @param size		Maximun buf length.
	 * @param flag		0: receive. MSG_PEEK: Peek from socket receive que.
	 * @param addr		Remote address to be stored.
	 * @return		Received length, 0: close, -1: error
	 */
	virtual int ReceiveFrom( char * buf, int size, int flag, HInetAddr & addr );
	

	/**
	 * @param buf		Buffer to be stored.
	 * @param size		Maximun buf length.
	 * @param flag		0: receive. MSG_PEEK: Peek from socket receive que.
	 * @param addr		Remote address to be stored.
	 * @return		Received length, 0: close, -1: error
	 */
	virtual int ReceiveFrom( char * buf, int size, int flag, HUnixAddr & addr );
	

	/**
	 * @doc			Convert to broadcasting socket.
	 * @memo		the socket must be created as UDP.
	 * @return 		true: success, false: failure
	 */
	bool SetAsBroadcasting();

	bool SetAsNoLinger();
	bool SetAsKeepAlive();

	bool Listen( int max = 15);
	bool Accept( HSocket * pNewClientSock );
	bool Accept( HSocket & newClientSock );

	const char * GetLocalIP() const;
	const char * GetRemoteIP() const;
	unsigned short GetLocalPort() const;
	unsigned short GetRemotePort() const;

	int  GetSendBufferSize();
	int  GetRecvBufferSize();
	bool SetSendBufferSize( int size );
	bool SetRecvBufferSize( int size );

#if defined(WIN32) && !defined(__CYGWIN32__)
	operator HANDLE() { return m_EventForSelect;}; // Refer WSAEventSelect
#endif

	int HSelect( long lNetworkEvents = FD_READ | FD_CLOSE );
	static int Select( int length, HSocket pFDArray[], int msec = -1);
	static int Select( int length, HSocket * ppFDArray[], int msec =-1 );

	static const char * GetIPAddrByName( const char * hostname );

protected:
	bool Bind();

};

typedef int (*HServerSocketCallBack)( HSocket *pClientSock, void *pParam );

class HServerSocket : public HSocket
{
public:
	
	HServerSocket();
	virtual ~HServerSocket();
	void Set( HServerSocketCallBack pFunc, void * pParam );

	int CheckAndFork( int iTimeOut = 0 );
	int Run();

	static void KillAllChildren();

protected:

	HServerSocketCallBack m_CallBack;
	void * m_Param;

#if defined(WIN32) && !defined(__CYGWIN32__)
	static set<HANDLE> s_pidChildren;
#else
	static set<pid_t> s_pidChildren;
#endif

public:
	static void SIGCHLD_HANDLE( int sig );
};

#endif // _HSOCKET_H_
