# Generated automatically from Makefile.in by configure.
# Makefile.in generated automatically by automake 1.4 from Makefile.am

# Copyright (C) 1994, 1995-8, 1999 Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.

# -*- makefile -*-


SHELL = /bin/bash

srcdir = .
top_srcdir = ..
prefix = /usr
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = /home/andrewec/dslinux/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = /home/andrewec/dslinux/include
oldincludedir = /usr/include

DESTDIR =

pkgdatadir = $(datadir)/console-tools
pkglibdir = $(libdir)/console-tools
pkgincludedir = $(includedir)/console-tools

top_builddir = ..

ACLOCAL = /home/andrewec/dslinux/user/console-tools/src/missing aclocal
AUTOCONF = /home/andrewec/dslinux/user/console-tools/src/missing autoconf
AUTOMAKE = /home/andrewec/dslinux/user/console-tools/src/missing automake
AUTOHEADER = /home/andrewec/dslinux/user/console-tools/src/missing autoheader

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL} $(AM_INSTALL_PROGRAM_FLAGS)
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL_PROGRAM}
transform = s,x,x,

NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_alias = arm-linux-elf
build_triplet = arm-linux-elf
host_alias = arm-linux-elf
host_triplet = arm-linux-elf
target_alias = arm-linux-elf
target_triplet = arm-linux-elf
AS = @AS@
CATALOGS = 
CATOBJEXT = 
CC = ucfront-gcc arm-linux-elf-gcc 
COMPAT = nocompat
DATADIRNAME = share
DLLTOOL = @DLLTOOL@
FONTDIR = consolefonts
GENCAT = 
GMOFILES =  cs.gmo de.gmo ru.gmo da.gmo et_EE.gmo ga.gmo fr.gmo it.gmo
GMSGFMT = 
GT_NO = 
GT_YES = #YES#
INCLUDE_LOCALE_H = #include <locale.h>
INSTOBJEXT = 
INTLDEPS = 
INTLLIBS = 
INTLOBJS = 
KEYCODES = 
KEYMAPDIR = keymaps
LD = arm-linux-elf-ld
LEX = flex
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LN_S = ln -s
LOADKEYS = loadkeys
MAKEINFO = makeinfo
MKINSTALLDIRS = ./mkinstalldirs
MSGFMT = 
NM = /usr/bin/nm -B
OBJDUMP = @OBJDUMP@
PACKAGE = console-tools
POFILES =  cs.po de.po ru.po da.po et_EE.po ga.po fr.po it.po
POSUB = 
RANLIB = arm-linux-elf-ranlib
RESIZECONS = 
TRANSDIR = consoletrans
UNICODEDATA = 
UNICODELISTS = 
USE_INCLUDED_LIBINTL = no
USE_NLS = no
VERSION = 0.2.3
VIDEOMODEDIR = videomodes
YACC = bison -y
l = 
translit = @translit@

AUTOMAKE_OPTIONS = foreign
INCLUDES = -I$(top_srcdir)/include

bin_PROGRAMS = chvt deallocvt writevt fgconsole screendump setvesablank 	vcstime vt-is-UTF8 openvt 

EXTRA_PROGRAMS = resizecons

LDADD = ../lib/libctlocal.a ../lib/libconsole.la ../lib/libctutils.la

vcstime_LDADD = ../lib/libctlocal.a
screendump_LDADD = ../lib/libctlocal.a ../lib/libctutils.la
writevt_LDADD = ../lib/libctlocal.a ../lib/libctutils.la
resizecons_LDADD = ../lib/libcfont.la $(LDADD)
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = ../config.h
CONFIG_CLEAN_FILES = 
PROGRAMS =  $(bin_PROGRAMS)


