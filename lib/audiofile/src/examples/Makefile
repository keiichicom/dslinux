# Makefile.in generated automatically by automake 1.5 from Makefile.am.

# Copyright 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001
# Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



SHELL = /bin/bash

srcdir = .
top_srcdir = ..

prefix = /home/andrewec/dslinux
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
pkgdatadir = $(datadir)/audiofile
pkglibdir = $(libdir)/audiofile
pkgincludedir = $(includedir)/audiofile
top_builddir = ..

ACLOCAL = ${SHELL} /home/andrewec/dslinux/lib/audiofile/src/missing --run aclocal
AUTOCONF = ${SHELL} /home/andrewec/dslinux/lib/audiofile/src/missing --run autoconf
AUTOMAKE = ${SHELL} /home/andrewec/dslinux/lib/audiofile/src/missing --run automake
AUTOHEADER = ${SHELL} /home/andrewec/dslinux/lib/audiofile/src/missing --run autoheader

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL}
INSTALL_HEADER = $(INSTALL_DATA)
transform = s,x,x,
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
host_alias = arm-linux-elf
host_triplet = arm-linux-elf
AMTAR = ${SHELL} /home/andrewec/dslinux/lib/audiofile/src/missing --run tar
AS = @AS@
AUDIOFILE_MAJOR_VERSION = 0
AUDIOFILE_MICRO_VERSION = 6
AUDIOFILE_MINOR_VERSION = 2
AUDIOFILE_VERSION = 0.2.6
AUDIOFILE_VERSION_INFO = 2:6:2
AUDIO_LIB = 
AWK = gawk
CC = ucfront-gcc arm-linux-elf-gcc 
DEPDIR = .deps
DLLTOOL = @DLLTOOL@
ECHO = echo
EXEEXT = 
INSTALL_STRIP_PROGRAM = ${SHELL} $(install_sh) -c -s
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LN_S = ln -s
OBJDUMP = @OBJDUMP@
OBJEXT = o
PACKAGE = audiofile
RANLIB = arm-linux-elf-ranlib
STRIP = arm-linux-elf-strip
TEST_BIN = 
VERSION = 0.2.6
am__include = include
am__quote = 
install_sh = /home/andrewec/dslinux/lib/audiofile/src/install-sh

INCLUDES = -I$(top_srcdir)/libaudiofile

noinst_PROGRAMS = \
	adddcoffset \
	power \
	


EXTRA_PROGRAMS = irixread irixtestloop linuxtest osxplay

irixread_SOURCES = irixread.c sgi.c sgi.h
irixread_LDADD = $(top_builddir)/libaudiofile/libaudiofile.la 

irixtestloop_SOURCES = irixtestloop.c sgi.c sgi.h
irixtestloop_LDADD = $(top_builddir)/libaudiofile/libaudiofile.la 

linuxtest_SOURCES = linuxtest.c

osxplay_SOURCES = osxplay.c
osxplay_LDFLAGS = -framework AudioUnit -framework CoreServices

LDADD = $(top_builddir)/libaudiofile/libaudiofile.la

DEPENDENCIES = $(top_builddir)/libaudiofile/libaudiofile.la
subdir = examples
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
EXTRA_PROGRAMS = irixread$(EXEEXT) irixtestloop$(EXEEXT) \
	linuxtest$(EXEEXT) osxplay$(EXEEXT)
noinst_PROGRAMS = adddcoffset$(EXEEXT) power$(EXEEXT) 
PROGRAMS = $(noinst_PROGRAMS)

