# Makefile.in generated by automake 1.6 from Makefile.am.
# Makefile.  Generated from Makefile.in by configure.

# Copyright 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002
# Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.


SHELL = /bin/sh

srcdir = .
top_srcdir = .

prefix = /usr/local
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include
pkgdatadir = $(datadir)/hsocket
pkglibdir = $(libdir)/hsocket
pkgincludedir = $(includedir)/hsocket
top_builddir = .

ACLOCAL = ${SHELL} /cygdrive/c/Users/rpnigam/Source/Repos/cplusplus-play/get-stock-details/hsocket-0.4.0/missing --run aclocal-1.6
AUTOCONF = ${SHELL} /cygdrive/c/Users/rpnigam/Source/Repos/cplusplus-play/get-stock-details/hsocket-0.4.0/missing --run autoconf
AUTOMAKE = ${SHELL} /cygdrive/c/Users/rpnigam/Source/Repos/cplusplus-play/get-stock-details/hsocket-0.4.0/missing --run automake-1.6
AUTOHEADER = ${SHELL} /cygdrive/c/Users/rpnigam/Source/Repos/cplusplus-play/get-stock-details/hsocket-0.4.0/missing --run autoheader

am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
INSTALL_SCRIPT = ${INSTALL}
INSTALL_HEADER = $(INSTALL_DATA)
transform = s,x,x,
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :

EXEEXT = .exe
OBJEXT = o
PATH_SEPARATOR = :
AMTAR = ${SHELL} /cygdrive/c/Users/rpnigam/Source/Repos/cplusplus-play/get-stock-details/hsocket-0.4.0/missing --run tar
AWK = gawk
CXX = g++
DEPDIR = .deps
INSTALL_STRIP_PROGRAM = ${SHELL} $(install_sh) -c -s
LIBNSL = 
LIBSOCKET = 
PACKAGE = hsocket
RANLIB = ranlib
STRIP = 
VERSION = 0.4.0
am__include = include
am__quote = 
install_sh = /cygdrive/c/Users/rpnigam/Source/Repos/cplusplus-play/get-stock-details/hsocket-0.4.0/install-sh
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
mangchi_LDADD = libhsocket.a  
subdir = .
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = config.h
CONFIG_CLEAN_FILES =
LIBRARIES = $(lib_LIBRARIES)

libhsocket_a_AR = $(AR) cru
libhsocket_a_LIBADD =
am_libhsocket_a_OBJECTS = libhsocket_a-hsocket.$(OBJEXT)
libhsocket_a_OBJECTS = $(am_libhsocket_a_OBJECTS)
noinst_PROGRAMS = mangchi$(EXEEXT)
PROGRAMS = $(noinst_PROGRAMS)

am_mangchi_OBJECTS = mangchi-mangchi.$(OBJEXT)
mangchi_OBJECTS = $(am_mangchi_OBJECTS)
mangchi_DEPENDENCIES = libhsocket.a
mangchi_LDFLAGS =

DEFS = -DHAVE_CONFIG_H
DEFAULT_INCLUDES =  -I. -I$(srcdir) -I.
CPPFLAGS = 
LDFLAGS = 
LIBS = 
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__depfiles_maybe = depfiles
DEP_FILES = ./$(DEPDIR)/libhsocket_a-hsocket.Po \
	./$(DEPDIR)/mangchi-mangchi.Po
CXXCOMPILE = $(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
CXXLD = $(CXX)
CXXLINK = $(CXXLD) $(AM_CXXFLAGS) $(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) \
	-o $@
CXXFLAGS = -g -O2
CFLAGS = -g -O2
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
DIST_SOURCES = $(libhsocket_a_SOURCES) $(mangchi_SOURCES)
HEADERS = $(include_HEADERS)

DIST_COMMON = README $(include_HEADERS) AUTHORS COPYING ChangeLog \
	INSTALL Makefile.am Makefile.in NEWS TODO acinclude.m4 \
	aclocal.m4 config.h.in configure configure.in depcomp \
	install-sh missing mkinstalldirs
SOURCES = $(libhsocket_a_SOURCES) $(mangchi_SOURCES)

all: config.h
	$(MAKE) $(AM_MAKEFLAGS) all-am

.SUFFIXES:
.SUFFIXES: .c .h .o .cpp .obj
$(srcdir)/Makefile.in:  Makefile.am  $(top_srcdir)/configure.in $(ACLOCAL_M4)
	cd $(top_srcdir) && \
	  $(AUTOMAKE) --gnu  Makefile
Makefile:  $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) && $(SHELL) ./config.status $@ $(am__depfiles_maybe)

