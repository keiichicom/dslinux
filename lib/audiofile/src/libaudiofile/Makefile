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

SUBDIRS = modules

lib_LTLIBRARIES = libaudiofile.la

EXTRA_DIST = audiofile.exports

libaudiofile_la_SOURCES = \
	openclose.c setup.c format.c data.c pcm.c \
	error.c byteorder.c af_vfs.c \
	util.c debug.c aupv.c units.c compression.c \
	aes.c instrument.c loop.c marker.c misc.c track.c query.c \
	raw.c raw.h \
	aiff.c aiffwrite.c extended.c aiff.h \
	next.c nextwrite.c next.h \
	wave.c wavewrite.c wave.h \
	ircam.c ircamwrite.c ircam.h \
	avr.c avrwrite.c avr.h \
	iff.c iffwrite.c iff.h \
	nist.c nistwrite.c nist.h \
	g711.c g711.h \
	afinternal.h aupvinternal.h aupvlist.h byteorder.h \
	compression.h error.h extended.h instrument.h marker.h \
	pcm.h setup.h track.h units.h \
	print.h util.h debug.h \
	modules.c modules.h


libaudiofile_la_LIBADD = modules/libmodules.la

libaudiofile_la_LDFLAGS = -version-info 0:2:0 -no-undefined \
	-export-symbols audiofile.exports


include_HEADERS = audiofile.h aupvlist.h af_vfs.h

# GNU gcc
# AM_CFLAGS = -Wall -g
# SGI MIPSpro cc
# AM_CFLAGS = -fullwarn -g
# No debugging.
AM_CFLAGS = -DNDEBUG
subdir = libaudiofile
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
LTLIBRARIES = $(lib_LTLIBRARIES)

libaudiofile_la_DEPENDENCIES = modules/libmodules.la
am_libaudiofile_la_OBJECTS = openclose.lo setup.lo format.lo data.lo \
	pcm.lo error.lo byteorder.lo af_vfs.lo util.lo debug.lo aupv.lo \
	units.lo compression.lo aes.lo instrument.lo loop.lo marker.lo \
	misc.lo track.lo query.lo raw.lo aiff.lo aiffwrite.lo \
	extended.lo next.lo nextwrite.lo wave.lo wavewrite.lo ircam.lo \
	ircamwrite.lo avr.lo avrwrite.lo iff.lo iffwrite.lo nist.lo \
	nistwrite.lo g711.lo modules.lo
libaudiofile_la_OBJECTS = $(am_libaudiofile_la_OBJECTS)

DEFS = -DHAVE_CONFIG_H
DEFAULT_INCLUDES =  -I. -I$(srcdir) -I$(top_builddir)
CPPFLAGS = 
LDFLAGS = -Wl,-elf2flt -D__PIC__ -fpic -msingle-pic-base -mswp-byte-writes
LIBS = -lm 
depcomp = $(SHELL) $(top_srcdir)/depcomp
DEP_FILES = $(DEPDIR)/aes.Plo $(DEPDIR)/af_vfs.Plo \
	$(DEPDIR)/aiff.Plo $(DEPDIR)/aiffwrite.Plo \
	$(DEPDIR)/aupv.Plo $(DEPDIR)/avr.Plo \
	$(DEPDIR)/avrwrite.Plo $(DEPDIR)/byteorder.Plo \
	$(DEPDIR)/compression.Plo $(DEPDIR)/data.Plo \
	$(DEPDIR)/debug.Plo $(DEPDIR)/error.Plo \
	$(DEPDIR)/extended.Plo $(DEPDIR)/format.Plo \
	$(DEPDIR)/g711.Plo $(DEPDIR)/iff.Plo \
	$(DEPDIR)/iffwrite.Plo $(DEPDIR)/instrument.Plo \
	$(DEPDIR)/ircam.Plo $(DEPDIR)/ircamwrite.Plo \
	$(DEPDIR)/loop.Plo $(DEPDIR)/marker.Plo \
	$(DEPDIR)/misc.Plo $(DEPDIR)/modules.Plo \
	$(DEPDIR)/next.Plo $(DEPDIR)/nextwrite.Plo \
	$(DEPDIR)/nist.Plo $(DEPDIR)/nistwrite.Plo \
	$(DEPDIR)/openclose.Plo $(DEPDIR)/pcm.Plo \
	$(DEPDIR)/query.Plo $(DEPDIR)/raw.Plo \
	$(DEPDIR)/setup.Plo $(DEPDIR)/track.Plo \
	$(DEPDIR)/units.Plo $(DEPDIR)/util.Plo \
	$(DEPDIR)/wave.Plo $(DEPDIR)/wavewrite.Plo
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) \
	$(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(LIBTOOL) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(AM_LDFLAGS) $(LDFLAGS) -o $@
CFLAGS = -O2 -g -fomit-frame-pointer -fno-common -fno-builtin -Wall  -mswp-byte-writes -DCONFIG_NDS_ROM8BIT -mcpu=arm946e-s -mfpu=fpe3 -DEMBED -D__PIC__ -fpic -msingle-pic-base -Dlinux -D__linux__ -Dunix -D__uClinux__
DIST_SOURCES = $(libaudiofile_la_SOURCES)
HEADERS = $(include_HEADERS)


RECURSIVE_TARGETS = info-recursive dvi-recursive install-info-recursive \
	uninstall-info-recursive all-recursive install-data-recursive \
	install-exec-recursive installdirs-recursive install-recursive \
	uninstall-recursive check-recursive installcheck-recursive
DIST_COMMON = $(include_HEADERS) Makefile.am Makefile.in
DIST_SUBDIRS = $(SUBDIRS)
SOURCES = $(libaudiofile_la_SOURCES)

all: all-recursive

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
	  $(AUTOMAKE) --gnu  libaudiofile/Makefile
Makefile:  $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) && \
	  CONFIG_HEADERS= CONFIG_LINKS= \
	  CONFIG_FILES=$(subdir)/$@ $(SHELL) ./config.status
