# Generated automatically from Makefile.in by configure.
#-----------------------------------------------------------------------------
#
# NcFTP sh_util makefile for the platform linux-x86-libc5, on the host jenkins.
#
#-----------------------------------------------------------------------------

CC=ucfront-gcc arm-linux-elf-gcc 
CFLAGS=-D_REENTRANT -D_LARGEFILE64_SOURCE -O2 -g -fomit-frame-pointer -fno-common -fno-builtin -Wall -mswp-byte-writes -DCONFIG_NDS_ROM8BIT -mcpu=arm946e-s -mfpu=fpe3 -DEMBED -D__PIC__ -fpic -msingle-pic-base -Dlinux -D__linux__ -Dunix -D__uClinux__ -Wno-format-y2k -static-libgcc
#CC=gcc
#CFLAGS=-O2 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wshadow -Wbad-function-cast -Wwrite-strings -Wconversion
CPPFLAGS=-I/home/andrewec/dslinux/user/ncftp/src -I../libncftp -I../Strn -I../sio -I/home/andrewec/dslinux/user/ncftp/src -I/home/andrewec/dslinux/user/ncftp/src/libncftp -I/home/andrewec/dslinux/user/ncftp/src/sio -I/home/andrewec/dslinux/user/ncftp/src/Strn
prefix=/usr/bin
SYSCONFDIR=${prefix}/etc
SOCKS_LIBS=
LIBS=-lresolv $(SOCKS_LIBS)
STRIP=: #strip
LDFLAGS=-L../libncftp -L../Strn -L../sio -L/home/andrewec/dslinux/user/ncftp/src/libncftp -L/home/andrewec/dslinux/user/ncftp/src/sio -L/home/andrewec/dslinux/user/ncftp/src/Strn -Wl,-elf2flt -D__PIC__ -fpic -msingle-pic-base -mswp-byte-writes

# Any -D definitions:
DEFS=-Dsh_util -DO_S=\"linux-x86-libc5\" -DSYSCONFDIR=\"$(SYSCONFDIR)\" -DHAVE_CONFIG_H -DLINUX=32000 -DLINUX_LIBC=5

DPROGS=../bin/ncftpget.gdb ../bin/ncftpput.gdb ../bin/ncftpbatch.gdb ../bin/ncftpls.gdb

all: $(DPROGS)
	-@echo 'Done making NcFTP shell utilities.'

../bin/ncftpget.gdb: ncftpget.c gpshare.o preffw.o spoolutil.o util.o gl_getline.o version.o gpshare.h syshdrs.h ../ncftp/util.h ../ncftp/pref.h ../ncftp/spool.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h ../libncftp/libncftp.a
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) gpshare.o preffw.o spoolutil.o util.o gl_getline.o version.o ncftpget.c -o ../bin/ncftpget.gdb $(LDFLAGS) -lncftp -lStrn -lsio $(LIBS)
	-@$(STRIP) ../bin/ncftpget.gdb

../bin/ncftpput.gdb: ncftpput.c gpshare.o preffw.o spoolutil.o util.o gl_getline.o version.o gpshare.h syshdrs.h ../ncftp/util.h ../ncftp/pref.h ../ncftp/spool.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h ../libncftp/libncftp.a
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) gpshare.o preffw.o spoolutil.o util.o gl_getline.o version.o ncftpput.c -o ../bin/ncftpput.gdb $(LDFLAGS) -lncftp -lStrn -lsio $(LIBS)
	-@$(STRIP) ../bin/ncftpput.gdb

../bin/ncftpls.gdb: ncftpls.c gpshare.o preffw.o util.o gl_getline.o version.o gpshare.h syshdrs.h ../ncftp/util.h ../ncftp/pref.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h ../libncftp/libncftp.a
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) gpshare.o preffw.o util.o gl_getline.o version.o ncftpls.c -o ../bin/ncftpls.gdb $(LDFLAGS) -lncftp -lStrn -lsio $(LIBS)
	-@$(STRIP) ../bin/ncftpls.gdb

../bin/ncftpbatch.gdb: ncftpbatch.c preffw.o util.o spoolutil.o version.o gpshare.o ../ncftp/util.h ../ncftp/pref.h ../ncftp/spool.h gpshare.h syshdrs.h ../libncftp/ncftp.h ../libncftp/ncftp_errno.h ../libncftp/libncftp.a
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) preffw.o util.o spoolutil.o version.o gpshare.o ncftpbatch.c -o ../bin/ncftpbatch.gdb $(LDFLAGS) -lncftp -lStrn -lsio $(LIBS)
	-@$(STRIP) ../bin/ncftpbatch.gdb
	-@( cd ../bin ; rm -f ncftpspooler.gdb ; ln -s ncftpbatch.gdb ncftpspooler.gdb )

util.o: ../ncftp/util.c ../ncftp/util.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -c ../ncftp/util.c

gl_getline.o: ../ncftp/gl_getline.c ../ncftp/gl_getline.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -c ../ncftp/gl_getline.c

gpshare.o: gpshare.c gpshare.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -c gpshare.c

spool.o: ../ncftp/spool.c ../ncftp/spool.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -c ../ncftp/spool.c

spoolutil.o: ../ncftp/spoolutil.c ../ncftp/spool.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -c ../ncftp/spoolutil.c

preffw.o: ../ncftp/preffw.c ../ncftp/pref.h syshdrs.h
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -c ../ncftp/preffw.c

version.o: ../ncftp/version.c
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/version.c -c

clean:
	/bin/rm -rf $(DPROGS) ../bin/ncftpspooler.gdb *.o core *.pch SunWS_cache

PACKAGE=Makefile.in   gpshare.c     gpshare.h	  ncftpbatch.c \
	ncftpget.c    ncftpput.c    syshdrs.h	  ncftpls.c

TMPDIR=/tmp
TARDIR=sh_util

tarcp:
	-@mkdir -p $(TMPDIR)/TAR/$(TARDIR)
	-@chmod ga+r $(PACKAGE)
	-@chmod 755 $(TMPDIR)/TAR/$(TARDIR)
	cp -pr $(PACKAGE) $(TMPDIR)/TAR/$(TARDIR)