$(top_builddir)/config.status: $(srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	$(SHELL) ./config.status --recheck
$(srcdir)/configure:  $(srcdir)/configure.in $(ACLOCAL_M4) $(CONFIGURE_DEPENDENCIES)
	cd $(srcdir) && $(AUTOCONF)

$(ACLOCAL_M4):  configure.in acinclude.m4
	cd $(srcdir) && $(ACLOCAL) $(ACLOCAL_AMFLAGS)

config.h: stamp-h1
	@if test ! -f $@; then \
	  rm -f stamp-h1; \
	  $(MAKE) stamp-h1; \
	else :; fi

stamp-h1: $(srcdir)/config.h.in $(top_builddir)/config.status
	@rm -f stamp-h1
	cd $(top_builddir) && $(SHELL) ./config.status config.h

$(srcdir)/config.h.in:  $(top_srcdir)/configure.in $(ACLOCAL_M4) 
	cd $(top_srcdir) && $(AUTOHEADER)
	touch $(srcdir)/config.h.in

distclean-hdr:
	-rm -f config.h

AR = ar
libLIBRARIES_INSTALL = $(INSTALL_DATA)
install-libLIBRARIES: $(lib_LIBRARIES)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(libdir)
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    f="`echo $$p | sed -e 's|^.*/||'`"; \
	    echo " $(libLIBRARIES_INSTALL) $$p $(DESTDIR)$(libdir)/$$f"; \
	    $(libLIBRARIES_INSTALL) $$p $(DESTDIR)$(libdir)/$$f; \
	  else :; fi; \
	done
	@$(POST_INSTALL)
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    p="`echo $$p | sed -e 's|^.*/||'`"; \
	    echo " $(RANLIB) $(DESTDIR)$(libdir)/$$p"; \
	    $(RANLIB) $(DESTDIR)$(libdir)/$$p; \
	  else :; fi; \
	done

uninstall-libLIBRARIES:
	@$(NORMAL_UNINSTALL)
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  p="`echo $$p | sed -e 's|^.*/||'`"; \
	  echo " rm -f $(DESTDIR)$(libdir)/$$p"; \
	  rm -f $(DESTDIR)$(libdir)/$$p; \
	done

clean-libLIBRARIES:
	-test -z "$(lib_LIBRARIES)" || rm -f $(lib_LIBRARIES)
libhsocket_a-hsocket.$(OBJEXT): hsocket.cpp
libhsocket.a: $(libhsocket_a_OBJECTS) $(libhsocket_a_DEPENDENCIES) 
	-rm -f libhsocket.a
	$(libhsocket_a_AR) libhsocket.a $(libhsocket_a_OBJECTS) $(libhsocket_a_LIBADD)
	$(RANLIB) libhsocket.a

clean-noinstPROGRAMS:
	-test -z "$(noinst_PROGRAMS)" || rm -f $(noinst_PROGRAMS)
mangchi-mangchi.$(OBJEXT): mangchi.cpp
mangchi$(EXEEXT): $(mangchi_OBJECTS) $(mangchi_DEPENDENCIES) 
	@rm -f mangchi$(EXEEXT)
	$(CXXLINK) $(mangchi_LDFLAGS) $(mangchi_OBJECTS) $(mangchi_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT) core *.core

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/libhsocket_a-hsocket.Po
include ./$(DEPDIR)/mangchi-mangchi.Po

distclean-depend:
	-rm -rf ./$(DEPDIR)

.cpp.o:
	source='$<' object='$@' libtool=no \
	depfile='$(DEPDIR)/$*.Po' tmpdepfile='$(DEPDIR)/$*.TPo' \
	$(CXXDEPMODE) $(depcomp) \
	$(CXXCOMPILE) -c -o $@ `test -f $< || echo '$(srcdir)/'`$<

.cpp.obj:
	source='$<' object='$@' libtool=no \
	depfile='$(DEPDIR)/$*.Po' tmpdepfile='$(DEPDIR)/$*.TPo' \
	$(CXXDEPMODE) $(depcomp) \
	$(CXXCOMPILE) -c -o $@ `cygpath -w $<`

libhsocket_a-hsocket.o: hsocket.cpp
	source='hsocket.cpp' object='libhsocket_a-hsocket.o' libtool=no \
	depfile='$(DEPDIR)/libhsocket_a-hsocket.Po' tmpdepfile='$(DEPDIR)/libhsocket_a-hsocket.TPo' \
	$(CXXDEPMODE) $(depcomp) \
	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libhsocket_a_CXXFLAGS) $(CXXFLAGS) -c -o libhsocket_a-hsocket.o `test -f hsocket.cpp || echo '$(srcdir)/'`hsocket.cpp