DEFS = -DHAVE_CONFIG_H -I. -I$(srcdir) -I..
CPPFLAGS = 
LDFLAGS = -Wl,-elf2flt -D__PIC__ -fpic -msingle-pic-base -mswp-byte-writes
LIBS = -lintl -liconv
resizecons_SOURCES = resizecons.c
resizecons_OBJECTS =  resizecons.o
resizecons_DEPENDENCIES =  ../lib/libcfont.la ../lib/libctlocal.a \
../lib/libconsole.la ../lib/libctutils.la
resizecons_LDFLAGS = 
chvt_SOURCES = chvt.c
chvt_OBJECTS =  chvt.o
chvt_LDADD = $(LDADD)
chvt_DEPENDENCIES =  ../lib/libctlocal.a ../lib/libconsole.la \
../lib/libctutils.la
chvt_LDFLAGS = 
deallocvt_SOURCES = deallocvt.c
deallocvt_OBJECTS =  deallocvt.o
deallocvt_LDADD = $(LDADD)
deallocvt_DEPENDENCIES =  ../lib/libctlocal.a ../lib/libconsole.la \
../lib/libctutils.la
deallocvt_LDFLAGS = 
writevt_SOURCES = writevt.c
writevt_OBJECTS =  writevt.o
writevt_DEPENDENCIES =  ../lib/libctlocal.a ../lib/libctutils.la
writevt_LDFLAGS = 
fgconsole_SOURCES = fgconsole.c
fgconsole_OBJECTS =  fgconsole.o
fgconsole_LDADD = $(LDADD)
fgconsole_DEPENDENCIES =  ../lib/libctlocal.a ../lib/libconsole.la \
../lib/libctutils.la
fgconsole_LDFLAGS = 
screendump_SOURCES = screendump.c
screendump_OBJECTS =  screendump.o
screendump_DEPENDENCIES =  ../lib/libctlocal.a ../lib/libctutils.la
screendump_LDFLAGS = 
setvesablank_SOURCES = setvesablank.c
setvesablank_OBJECTS =  setvesablank.o
setvesablank_LDADD = $(LDADD)
setvesablank_DEPENDENCIES =  ../lib/libctlocal.a ../lib/libconsole.la \
../lib/libctutils.la
setvesablank_LDFLAGS = 
vcstime_SOURCES = vcstime.c
vcstime_OBJECTS =  vcstime.o
vcstime_DEPENDENCIES =  ../lib/libctlocal.a
vcstime_LDFLAGS = 
vt_is_UTF8_SOURCES = vt-is-UTF8.c
vt_is_UTF8_OBJECTS =  vt-is-UTF8.o
vt_is_UTF8_LDADD = $(LDADD)
vt_is_UTF8_DEPENDENCIES =  ../lib/libctlocal.a ../lib/libconsole.la \
../lib/libctutils.la
vt_is_UTF8_LDFLAGS = 
openvt_SOURCES = openvt.c
openvt_OBJECTS =  openvt.o
openvt_LDADD = $(LDADD)
openvt_DEPENDENCIES =  ../lib/libctlocal.a ../lib/libconsole.la \
../lib/libctutils.la
openvt_LDFLAGS = 
CFLAGS = -O2 -g -fomit-frame-pointer -fno-common -fno-builtin -Wall  -mswp-byte-writes -DCONFIG_NDS_ROM8BIT -mcpu=arm946e-s -mfpu=fpe3 -DEMBED -D__PIC__ -fpic -msingle-pic-base -Dlinux -D__linux__ -Dunix -D__uClinux__
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) --mode=compile $(CC) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(LIBTOOL) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(LDFLAGS) -o $@
DIST_COMMON =  Makefile.am Makefile.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = tar
GZIP_ENV = --best
SOURCES = resizecons.c chvt.c deallocvt.c writevt.c fgconsole.c screendump.c setvesablank.c vcstime.c vt-is-UTF8.c openvt.c
OBJECTS = resizecons.o chvt.o deallocvt.o writevt.o fgconsole.o screendump.o setvesablank.o vcstime.o vt-is-UTF8.o openvt.o

