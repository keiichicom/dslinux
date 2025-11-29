# Generated automatically from Makefile.in by configure.
#-----------------------------------------------------------------------------
#
# NcFTP vis makefile for the platform linux-x86-libc5, on the host jenkins.
#
#-----------------------------------------------------------------------------

CC=ucfront-gcc arm-linux-elf-gcc 
CFLAGS=-D_REENTRANT -D_LARGEFILE64_SOURCE -O2 -g -fomit-frame-pointer -fno-common -fno-builtin -Wall -mswp-byte-writes -DCONFIG_NDS_ROM8BIT -mcpu=arm946e-s -mfpu=fpe3 -DEMBED -D__PIC__ -fpic -msingle-pic-base -Dlinux -D__linux__ -Dunix -D__uClinux__ -Wno-format-y2k -static-libgcc
#CC=gcc
#CFLAGS=-O2 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wshadow -Wbad-function-cast -Wwrite-strings -Wconversion
CPPFLAGS=-I/home/andrewec/dslinux/user/ncftp/src -I../libncftp -I../Strn -I../sio -I/home/andrewec/dslinux/user/ncftp/src -I/home/andrewec/dslinux/user/ncftp/src/libncftp -I/home/andrewec/dslinux/user/ncftp/src/sio -I/home/andrewec/dslinux/user/ncftp/src/Strn
prefix=/usr/bin
exec_prefix=${prefix}
BINDIR=${exec_prefix}/bin
SYSCONFDIR=${prefix}/etc
SOCKS_LIBS=
CURSESLIBS=-lncurses
LIBS=$(CURSESLIBS) -lresolv $(SOCKS_LIBS)
STRIP=: #strip
LDFLAGS=-L../libncftp -L../Strn -L../sio -L/home/andrewec/dslinux/user/ncftp/src/libncftp -L/home/andrewec/dslinux/user/ncftp/src/sio -L/home/andrewec/dslinux/user/ncftp/src/Strn -Wl,-elf2flt -D__PIC__ -fpic -msingle-pic-base -mswp-byte-writes

# Any -D definitions:
DEFS=-Dvis -DO_S=\"linux-x86-libc5\" -DNCFTPPATH=\"$(BINDIR)/ncftp\" -DSYSCONFDIR=\"$(SYSCONFDIR)\" -DHAVE_CONFIG_H -DLINUX=32000 -DLINUX_LIBC=5

DPROGS=../bin/ncftpbookmarks.gdb

all: $(DPROGS)
	-@echo 'Done making NcFTP full-screen utilities.'

../bin/ncftpbookmarks.gdb: bmed.c wgets.o wutil.o pref.o preffw.o trace.o util.o bookmark.o version.o bmed.h wgets.h syshdrs.h ../libncftp/libncftp.a
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) bmed.c wgets.o wutil.o pref.o preffw.o trace.o util.o bookmark.o version.o -o ../bin/ncftpbookmarks.gdb $(LDFLAGS) -lncftp -lStrn -lsio $(LIBS)
	-@$(STRIP) ../bin/ncftpbookmarks.gdb

bookmark.o: ../ncftp/bookmark.c ../ncftp/bookmark.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/bookmark.c -c

pref.o: ../ncftp/pref.c ../ncftp/pref.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/pref.c -c

preffw.o: ../ncftp/preffw.c ../ncftp/pref.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/preffw.c -c

trace.o: ../ncftp/trace.c ../ncftp/trace.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/trace.c -c

util.o: ../ncftp/util.c ../ncftp/util.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/util.c -c

version.o: ../ncftp/version.c
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/version.c -c

wutil.o: wutil.c wutil.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) wutil.c -c

wgets.o: wgets.c wgets.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) wgets.c -c

clean:
	/bin/rm -rf $(DPROGS) *.o core *.pch SunWS_cache

PACKAGE=Makefile.in bmed.c bmed.h syshdrs.h wgets.c wgets.h wutil.c wutil.h

TMPDIR=/tmp
TARDIR=vis

tarcp:
	-@mkdir -p $(TMPDIR)/TAR/$(TARDIR)
	-@chmod ga+r $(PACKAGE)
	-@chmod 755 $(TMPDIR)/TAR/$(TARDIR)
	cp -pr $(PACKAGE) $(TMPDIR)/TAR/$(TARDIR)