libhsocket_a-hsocket.obj: hsocket.cpp
	source='hsocket.cpp' object='libhsocket_a-hsocket.obj' libtool=no \
	depfile='$(DEPDIR)/libhsocket_a-hsocket.Po' tmpdepfile='$(DEPDIR)/libhsocket_a-hsocket.TPo' \
	$(CXXDEPMODE) $(depcomp) \
	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libhsocket_a_CXXFLAGS) $(CXXFLAGS) -c -o libhsocket_a-hsocket.obj `cygpath -w hsocket.cpp`

mangchi-mangchi.o: mangchi.cpp
	source='mangchi.cpp' object='mangchi-mangchi.o' libtool=no \
	depfile='$(DEPDIR)/mangchi-mangchi.Po' tmpdepfile='$(DEPDIR)/mangchi-mangchi.TPo' \
	$(CXXDEPMODE) $(depcomp) \
	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(mangchi_CXXFLAGS) $(CXXFLAGS) -c -o mangchi-mangchi.o `test -f mangchi.cpp || echo '$(srcdir)/'`mangchi.cpp

mangchi-mangchi.obj: mangchi.cpp
	source='mangchi.cpp' object='mangchi-mangchi.obj' libtool=no \
	depfile='$(DEPDIR)/mangchi-mangchi.Po' tmpdepfile='$(DEPDIR)/mangchi-mangchi.TPo' \
	$(CXXDEPMODE) $(depcomp) \
	$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(mangchi_CXXFLAGS) $(CXXFLAGS) -c -o mangchi-mangchi.obj `cygpath -w mangchi.cpp`
CXXDEPMODE = depmode=gcc3
uninstall-info-am:
includeHEADERS_INSTALL = $(INSTALL_HEADER)
install-includeHEADERS: $(include_HEADERS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(includedir)
	@list='$(include_HEADERS)'; for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  f="`echo $$p | sed -e 's|^.*/||'`"; \
	  echo " $(includeHEADERS_INSTALL) $$d$$p $(DESTDIR)$(includedir)/$$f"; \
	  $(includeHEADERS_INSTALL) $$d$$p $(DESTDIR)$(includedir)/$$f; \
	done

uninstall-includeHEADERS:
	@$(NORMAL_UNINSTALL)
	@list='$(include_HEADERS)'; for p in $$list; do \
	  f="`echo $$p | sed -e 's|^.*/||'`"; \
	  echo " rm -f $(DESTDIR)$(includedir)/$$f"; \
	  rm -f $(DESTDIR)$(includedir)/$$f; \
	done

ETAGS = etags
ETAGSFLAGS =

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)
	list='$(SOURCES) $(HEADERS) $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	mkid -fID $$unique

TAGS:  $(HEADERS) $(SOURCES) config.h.in $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS) config.h.in $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$tags$$unique" \
	  || $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	     $$tags $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && cd $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) $$here

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)

top_distdir = .
distdir = $(PACKAGE)-$(VERSION)

am__remove_distdir = \
  { test ! -d $(distdir) \
    || { find $(distdir) -type d ! -perm -200 -exec chmod u+w {} ';' \
         && rm -fr $(distdir); }; }

GZIP_ENV = --best
distcleancheck_listfiles = find . -type f -print

distdir: $(DISTFILES)
	$(am__remove_distdir)
	mkdir $(distdir)
	@for file in $(DISTFILES); do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  dir=`echo "$$file" | sed -e 's,/[^/]*$$,,'`; \
	  if test "$$dir" != "$$file" && test "$$dir" != "."; then \
	    dir="/$$dir"; \
	    $(mkinstalldirs) "$(distdir)$$dir"; \
	  else \
	    dir=''; \
	  fi; \
	  if test -d $$d/$$file; then \
	    cp -pR $$d/$$file $(distdir)$$dir \
	    || exit 1; \
	  else \
	    test -f $(distdir)/$$file \
	    || cp -p $$d/$$file $(distdir)/$$file \
	    || exit 1; \
	  fi; \
	done
	-find $(distdir) -type d ! -perm -777 -exec chmod a+rwx {} \; -o \
	  ! -type d ! -perm -444 -links 1 -exec chmod a+r {} \; -o \
	  ! -type d ! -perm -400 -exec chmod a+r {} \; -o \
	  ! -type d ! -perm -444 -exec $(SHELL) $(install_sh) -c -m a+r {} {} \; \
	|| chmod -R a+r $(distdir)
