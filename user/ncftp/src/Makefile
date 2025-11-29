# Generated automatically from Makefile.in by configure.
#-----------------------------------------------------------------------------
#
# NcFTP makefile for the platform linux-x86-libc5, on the host jenkins.
#
#-----------------------------------------------------------------------------

VER=3.2.1

CC=ucfront-gcc arm-linux-elf-gcc 
CFLAGS=-D_REENTRANT -D_LARGEFILE64_SOURCE -O2 -g -fomit-frame-pointer -fno-common -fno-builtin -Wall -mswp-byte-writes -DCONFIG_NDS_ROM8BIT -mcpu=arm946e-s -mfpu=fpe3 -DEMBED -D__PIC__ -fpic -msingle-pic-base -Dlinux -D__linux__ -Dunix -D__uClinux__ -Wno-format-y2k -static-libgcc -DLINUX=32000 -DLINUX_LIBC=5
#CC=gcc
#CFLAGS=-O2 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wshadow -Wbad-function-cast -Wwrite-strings -Wconversion
STRIPFLAG=
STRIP=: #strip
prefix=/usr/bin
exec_prefix=${prefix}
BINDIR=${exec_prefix}/bin
SYSCONFDIR=${prefix}/etc
mandir=${prefix}/man
INSTALL=/usr/bin/install -c
INSTALL_PROGRAM=${INSTALL}
INSTALL_DATA=${INSTALL} -m 644
SHELL=/bin/sh

all: progs
	-@/bin/ls -l bin
	-@echo 'Done.'
	-@echo
	-@echo '** Please report any problems to http://www.NcFTP.com/contact/ **'

libs:
	@( cd ./Strn ; $(MAKE) "CC=$(CC)" "CFLAGS=$(CFLAGS)" )
	@( cd ./sio ; $(MAKE) "CC=$(CC)" "CFLAGS=$(CFLAGS)" )
	@( cd ./libncftp ; $(MAKE) "CC=$(CC)" "CFLAGS=$(CFLAGS)" )

progs: libs
	@test -d bin  || mkdir bin
	@( cd ./ncftp ; $(MAKE) "CC=$(CC)" "CFLAGS=$(CFLAGS)" "STRIP=$(STRIP)" )
	@( cd ./sh_util ; $(MAKE) "CC=$(CC)" "CFLAGS=$(CFLAGS)" "STRIP=$(STRIP)" )
	@( cd ./vis ; $(MAKE) "CC=$(CC)" "CFLAGS=$(CFLAGS)" "STRIP=$(STRIP)" )

install:
	@( cd ./ncftp ; $(MAKE) "CC=$(CC)" "CFLAGS=$(CFLAGS)" )
	@( cd ./sh_util ; $(MAKE) "CC=$(CC)" "CFLAGS=$(CFLAGS)" )
	@( cd ./vis ; $(MAKE) "CC=$(CC)" "CFLAGS=$(CFLAGS)" )
	-@test -z "$(DESTDIR)" || mkdir -p "$DESTDIR" 2>/dev/null
	-mkdir "$(DESTDIR)$(prefix)" "$(DESTDIR)$(BINDIR)" "$(DESTDIR)$(SYSCONFDIR)" "$(DESTDIR)$(mandir)" "$(DESTDIR)$(mandir)/man1" 2>/dev/null
	-@echo '..... Installing the programs .....'
	$(INSTALL_PROGRAM) bin/ncftp.gdb "$(DESTDIR)$(BINDIR)/ncftp.gdb"
	$(INSTALL_PROGRAM) bin/ncftpget.gdb "$(DESTDIR)$(BINDIR)/ncftpget.gdb"
	$(INSTALL_PROGRAM) bin/ncftpput.gdb "$(DESTDIR)$(BINDIR)/ncftpput.gdb"
	$(INSTALL_PROGRAM) bin/ncftpls.gdb "$(DESTDIR)$(BINDIR)/ncftpls.gdb"
	$(INSTALL_PROGRAM) bin/ncftpbatch.gdb "$(DESTDIR)$(BINDIR)/ncftpbatch.gdb"
	-@test -f "$(DESTDIR)$(BINDIR)/ncftpspooler.gdb" && echo /bin/rm "$(DESTDIR)$(BINDIR)/ncftpspooler.gdb" && /bin/rm "$(DESTDIR)$(BINDIR)/ncftpspooler.gdb"
	ln "$(DESTDIR)$(BINDIR)/ncftpbatch.gdb" "$(DESTDIR)$(BINDIR)/ncftpspooler.gdb"
