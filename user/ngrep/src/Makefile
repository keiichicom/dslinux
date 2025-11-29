#
# $Id: Makefile.in,v 1.23 2006/11/28 13:35:37 jpr5 Exp $
#
# Copyright (c) 2006  Jordan Ritter <jpr5@darkridge.com>
#
# Please refer to the LICENSE file for more information.

CC=ucfront-gcc arm-linux-elf-gcc 

CFLAGS=-O2 -g -fomit-frame-pointer -fno-common -fno-builtin -Wall  -mswp-byte-writes -DCONFIG_NDS_ROM8BIT -mcpu=arm946e-s -mfpu=fpe3 -DEMBED -D__PIC__ -fpic -msingle-pic-base -Dlinux -D__linux__ -Dunix -D__uClinux__ -DLINUX -DHAVE_CONFIG_H  -D_BSD_SOURCE=1 -D__FAVOR_BSD=1 
INCLUDES=-I. -I/home/andrewec/dslinux/include 

LDFLAGS=-Wl,-elf2flt -D__PIC__ -fpic -msingle-pic-base -mswp-byte-writes -L/home/andrewec/dslinux/lib
LIBS=-lpcap  

STRIPFLAG=-s

SRC=ngrep.c 
OBJS=ngrep.o 
TARGET=ngrep
MANPAGE=ngrep.8

prefix      = /nonexistent
exec_prefix = ${prefix}

bindir      = $(prefix)/bin
datadir     = $(prefix)/share
mandir      = $(datadir)/man

BINDIR_INSTALL = $(prefix)/bin
MANDIR_INSTALL = $(mandir)/man8

INSTALL = ./install-sh

REGEX_DIR=pcre-5.0
REGEX_OBJS=pcre-5.0/pcre.o pcre-5.0/study.o


all: $(TARGET) 

$(TARGET): $(REGEX_OBJS) $(OBJS) 
	$(CC) $(CFLAGS) $(LDFLAGS) $(STRIPFLAG) -o $(TARGET) $(OBJS) $(REGEX_OBJS) $(LIBS) 

debug: $(REGEX_OBJS) $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -g -o $(TARGET) $(OBJS) $(REGEX_OBJS) $(LIBS) 

static: $(REGEX_OBJS) $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(STRIPFLAG) -o $(TARGET).static -static $(OBJS) $(REGEX_OBJS) $(LIBS) 

install: $(TARGET)
	$(INSTALL) -c -m 0755 $(TARGET)  $(DESTDIR)/$(BINDIR_INSTALL)/$(TARGET)
	$(INSTALL) -c -m 0644 $(MANPAGE) $(DESTDIR)/$(MANDIR_INSTALL)/$(MANPAGE)

.c.o:	
	$(CC) $(CFLAGS) $(INCLUDES) -g -c $<

clean:
	make -C $(REGEX_DIR) clean
	rm -f *~ $(OBJS) $(REGEX_OBJS) $(TARGET) $(TARGET).static

distclean: clean 
	make -C $(REGEX_DIR) distclean
	rm -f config.status config.cache config.log config.h Makefile 

$(REGEX_OBJS): $(REGEX_OBJS:.o=.c) $(REGEX_DIR)/*.h
	$(MAKE) -C $(REGEX_DIR) $(notdir $(REGEX_OBJS))

$(OBJS): Makefile ngrep.c ngrep.h

tardist:
	@( VERSION=`perl -ne '/VERSION\s+"(.*)"/ && print "$$1\n"' ngrep.h` ; \
	   PKG="ngrep-$$VERSION"                                            ; \
	   TMPDIR="/tmp"                                                    ; \
	   DESTDIR="$$TMPDIR/$$PKG"                                         ; \
	   echo                                                             ; \
	   echo "Building package $$PKG ... "                               ; \
	   echo                                                             ; \
	   sleep 2                                                          ; \
	   rm -rf $$DESTDIR && mkdir $$DESTDIR                             && \
	   make distclean                                                  && \
	   tar cf - . --exclude "CVS" | tar xf - -C $$DESTDIR              && \
	   find $$DESTDIR -name "*~" -o -name ".*#*" | xargs rm -f         && \
	   cd $$TMPDIR && tar jcf $$PKG.tar.bz2 $$PKG                       ; \
           rm -rf $$DESTDIR                                                 ; \
           cd $$TMPDIR && gpg -ba $$PKG.tar.bz2                             ; \
	   echo                                                             ; \
	   ls -l $$TMPDIR/$$PKG.tar.bz2 $$TMPDIR/$$PKG.tar.bz2.asc          ; \
	   echo                                                             ; \
	)
