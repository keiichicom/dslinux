# Generated automatically from Makefile.in by configure.
#-----------------------------------------------------------------------------
#
# SocketIO makefile for the platform linux-x86-libc5, on the host jenkins.
#
#-----------------------------------------------------------------------------
VER=6.2.0
CC=ucfront-gcc arm-linux-elf-gcc 
CFLAGS=-D_REENTRANT -D_LARGEFILE64_SOURCE -O2 -g -fomit-frame-pointer -fno-common -fno-builtin -Wall -mswp-byte-writes -DCONFIG_NDS_ROM8BIT -mcpu=arm946e-s -mfpu=fpe3 -DEMBED -D__PIC__ -fpic -msingle-pic-base -Dlinux -D__linux__ -Dunix -D__uClinux__ -Wno-format-y2k -static-libgcc
#CFLAGS=-O2 -g -W -Wall -Wimplicit -Wstrict-prototypes -Wmissing-prototypes
CPPFLAGS=-I/home/andrewec/dslinux/user/ncftp/src -I/home/andrewec/dslinux/user/ncftp/src/libncftp -I/home/andrewec/dslinux/user/ncftp/src/sio -I/home/andrewec/dslinux/user/ncftp/src/Strn
LDFLAGS=-L/home/andrewec/dslinux/user/ncftp/src/libncftp -L/home/andrewec/dslinux/user/ncftp/src/sio -L/home/andrewec/dslinux/user/ncftp/src/Strn -Wl,-elf2flt -D__PIC__ -fpic -msingle-pic-base -mswp-byte-writes
SOCKS_LIBS=
LIBS=-lresolv $(SOCKS_LIBS)
DEFS=-DHAVE_CONFIG_H -DLINUX=32000 -DLINUX_LIBC=5
PREFIX=/usr/bin
LIB=libsio.a
LIBSO=libsio.so.5
LIBSOS=libsio.so
STRIP=: #strip
MAKE=
CCDV=

OBJS_U=\
	UAccept.o  UBind.o	UConnectByName.o  UConnect.o \
	UNew.o	   URecvfrom.o	USendtoByName.o   USendto.o

OBJS=$(OBJS_U) \
	DNSUtil.o   main.o	 PRead.o   PWrite.o \
	SAccept.o   SBind.o	 SClose.o  SConnectByName.o \
	SConnect.o  SError.o	 SNew.o    SocketUtil.o \
	SRead.o     SReadline.o  SRecv.o   SRecvfrom.o \
	SRecvmsg.o  SSelect.o	 SSend.o   SSendtoByName.o \
	SSendto.o   StrAddr.o	 SWait.o   SWrite.o

SOBJS_U=\
	UAccept.so  UBind.so	UConnectByName.so  UConnect.so \
	UNew.so	   URecvfrom.so	USendtoByName.so   USendto.so

SOBJS=$(SOBJS_U) \
	DNSUtil.so   main.so	 PRead.so   PWrite.so \
	SAccept.so   SBind.so	 SClose.so  SConnectByName.so \
	SConnect.so  SError.so	 SNew.so    SocketUtil.so \
	SRead.so     SReadline.so  SRecv.so   SRecvfrom.so \
	SRecvmsg.so  SSelect.so	 SSend.so   SSendtoByName.so \
	SSendto.so   StrAddr.so	 SWait.so   SWrite.so

all: $(LIB)
	-@/bin/ls -l $(LIB)
	-@echo 'Done.'

$(LIB): $(OBJS)
	-@/bin/rm -f $(LIB)
	ar r $(LIB) $(OBJS)
	-arm-linux-elf-ranlib $(LIB)
	-@echo $(VER) > sio.version
	-@chmod a+r $(LIB) sio.h usio.h

install: $(LIB)
	cp $(LIB) $(PREFIX)/lib/$(LIB)
	-@arm-linux-elf-ranlib $(PREFIX)/lib/$(LIB)
	cp sio.h usio.h $(PREFIX)/include
	chmod a+r $(PREFIX)/lib/$(LIB) $(PREFIX)/include/sio.h $(PREFIX)/include/usio.h
	-@/bin/ls -l $(PREFIX)/lib/$(LIB) $(PREFIX)/include/sio.h $(PREFIX)/include/usio.h