all: all-redirect
.SUFFIXES:
.SUFFIXES: .S .c .lo .o .s
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4) 
	#cd $(top_srcdir) && $(AUTOMAKE) --foreign --include-deps vttools/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status


mostlyclean-binPROGRAMS:

clean-binPROGRAMS:
	-test -z "$(bin_PROGRAMS)" || rm -f $(bin_PROGRAMS)

distclean-binPROGRAMS:

maintainer-clean-binPROGRAMS:

install-binPROGRAMS: $(bin_PROGRAMS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(bindir)
	@list='$(bin_PROGRAMS)'; for p in $$list; do \
	  if test -f $$p; then \
	    echo " $(LIBTOOL)  --mode=install $(INSTALL_PROGRAM) $$p $(DESTDIR)$(bindir)/`echo $$p|sed 's/$(EXEEXT)$$//'|sed '$(transform)'|sed 's/$$/$(EXEEXT)/'`"; \
	    $(LIBTOOL)  --mode=install $(INSTALL_PROGRAM) $$p $(DESTDIR)$(bindir)/`echo $$p|sed 's/$(EXEEXT)$$//'|sed '$(transform)'|sed 's/$$/$(EXEEXT)/'`; \
	  else :; fi; \
	done

uninstall-binPROGRAMS:
	@$(NORMAL_UNINSTALL)
	list='$(bin_PROGRAMS)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(bindir)/`echo $$p|sed 's/$(EXEEXT)$$//'|sed '$(transform)'|sed 's/$$/$(EXEEXT)/'`; \
	done

.c.o:
	$(COMPILE) -c $<

.s.o:
	$(COMPILE) -c $<

.S.o:
	$(COMPILE) -c $<

mostlyclean-compile:
	-rm -f *.o core *.core

clean-compile:

distclean-compile:
	-rm -f *.tab.c

maintainer-clean-compile:

.c.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

.s.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

.S.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs

distclean-libtool:

maintainer-clean-libtool:

resizecons: $(resizecons_OBJECTS) $(resizecons_DEPENDENCIES)
	@rm -f resizecons
	$(LINK) $(resizecons_LDFLAGS) $(resizecons_OBJECTS) $(resizecons_LDADD) $(LIBS)

chvt: $(chvt_OBJECTS) $(chvt_DEPENDENCIES)
	@rm -f chvt
	$(LINK) $(chvt_LDFLAGS) $(chvt_OBJECTS) $(chvt_LDADD) $(LIBS)

deallocvt: $(deallocvt_OBJECTS) $(deallocvt_DEPENDENCIES)
	@rm -f deallocvt
	$(LINK) $(deallocvt_LDFLAGS) $(deallocvt_OBJECTS) $(deallocvt_LDADD) $(LIBS)

writevt: $(writevt_OBJECTS) $(writevt_DEPENDENCIES)
	@rm -f writevt
	$(LINK) $(writevt_LDFLAGS) $(writevt_OBJECTS) $(writevt_LDADD) $(LIBS)

fgconsole: $(fgconsole_OBJECTS) $(fgconsole_DEPENDENCIES)
	@rm -f fgconsole
	$(LINK) $(fgconsole_LDFLAGS) $(fgconsole_OBJECTS) $(fgconsole_LDADD) $(LIBS)

screendump: $(screendump_OBJECTS) $(screendump_DEPENDENCIES)
	@rm -f screendump
	$(LINK) $(screendump_LDFLAGS) $(screendump_OBJECTS) $(screendump_LDADD) $(LIBS)

setvesablank: $(setvesablank_OBJECTS) $(setvesablank_DEPENDENCIES)
	@rm -f setvesablank
	$(LINK) $(setvesablank_LDFLAGS) $(setvesablank_OBJECTS) $(setvesablank_LDADD) $(LIBS)

vcstime: $(vcstime_OBJECTS) $(vcstime_DEPENDENCIES)
	@rm -f vcstime
	$(LINK) $(vcstime_LDFLAGS) $(vcstime_OBJECTS) $(vcstime_LDADD) $(LIBS)

vt-is-UTF8: $(vt_is_UTF8_OBJECTS) $(vt_is_UTF8_DEPENDENCIES)
	@rm -f vt-is-UTF8
	$(LINK) $(vt_is_UTF8_LDFLAGS) $(vt_is_UTF8_OBJECTS) $(vt_is_UTF8_LDADD) $(LIBS)

openvt: $(openvt_OBJECTS) $(openvt_DEPENDENCIES)
	@rm -f openvt
	$(LINK) $(openvt_LDFLAGS) $(openvt_OBJECTS) $(openvt_LDADD) $(LIBS)

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP)
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	here=`pwd` && cd $(srcdir) \
	  && mkid -f$$here/ID $$unique $(LISP)

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$unique$(LISP)$$tags" \
	  || (cd $(srcdir) && etags $(ETAGS_ARGS) $$tags  $$unique $(LISP) -o $$here/TAGS)