adddcoffset_SOURCES = adddcoffset.c
adddcoffset_OBJECTS = adddcoffset.$(OBJEXT)
adddcoffset_LDADD = $(LDADD)
adddcoffset_DEPENDENCIES = $(top_builddir)/libaudiofile/libaudiofile.la
adddcoffset_LDFLAGS =
am_irixread_OBJECTS = irixread.$(OBJEXT) sgi.$(OBJEXT)
irixread_OBJECTS = $(am_irixread_OBJECTS)
irixread_DEPENDENCIES = $(top_builddir)/libaudiofile/libaudiofile.la
irixread_LDFLAGS =
am_irixtestloop_OBJECTS = irixtestloop.$(OBJEXT) sgi.$(OBJEXT)
irixtestloop_OBJECTS = $(am_irixtestloop_OBJECTS)
irixtestloop_DEPENDENCIES = $(top_builddir)/libaudiofile/libaudiofile.la
irixtestloop_LDFLAGS =
am_linuxtest_OBJECTS = linuxtest.$(OBJEXT)
linuxtest_OBJECTS = $(am_linuxtest_OBJECTS)
linuxtest_LDADD = $(LDADD)
linuxtest_DEPENDENCIES = $(top_builddir)/libaudiofile/libaudiofile.la
linuxtest_LDFLAGS =
am_osxplay_OBJECTS = osxplay.$(OBJEXT)
osxplay_OBJECTS = $(am_osxplay_OBJECTS)
osxplay_LDADD = $(LDADD)
osxplay_DEPENDENCIES = $(top_builddir)/libaudiofile/libaudiofile.la
power_SOURCES = power.c
power_OBJECTS = power.$(OBJEXT)
power_LDADD = $(LDADD)
power_DEPENDENCIES = $(top_builddir)/libaudiofile/libaudiofile.la
power_LDFLAGS =

DEFS = -DHAVE_CONFIG_H
DEFAULT_INCLUDES =  -I. -I$(srcdir) -I$(top_builddir)
CPPFLAGS = 
LDFLAGS = -Wl,-elf2flt -D__PIC__ -fpic -msingle-pic-base -mswp-byte-writes
LIBS = -lm 
depcomp = $(SHELL) $(top_srcdir)/depcomp
DEP_FILES = $(DEPDIR)/adddcoffset.Po $(DEPDIR)/irixread.Po \
	$(DEPDIR)/irixtestloop.Po $(DEPDIR)/linuxtest.Po \
	$(DEPDIR)/osxplay.Po $(DEPDIR)/power.Po \
	$(DEPDIR)/sgi.Po
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) \
	$(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(LIBTOOL) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(AM_LDFLAGS) $(LDFLAGS) -o $@
CFLAGS = -O2 -g -fomit-frame-pointer -fno-common -fno-builtin -Wall  -mswp-byte-writes -DCONFIG_NDS_ROM8BIT -mcpu=arm946e-s -mfpu=fpe3 -DEMBED -D__PIC__ -fpic -msingle-pic-base -Dlinux -D__linux__ -Dunix -D__uClinux__
DIST_SOURCES = adddcoffset.c $(irixread_SOURCES) $(irixtestloop_SOURCES) \
	$(linuxtest_SOURCES) $(osxplay_SOURCES) power.c
DIST_COMMON = Makefile.am Makefile.in
SOURCES = adddcoffset.c $(irixread_SOURCES) $(irixtestloop_SOURCES) $(linuxtest_SOURCES) $(osxplay_SOURCES) power.c

all: all-am

.SUFFIXES:
.SUFFIXES: .c .lo .o .obj

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs

distclean-libtool:
	-rm -f libtool
$(srcdir)/Makefile.in:  Makefile.am  $(top_srcdir)/configure.in $(ACLOCAL_M4)
	cd $(top_srcdir) && \
	  $(AUTOMAKE) --gnu  examples/Makefile
Makefile:  $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) && \
	  CONFIG_HEADERS= CONFIG_LINKS= \
	  CONFIG_FILES=$(subdir)/$@ $(SHELL) ./config.status

clean-noinstPROGRAMS:
	-test -z "$(noinst_PROGRAMS)" || rm -f $(noinst_PROGRAMS)
adddcoffset$(EXEEXT): $(adddcoffset_OBJECTS) $(adddcoffset_DEPENDENCIES) 
	@rm -f adddcoffset$(EXEEXT)
	$(LINK) $(adddcoffset_LDFLAGS) $(adddcoffset_OBJECTS) $(adddcoffset_LDADD) $(LIBS)
irixread$(EXEEXT): $(irixread_OBJECTS) $(irixread_DEPENDENCIES) 
	@rm -f irixread$(EXEEXT)
	$(LINK) $(irixread_LDFLAGS) $(irixread_OBJECTS) $(irixread_LDADD) $(LIBS)
irixtestloop$(EXEEXT): $(irixtestloop_OBJECTS) $(irixtestloop_DEPENDENCIES) 
	@rm -f irixtestloop$(EXEEXT)
	$(LINK) $(irixtestloop_LDFLAGS) $(irixtestloop_OBJECTS) $(irixtestloop_LDADD) $(LIBS)