dynamic: $(LIBSO)

shared: $(LIBSO)

so: $(LIBSO)

$(LIBSO): $(SOBJS)
	/bin/rm -f "$(LIBSO)" "$(LIBSOS)"
	$(CC) -shared "-Wl,-soname,$(LIBSO)" -o "$(LIBSO)" $(SOBJS)
	chmod a+r "$(LIBSO)" sio.h usio.h
	/bin/ln -s "$(LIBSO)" "$(LIBSOS)"
	-@/bin/ls -l "$(LIBSOS)" "$(LIBSO)"

soinstall: $(LIBSO)
	cp "$(LIBSO)" "$(PREFIX)/lib/$(LIBSO)"
	/bin/rm -f "$(PREFIX)/lib/$(LIBSOS)"
	( cd "$(PREFIX)/lib" ; /bin/ln -s "$(LIBSO)" "$(LIBSOS)" )
	cp sio.h usio.h "$(PREFIX)/include"
	chmod a+r "$(PREFIX)/lib/$(LIBSO)" "$(PREFIX)/include/sio.h" "$(PREFIX)/include/usio.h"
	-@/bin/ls -l "$(PREFIX)/lib/$(LIBSO)" "$(PREFIX)/include/sio.h" "$(PREFIX)/include/usio.h"

ucase_c: ucase_c/ucase_c.c $(LIB)
	( cd ucase_c ; $(MAKE) "CFLAGS=$(CFLAGS)" "STRIP=$(STRIP)" "LIBS=$(LIBS)" )

ucase_s: ucase_s/ucase_s.c $(LIB)
	( cd ucase_s ; $(MAKE) "CFLAGS=$(CFLAGS)" "STRIP=$(STRIP)" "LIBS=$(LIBS)" )

srltest: srltest/srltest.c $(LIB)
	( cd srltest ; $(MAKE) "CFLAGS=$(CFLAGS)" "STRIP=$(STRIP)" "LIBS=$(LIBS)" )

time_c: time_c/time_c.c $(LIB)
	( cd time_c ; $(MAKE) "CFLAGS=$(CFLAGS)" "STRIP=$(STRIP)" "LIBS=$(LIBS)" )

time_s: time_s/time_s.c $(LIB)
	( cd time_s ; $(MAKE) "CFLAGS=$(CFLAGS)" "STRIP=$(STRIP)" "LIBS=$(LIBS)" )

samples: ucase_c ucase_s time_c time_s srltest

SHELL=/bin/sh
.SUFFIXES: .c .o .so

.c.o:
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) $< -c

.c.so:
	$(CC) -fpic $(CFLAGS) $(DEFS) $(CPPFLAGS) $*.c -c -o $*.so

### Cleaning supplies ########################################################

