#ifndef HSOCKSTD_H
#define HSOCKSTD_H

#ifdef HSOCKLIB

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#else

#if !defined(WIN32) || defined(__CYGWIN32__)
#include "hsock_config.h"
#endif

#endif


// Visual C++
#if defined(WIN32) && !defined(__CYGWIN32__)
	#include <winsock2.h>
	typedef SOCKET HFD_T;
	#define socklen_t int

// UNIX GNU C++
#else
#ifndef __EXTENSIONS__
	#define __EXTENSIONS__ 1  
#endif
	/* We need some exetensions for some library
	 * Especially, I found in Solaris default C library
	 * it requires __EXTENSIONS__ in struct timeval declaration.
	 */
#ifndef _XOPEN_SOURCE
	#define _XOPEN_SOURCE 500
#endif
#ifndef _XOPEN_SOURCE_EXTENTED
	#define _XOPEN_SOURCE_EXTENDED 1
#endif
	/* We need _XOPEN_SOURCE_EXTENTED for HPUX
	 * which use socklen_t
	 */

	// for HP-UX
#ifndef _HPUX_SOURCE
	#define _HPUX_SOURCE
#endif
#ifndef __HP_NO_MATH_OVERLOADS
	#define __HP_NO_MATH_OVERLOADS
#endif	
#ifndef __HPACC_USING_MULTIPLIES_IN_FUNCTIONAL
	#define __HPACC_USING_MULTIPLIES_IN_FUNCTIONAL
#endif
	// for AIX _ALL_SOURCE
#ifndef _ALL_SOURCE
	#define _ALL_SOURCE
#endif  //_ALL_SOURCE

	// for BSD
#ifndef _BSD_SOURCE
	#define _BSD_SOURCE
#endif


#ifdef HAVE_SYS_TIME_H
	#include <sys/time.h>
#endif
#ifdef HAVE_SYS_TYPES_H
	#include <sys/types.h>
#endif
#ifdef HAVE_SYS_SOCKET_H
	#include <sys/socket.h>
#endif
#ifdef HAVE_SYS_UN_H
	#include <sys/un.h>
#endif
#ifdef HAVE_SYS_WAIT_H
	#include <sys/wait.h>
#endif
#ifdef HAVE_NETINET_IN_H
	#include <netinet/in.h>
#endif
#ifdef HAVE_ARPA_INET_H
	#include <arpa/inet.h>
#endif
#ifdef HAVE_SIGNAL_H
	#include <signal.h>
#endif
#ifdef HAVE_NETDB_H
	#include <netdb.h>
#endif
#ifdef HAVE_UNISTD_H
	#include <unistd.h>
#endif
#ifdef HAVE_STDLIB_H
	#include <stdlib.h>
#endif
#ifdef HAVE_STRING_H
	#include <string.h>
#endif
#ifdef HAVE_STRINGS_H
	#include <strings.h>
#endif
	#include <iostream>
	#include <stdio.h>
	#include <errno.h>

	typedef int HFD_T;
	typedef struct sockaddr_in SOCKADDR_IN;

	#define FD_READ		0x01
	#define FD_WRITE	0x02
	#define FD_OOB		0x04
	#define FD_ACCEPT	0x08
	#define FD_CONNECT	0x10
	#define FD_CLOSE	0x20
	#define SOCKET_ERROR 	(-1)

#endif // #if defined(WIN32) && !defined(__CYGWIN32__)



#endif // #ifndef HSOCKSTD_H