mostlyclean-tags:

clean-tags:

distclean-tags:
	-rm -f TAGS ID

maintainer-clean-tags:

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = vttools

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  d=$(srcdir); \
	  if test -d $$d/$$file; then \
	    cp -pr $$/$$file $(distdir)/$$file; \
	  else \
	    test -f $(distdir)/$$file \
	    || ln $$d/$$file $(distdir)/$$file 2> /dev/null \
	    || cp -p $$d/$$file $(distdir)/$$file || :; \
	  fi; \
	done

info-am:
info: info-am
dvi-am:
dvi: dvi-am
check-am: all-am
check: check-am
installcheck-am:
installcheck: installcheck-am
install-exec-am: install-binPROGRAMS
install-exec: install-exec-am

install-data-am:
install-data: install-data-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
install: install-am
uninstall-am: uninstall-binPROGRAMS
uninstall: uninstall-am
all-am: Makefile $(PROGRAMS)
all-redirect: all-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) AM_INSTALL_PROGRAM_FLAGS=-s install
installdirs:
	$(mkinstalldirs)  $(DESTDIR)$(bindir)


mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*

maintainer-clean-generic:
mostlyclean-am:  mostlyclean-binPROGRAMS mostlyclean-compile \
		mostlyclean-libtool mostlyclean-tags \
		mostlyclean-generic

mostlyclean: mostlyclean-am

clean-am:  clean-binPROGRAMS clean-compile clean-libtool clean-tags \
		clean-generic mostlyclean-am

clean: clean-am

distclean-am:  distclean-binPROGRAMS distclean-compile distclean-libtool \
		distclean-tags distclean-generic clean-am
	-rm -f libtool

distclean: distclean-am

maintainer-clean-am:  maintainer-clean-binPROGRAMS \
		maintainer-clean-compile maintainer-clean-libtool \
		maintainer-clean-tags maintainer-clean-generic \
		distclean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

maintainer-clean: maintainer-clean-am

.PHONY: mostlyclean-binPROGRAMS distclean-binPROGRAMS clean-binPROGRAMS \
maintainer-clean-binPROGRAMS uninstall-binPROGRAMS install-binPROGRAMS \
mostlyclean-compile distclean-compile clean-compile \
maintainer-clean-compile mostlyclean-libtool distclean-libtool \
clean-libtool maintainer-clean-libtool tags mostlyclean-tags \
distclean-tags clean-tags maintainer-clean-tags distdir info-am info \
dvi-am dvi check check-am installcheck-am installcheck install-exec-am \
install-exec install-data-am install-data install-am install \
uninstall-am uninstall all-redirect all-am all installdirs \
mostlyclean-generic distclean-generic clean-generic \
maintainer-clean-generic clean mostlyclean distclean maintainer-clean


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
