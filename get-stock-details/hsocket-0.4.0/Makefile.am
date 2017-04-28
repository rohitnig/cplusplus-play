SUFFIXES = .c .h .o .cpp

lib_LIBRARIES = libhsocket.a
include_HEADERS = hsocket.h hsock_config.h hsockstd.h
noinst_PROGRAMS = mangchi
EXTRA_HEADERS = hsock_config.h

libhsocket_a_SOURCES = \
			hsockstd.h \
			hsocket.cpp \
			hsocket.h
libhsocket_a_CXXFLAGS = -DHSOCKLIB
libhsocket_a_DEPENDENCIES = hsock_config.h

mangchi_SOURCES = mangchi.cpp
mangchi_CXXFLAGS =
mangchi_LIBS = -L.
mangchi_LDADD = libhsocket.a @LIBSOCKET@ @LIBNSL@

hsock_config.h: config.h
	cp -f config.h hsock_config.h 2>/dev/null