install-libLTLIBRARIES: $(lib_LTLIBRARIES)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(libdir)
	@list='$(lib_LTLIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    echo " $(LIBTOOL) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$p $(DESTDIR)$(libdir)/$$p"; \
	    $(LIBTOOL) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$p $(DESTDIR)$(libdir)/$$p; \
	  else :; fi; \
	done

uninstall-libLTLIBRARIES:
	@$(NORMAL_UNINSTALL)
	@list='$(lib_LTLIBRARIES)'; for p in $$list; do \
	  echo " $(LIBTOOL) --mode=uninstall rm -f $(DESTDIR)$(libdir)/$$p"; \
	  $(LIBTOOL) --mode=uninstall rm -f $(DESTDIR)$(libdir)/$$p; \
	done

clean-libLTLIBRARIES:
	-test -z "$(lib_LTLIBRARIES)" || rm -f $(lib_LTLIBRARIES)
libaudiofile.la: $(libaudiofile_la_OBJECTS) $(libaudiofile_la_DEPENDENCIES) 
	$(LINK) -rpath $(libdir) $(libaudiofile_la_LDFLAGS) $(libaudiofile_la_OBJECTS) $(libaudiofile_la_LIBADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT) core *.core

distclean-compile:
	-rm -f *.tab.c

include $(DEPDIR)/aes.Plo
include $(DEPDIR)/af_vfs.Plo
include $(DEPDIR)/aiff.Plo
include $(DEPDIR)/aiffwrite.Plo
include $(DEPDIR)/aupv.Plo
include $(DEPDIR)/avr.Plo
include $(DEPDIR)/avrwrite.Plo
include $(DEPDIR)/byteorder.Plo
include $(DEPDIR)/compression.Plo
include $(DEPDIR)/data.Plo
include $(DEPDIR)/debug.Plo
include $(DEPDIR)/error.Plo
include $(DEPDIR)/extended.Plo
include $(DEPDIR)/format.Plo
include $(DEPDIR)/g711.Plo
include $(DEPDIR)/iff.Plo
include $(DEPDIR)/iffwrite.Plo
include $(DEPDIR)/instrument.Plo
include $(DEPDIR)/ircam.Plo
include $(DEPDIR)/ircamwrite.Plo
include $(DEPDIR)/loop.Plo
include $(DEPDIR)/marker.Plo
include $(DEPDIR)/misc.Plo
include $(DEPDIR)/modules.Plo
include $(DEPDIR)/next.Plo
include $(DEPDIR)/nextwrite.Plo
include $(DEPDIR)/nist.Plo
include $(DEPDIR)/nistwrite.Plo
include $(DEPDIR)/openclose.Plo
include $(DEPDIR)/pcm.Plo
include $(DEPDIR)/query.Plo
include $(DEPDIR)/raw.Plo
include $(DEPDIR)/setup.Plo
include $(DEPDIR)/track.Plo
include $(DEPDIR)/units.Plo
include $(DEPDIR)/util.Plo
include $(DEPDIR)/wave.Plo
include $(DEPDIR)/wavewrite.Plo

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
install-includeHEADERS: $(include_HEADERS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(includedir)
	@list='$(include_HEADERS)'; for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  f="`echo $$p | sed -e 's|^.*/||'`"; \
	  echo " $(INSTALL_HEADER) $$d$$p $(DESTDIR)$(includedir)/$$f"; \
	  $(INSTALL_HEADER) $$d$$p $(DESTDIR)$(includedir)/$$f; \
	done

uninstall-includeHEADERS:
	@$(NORMAL_UNINSTALL)
	@list='$(include_HEADERS)'; for p in $$list; do \
	  f="`echo $$p | sed -e 's|^.*/||'`"; \
	  echo " rm -f $(DESTDIR)$(includedir)/$$f"; \
	  rm -f $(DESTDIR)$(includedir)/$$f; \
	done

# This directory's subdirectories are mostly independent; you can cd
# into them and run `make' without going through this Makefile.
# To change the values of `make' variables: instead of editing Makefiles,
# (1) if the variable is set in `config.status', edit `config.status'
#     (which will cause the Makefiles to be regenerated when you run `make');
# (2) otherwise, pass the desired values on the `make' command line.
$(RECURSIVE_TARGETS):
	@set fnord $(MAKEFLAGS); amf=$$2; \
	dot_seen=no; \
	target=`echo $@ | sed s/-recursive//`; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  echo "Making $$target in $$subdir"; \
	  if test "$$subdir" = "."; then \
	    dot_seen=yes; \
	    local_target="$$target-am"; \
	  else \
	    local_target="$$target"; \
	  fi; \
	  (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \
	   || case "$$amf" in *=*) exit 1;; *k*) fail=yes;; *) exit 1;; esac; \
	done; \
	if test "$$dot_seen" = "no"; then \
	  $(MAKE) $(AM_MAKEFLAGS) "$$target-am" || exit 1; \
	fi; test -z "$$fail"