linuxtest$(EXEEXT): $(linuxtest_OBJECTS) $(linuxtest_DEPENDENCIES) 
	@rm -f linuxtest$(EXEEXT)
	$(LINK) $(linuxtest_LDFLAGS) $(linuxtest_OBJECTS) $(linuxtest_LDADD) $(LIBS)
osxplay$(EXEEXT): $(osxplay_OBJECTS) $(osxplay_DEPENDENCIES) 
	@rm -f osxplay$(EXEEXT)
	$(LINK) $(osxplay_LDFLAGS) $(osxplay_OBJECTS) $(osxplay_LDADD) $(LIBS)
power$(EXEEXT): $(power_OBJECTS) $(power_DEPENDENCIES) 
	@rm -f power$(EXEEXT)
	$(LINK) $(power_LDFLAGS) $(power_OBJECTS) $(power_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT) core *.core

distclean-compile:
	-rm -f *.tab.c

include $(DEPDIR)/adddcoffset.Po
include $(DEPDIR)/irixread.Po
include $(DEPDIR)/irixtestloop.Po
include $(DEPDIR)/linuxtest.Po
include $(DEPDIR)/osxplay.Po
include $(DEPDIR)/power.Po
include $(DEPDIR)/sgi.Po

distclean-depend:
	-rm -rf $(DEPDIR)

.c.o:
	source='$<' object='$@' libtool=no \
	depfile='$(DEPDIR)/$*.Po' tmpdepfile='$(DEPDIR)/$*.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(COMPILE) -c `test -f $< || echo '$(srcdir)/'`$<

.c.obj:
	source='$<' object='$@' libtool=no \
	depfile='$(DEPDIR)/$*.Po' tmpdepfile='$(DEPDIR)/$*.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(COMPILE) -c `cygpath -w $<`

.c.lo:
	source='$<' object='$@' libtool=yes \
	depfile='$(DEPDIR)/$*.Plo' tmpdepfile='$(DEPDIR)/$*.TPlo' \
	$(CCDEPMODE) $(depcomp) \
	$(LTCOMPILE) -c -o $@ `test -f $< || echo '$(srcdir)/'`$<
CCDEPMODE = depmode=gcc3
uninstall-info-am:

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)
	list='$(SOURCES) $(HEADERS) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	mkid -fID $$unique $(LISP)

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$unique$(LISP)$$tags" \
	  || etags $(ETAGS_ARGS) $$tags  $$unique $(LISP)

GTAGS:
	here=`CDPATH=: && cd $(top_builddir) && pwd` \
	  && cd $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) $$here

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH

DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)

top_distdir = ..
distdir = $(top_distdir)/$(PACKAGE)-$(VERSION)

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  if test -f $$file; then d=.; else d=$(srcdir); fi; \
	  dir=`echo "$$file" | sed -e 's,/[^/]*$$,,'`; \
	  if test "$$dir" != "$$file" && test "$$dir" != "."; then \
	    $(mkinstalldirs) "$(distdir)/$$dir"; \
	  fi; \
	  if test -d $$d/$$file; then \
	    cp -pR $$d/$$file $(distdir) \
	    || exit 1; \
	  else \
	    test -f $(distdir)/$$file \
	    || cp -p $$d/$$file $(distdir)/$$file \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(PROGRAMS)

installdirs:

install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
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

clean-am: clean-generic clean-libtool clean-noinstPROGRAMS \
	mostlyclean-am

distclean: distclean-am

distclean-am: clean-am distclean-compile distclean-depend \
	distclean-generic distclean-libtool distclean-tags

dvi: dvi-am

dvi-am:

info: info-am

info-am:

install-data-am:

install-exec-am:

install-info: install-info-am

install-man:

installcheck-am:

maintainer-clean: maintainer-clean-am

maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

uninstall-am: uninstall-info-am

.PHONY: GTAGS all all-am check check-am clean clean-generic \
	clean-libtool clean-noinstPROGRAMS distclean distclean-compile \
	distclean-depend distclean-generic distclean-libtool \
	distclean-tags distdir dvi dvi-am info info-am install \
	install-am install-data install-data-am install-exec \
	install-exec-am install-info install-info-am install-man \
	install-strip installcheck installcheck-am installdirs \
	maintainer-clean maintainer-clean-generic mostlyclean \
	mostlyclean-compile mostlyclean-generic mostlyclean-libtool \
	tags uninstall uninstall-am uninstall-info-am

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