clean:
	-/bin/rm -rf *.o *.so $(PCH) $(LIB) $(LIBSO) ucase_c/ucase_c ucase_s/ucase_s time_c/time_c time_s/time_s core *.pch */*.pch *.gch SunWS_cache

distclean: clean
	-/bin/rm -f config.h Makefile config.status config.cache config.log sio.version

### Archiving #################################################################

CFILES=\
	DNSUtil.c   main.c	 PRead.c	   PWrite.c \
	SAccept.c   SBind.c	 SClose.c	   SConnectByName.c \
	SConnect.c  SError.c	 SNew.c		   SocketUtil.c \
	SRead.c     SReadline.c  SRecv.c	   SRecvfrom.c \
	SRecvmsg.c  SSelect.c	 SSend.c	   SSendtoByName.c \
	SSendto.c   StrAddr.c	 SWait.c	   SWrite.c \
	UAccept.c   UBind.c	 UConnectByName.c  UConnect.c \
	UNew.c	    URecvfrom.c  USendtoByName.c   USendto.c

HFILES=sio.h usio.h

DOCFILES=sio.html
CFGFILES=config.h.in configure.in configure Makefile.in
CFGJUNK=config.h Makefile config.*
MOREJUNK=

# This is everything that is copied when you make a shar or tar.
PACKAGE=$(DOCFILES) $(HFILES) $(CFGFILES) $(MOREJUNK) $(CFILES)

TMPDIR=/tmp
TARDIR=sio-$(VER)
TARFILE=$(TARDIR).tar
TGZFILE=$(TARDIR).tar.gz

tarcp:
	-@mkdir -p $(TMPDIR)/TAR/$(TARDIR)
	-@chmod ga+r $(PACKAGE)
	-@chmod 755 $(TMPDIR)/TAR/$(TARDIR)
	cp -pr $(PACKAGE) $(TMPDIR)/TAR/$(TARDIR)

tar: clean
	-@mkdir $(TMPDIR)/TAR
	-@mkdir $(TMPDIR)/TAR/$(TARDIR)
	-@chmod ga+r $(PACKAGE)
	find . -follow -depth -type f -print | cut -c3- | egrep -i -v '(((\.(o|so|log|a|lib|ncb|obj|exe|idb|cache|opt|zip|gz|swp|tar|plg|pch|gch))|(config\.h))$$|(/\.)|(^\.))' | cpio -Lpdm $(TMPDIR)/TAR/$(TARDIR)
	( cd $(TMPDIR)/TAR ; /bin/tar -c --owner=root --group=root --verbose -f $(TARFILE) $(TARDIR) )
	cp $(TMPDIR)/TAR/$(TARFILE) .
	-@chmod 644 $(TARFILE)
	-@rm -rf $(TMPDIR)/TAR
	-@ls -l $(TARFILE)

gz: tar
	gzip -c $(TARFILE) > $(TGZFILE)
	-@rm $(TARFILE)
	-@chmod 644 $(TGZFILE)
	-@ls -l $(TGZFILE)

### Dependencies #############################################################


syshdrs.h.gch: syshdrs.h sio.h usio.h
	$(CCDV) $(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -c syshdrs.h

PCH=syshdrs.h.gch
SYSHDRS_DEP=syshdrs.h.gch

DNSUtil.o: DNSUtil.c $(SYSHDRS_DEP)
PRead.o: PRead.c $(SYSHDRS_DEP)
PWrite.o: PWrite.c $(SYSHDRS_DEP)
SAccept.o: SAccept.c $(SYSHDRS_DEP)
SBind.o: SBind.c $(SYSHDRS_DEP)
SClose.o: SClose.c $(SYSHDRS_DEP)
SConnect.o: SConnect.c $(SYSHDRS_DEP)
SConnectByName.o: SConnectByName.c $(SYSHDRS_DEP)
SNew.o: SNew.c $(SYSHDRS_DEP)
SRead.o: SRead.c $(SYSHDRS_DEP)
SReadline.o: SReadline.c $(SYSHDRS_DEP)
SRecv.o: SRecv.c $(SYSHDRS_DEP)
SRecvfrom.o: SRecvfrom.c $(SYSHDRS_DEP)
SRecvmsg.o: SRecvmsg.c $(SYSHDRS_DEP)
SSelect.o: SSelect.c $(SYSHDRS_DEP)
SSend.o: SSend.c $(SYSHDRS_DEP)
SSendto.o: SSendto.c $(SYSHDRS_DEP)
SSendtoByName.o: SSendtoByName.c $(SYSHDRS_DEP)
SWrite.o: SWrite.c $(SYSHDRS_DEP)
SWait.o: SWait.c $(SYSHDRS_DEP)
SocketUtil.o: SocketUtil.c $(SYSHDRS_DEP)
StrAddr.o: StrAddr.c $(SYSHDRS_DEP)
UAccept.o: UAccept.c $(SYSHDRS_DEP)
UBind.o: UBind.c $(SYSHDRS_DEP)
UConnect.o: UConnect.c $(SYSHDRS_DEP)
UConnectByName.o: UConnectByName.c $(SYSHDRS_DEP)
UNew.o: UNew.c $(SYSHDRS_DEP)
URecvfrom.o: URecvfrom.c $(SYSHDRS_DEP)
USendto.o: USendto.c $(SYSHDRS_DEP)
USendtoByName.o: USendtoByName.c $(SYSHDRS_DEP)
main.o: main.c $(SYSHDRS_DEP)