mostlyclean-recursive clean-recursive distclean-recursive \
maintainer-clean-recursive:
	@set fnord $(MAKEFLAGS); amf=$$2; \
	dot_seen=no; \
	case "$@" in \
	  distclean-* | maintainer-clean-*) list='$(DIST_SUBDIRS)' ;; \
	  *) list='$(SUBDIRS)' ;; \
	esac; \
	rev=''; for subdir in $$list; do \
	  if test "$$subdir" = "."; then :; else \
	    rev="$$subdir $$rev"; \
	  fi; \
	done; \
	rev="$$rev ."; \
	target=`echo $@ | sed s/-recursive//`; \
	for subdir in $$rev; do \
	  echo "Making $$target in $$subdir"; \
	  if test "$$subdir" = "."; then \
	    local_target="$$target-am"; \
	  else \
	    local_target="$$target"; \
	  fi; \
	  (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \
	   || case "$$amf" in *=*) exit 1;; *k*) fail=yes;; *) exit 1;; esac; \
	done && test -z "$$fail"
tags-recursive:
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  test "$$subdir" = . || (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) tags); \
	done

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)
	list='$(SOURCES) $(HEADERS) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	mkid -fID $$unique $(LISP)

TAGS: tags-recursive $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  if test "$$subdir" = .; then :; else \
	    test -f $$subdir/TAGS && tags="$$tags -i $$here/$$subdir/TAGS"; \
	  fi; \
	done; \
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
	for subdir in $(SUBDIRS); do \
	  if test "$$subdir" = .; then :; else \
	    test -d $(distdir)/$$subdir \
	    || mkdir $(distdir)/$$subdir \
	    || exit 1; \
	    (cd $$subdir && \
	      $(MAKE) $(AM_MAKEFLAGS) \
	        top_distdir="$(top_distdir)" \
	        distdir=../$(distdir)/$$subdir \
	        distdir) \
	      || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-recursive
all-am: Makefile $(LTLIBRARIES) $(HEADERS)
installdirs: installdirs-recursive
installdirs-am:
	$(mkinstalldirs) $(DESTDIR)$(libdir) $(DESTDIR)$(includedir)

install: install-recursive
install-exec: install-exec-recursive
install-data: install-data-recursive
uninstall: uninstall-recursive

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-recursive
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
clean: clean-recursive

clean-am: clean-generic clean-libLTLIBRARIES clean-libtool \
	mostlyclean-am

distclean: distclean-recursive

distclean-am: clean-am distclean-compile distclean-depend \
	distclean-generic distclean-libtool distclean-tags

dvi: dvi-recursive

dvi-am:

info: info-recursive

info-am:

install-data-am: install-includeHEADERS

install-exec-am: install-libLTLIBRARIES

install-info: install-info-recursive

install-man:

installcheck-am:

maintainer-clean: maintainer-clean-recursive

maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-recursive

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

uninstall-am: uninstall-includeHEADERS uninstall-info-am \
	uninstall-libLTLIBRARIES

uninstall-info: uninstall-info-recursive

.PHONY: $(RECURSIVE_TARGETS) GTAGS all all-am check check-am clean \
	clean-generic clean-libLTLIBRARIES clean-libtool \
	clean-recursive distclean distclean-compile distclean-depend \
	distclean-generic distclean-libtool distclean-recursive \
	distclean-tags distdir dvi dvi-am dvi-recursive info info-am \
	info-recursive install install-am install-data install-data-am \
	install-data-recursive install-exec install-exec-am \
	install-exec-recursive install-includeHEADERS install-info \
	install-info-am install-info-recursive install-libLTLIBRARIES \
	install-man install-recursive install-strip installcheck \
	installcheck-am installdirs installdirs-am \
	installdirs-recursive maintainer-clean maintainer-clean-generic \
	maintainer-clean-recursive mostlyclean mostlyclean-compile \
	mostlyclean-generic mostlyclean-libtool mostlyclean-recursive \
	tags tags-recursive uninstall uninstall-am \
	uninstall-includeHEADERS uninstall-info-am \
	uninstall-info-recursive uninstall-libLTLIBRARIES \
	uninstall-recursive

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