#
# The visual programs are only built if a working Curses was found.
#
	-test -f bin/ncftpbookmarks.gdb && $(INSTALL_PROGRAM) bin/ncftpbookmarks.gdb "$(DESTDIR)$(BINDIR)/ncftpbookmarks.gdb"
	-@echo '..... Installing the manual pages .....'
	$(INSTALL_DATA) doc/man/ncftp.1 "$(DESTDIR)$(mandir)/man1/ncftp.1"
	$(INSTALL_DATA) doc/man/ncftpget.1 "$(DESTDIR)$(mandir)/man1/ncftpget.1"
	$(INSTALL_DATA) doc/man/ncftpput.1 "$(DESTDIR)$(mandir)/man1/ncftpput.1"
	$(INSTALL_DATA) doc/man/ncftpbatch.1 "$(DESTDIR)$(mandir)/man1/ncftpbatch.1"
	$(INSTALL_DATA) doc/man/ncftpspooler.1 "$(DESTDIR)$(mandir)/man1/ncftpspooler.1"
	$(INSTALL_DATA) doc/man/ncftpls.1 "$(DESTDIR)$(mandir)/man1/ncftpls.1"
	-@echo '..... Finishing up .....'
	-@( cd "$(DESTDIR)$(BINDIR)" ; echo ""; echo "$(DESTDIR)$(BINDIR):" ; /bin/ls -l "ncftp.gdb" "ncftpget.gdb" "ncftpput.gdb" "ncftpls.gdb" "ncftpbatch.gdb" "ncftpspooler.gdb" "ncftpbookmarks.gdb" 2>/dev/null | sed 's/^/  /;' ; echo "" )
	-@echo 'Done installing NcFTP.'

clean:
	/bin/rm -rf ncftp_all.ncb ncftp_all.opt ncftp_all.plg *.pch SunWS_cache
	@( cd ./Strn ; $(MAKE) clean )
	@( cd ./sio ; $(MAKE) clean )
	@( cd ./libncftp ; $(MAKE) clean )
	@( cd ./ncftp ; $(MAKE) clean )
	@( cd ./sh_util ; $(MAKE) clean )
	@( cd ./vis ; $(MAKE) clean )

distclean: clean
	/bin/rm -f config.cache config.h config.log config.status libncftp/Makefile libncftp/config.h ncftp/Makefile sh_util/Makefile vis/Makefile Makefile.bin Strn/Makefile Strn/config.h Strn/Strn.version sio/Makefile sio/config.h sio/sio.version Makefile ccdv
	/bin/rm -rf bin
	@echo "Warning: configure may have automatically patched libncftp/ncftp.h"

TMPDIR=/tmp
TARDIR=ncftp-$(VER)
STGZFILE=$(TARDIR)-src.tar.gz
DTARFILE=$(TARDIR)-linux-x86-libc5-export.tar
DTGZFILE=$(TARDIR)-linux-x86-libc5-export.tar.gz
DBGZFILE=$(TARDIR)-linux-x86-libc5-export.tar.bz2

dtar:
	-@mkdir $(TMPDIR)/TAR
	-@mkdir $(TMPDIR)/TAR/$(TARDIR)
	cp -p Makefile.bin $(TMPDIR)/TAR/$(TARDIR)/Makefile
	-@mkdir $(TMPDIR)/TAR/$(TARDIR)/bin $(TMPDIR)/TAR/$(TARDIR)/doc
	cp -p -r bin $(TMPDIR)/TAR/$(TARDIR)
	chmod 755 $(TMPDIR)/TAR/$(TARDIR)/bin/*
	-@rm -f "$(TMPDIR)/TAR/$(TARDIR)/bin/ncftpspooler.gdb"
	-@ln "$(TMPDIR)/TAR/$(TARDIR)/bin/ncftpbatch.gdb" "$(TMPDIR)/TAR/$(TARDIR)/bin/ncftpspooler.gdb"
	cp -p DONATE.txt $(TMPDIR)/TAR/$(TARDIR)
	for f in CHANGELOG.txt FIREWALLS_AND_PROXIES.txt LICENSE.txt ; do \
		cp -p doc/$$f $(TMPDIR)/TAR/$(TARDIR)/doc/$$f ; \
	done
	cp -p -r doc/man doc/html $(TMPDIR)/TAR/$(TARDIR)/doc
	find $(TMPDIR)/TAR/$(TARDIR) -type d -exec chmod a+rx {} \;
	find $(TMPDIR)/TAR/$(TARDIR) -type f -exec chmod a+r {} \;
	( cd $(TMPDIR)/TAR ; /bin/tar -c --owner=root --group=root --verbose -f $(TMPDIR)/TAR/$(DTARFILE) $(TARDIR) )
	-@cp -p $(TMPDIR)/TAR/$(DTARFILE) .
	-@chmod 644 $(DTARFILE)
	-@rm -rf $(TMPDIR)/TAR
	-@/bin/ls -l $(DTARFILE)

dgz: dtar
	gzip $(DTARFILE)
	-@chmod 644 $(DTGZFILE)
	-@/bin/ls -l $(DTGZFILE)

dbz: dtar
	bzip2 $(DTARFILE)
	-@chmod 644 $(DTBZFILE)
	-@/bin/ls -l $(DTBZFILE)

sgz gz:
	./sh/mksrctar.sh $(TARDIR) $(STGZFILE) '/bin/tar' '-c --owner=root --group=root --verbose -f'