dist-gzip: distdir
	$(AMTAR) chof - $(distdir) | GZIP=$(GZIP_ENV) gzip -c >$(distdir).tar.gz
	$(am__remove_distdir)

dist dist-all: distdir
	$(AMTAR) chof - $(distdir) | GZIP=$(GZIP_ENV) gzip -c >$(distdir).tar.gz
	$(am__remove_distdir)

# This target untars the dist file and tries a VPATH configuration.  Then
# it guarantees that the distribution is self-contained by making another
# tarfile.
distcheck: dist
	$(am__remove_distdir)
	GZIP=$(GZIP_ENV) gunzip -c $(distdir).tar.gz | $(AMTAR) xf -
	chmod -R a-w $(distdir); chmod a+w $(distdir)
	mkdir $(distdir)/=build
	mkdir $(distdir)/=inst
	chmod a-w $(distdir)
	dc_install_base=`$(am__cd) $(distdir)/=inst && pwd` \
	  && cd $(distdir)/=build \
	  && ../configure --srcdir=.. --prefix=$$dc_install_base \
	    $(DISTCHECK_CONFIGURE_FLAGS) \
	  && $(MAKE) $(AM_MAKEFLAGS) \
	  && $(MAKE) $(AM_MAKEFLAGS) dvi \
	  && $(MAKE) $(AM_MAKEFLAGS) check \
	  && $(MAKE) $(AM_MAKEFLAGS) install \
	  && $(MAKE) $(AM_MAKEFLAGS) installcheck \
	  && $(MAKE) $(AM_MAKEFLAGS) uninstall \
	  && (test `find $$dc_install_base -type f -print | wc -l` -le 1 \
	      || { echo "ERROR: files left after uninstall:" ; \
	           find $$dc_install_base -type f -print ; \
	           exit 1; } >&2 ) \
	  && $(MAKE) $(AM_MAKEFLAGS) dist-gzip \
	  && rm -f $(distdir).tar.gz \
	  && $(MAKE) $(AM_MAKEFLAGS) distcleancheck
	$(am__remove_distdir)
	@echo "$(distdir).tar.gz is ready for distribution" | \
	  sed 'h;s/./=/g;p;x;p;x'
distcleancheck: distclean
	if test '$(srcdir)' = . ; then \
	  echo "ERROR: distcleancheck can only run from a VPATH build" ; \
	  exit 1 ; \
	fi
	test `$(distcleancheck_listfiles) | wc -l` -eq 0 \
	  || { echo "ERROR: files left after distclean:" ; \
	       $(distcleancheck_listfiles) ; \
	       exit 1; } >&2
check-am: all-am
check: check-am
all-am: Makefile $(LIBRARIES) $(PROGRAMS) $(HEADERS) config.h

installdirs:
	$(mkinstalldirs) $(DESTDIR)$(libdir) $(DESTDIR)$(includedir)

install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	  INSTALL_STRIP_FLAG=-s \
	  `test -z '$(STRIP)' || \
	    echo "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'"` install
mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES) stamp-h stamp-h[0-9]*

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libLIBRARIES clean-noinstPROGRAMS \
	mostlyclean-am

distclean: distclean-am
	-rm -f config.status config.cache config.log
distclean-am: clean-am distclean-compile distclean-depend \
	distclean-generic distclean-hdr distclean-tags

dvi: dvi-am

dvi-am:

info: info-am

info-am:

install-data-am: install-includeHEADERS

install-exec-am: install-libLIBRARIES

install-info: install-info-am

install-man:

installcheck-am:

maintainer-clean: maintainer-clean-am

maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic

uninstall-am: uninstall-includeHEADERS uninstall-info-am \
	uninstall-libLIBRARIES

.PHONY: GTAGS all all-am check check-am clean clean-generic \
	clean-libLIBRARIES clean-noinstPROGRAMS dist dist-all dist-gzip \
	distcheck distclean distclean-compile distclean-depend \
	distclean-generic distclean-hdr distclean-tags distcleancheck \
	distdir dvi dvi-am info info-am install install-am install-data \
	install-data-am install-exec install-exec-am \
	install-includeHEADERS install-info install-info-am \
	install-libLIBRARIES install-man install-strip installcheck \
	installcheck-am installdirs maintainer-clean \
	maintainer-clean-generic mostlyclean mostlyclean-compile \
	mostlyclean-generic tags uninstall uninstall-am \
	uninstall-includeHEADERS uninstall-info-am \
	uninstall-libLIBRARIES


hsock_config.h: config.h
	cp -f config.h hsock_config.h 2>/dev/null
# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
