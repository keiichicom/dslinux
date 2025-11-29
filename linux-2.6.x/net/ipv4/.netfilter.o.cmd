cmd_net/ipv4/netfilter.o := arm-linux-elf-gcc -Wp,-MD,net/ipv4/.netfilter.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te   -msoft-float -Uarm -mswp-byte-writes -Wdeclaration-after-statement -Wno-pointer-sign    -DKBUILD_BASENAME=netfilter -DKBUILD_MODNAME=netfilter -c -o net/ipv4/netfilter.o net/ipv4/netfilter.c

deps_net/ipv4/netfilter.o := \
  net/ipv4/netfilter.c \
    $(wildcard include/config/netfilter.h) \
    $(wildcard include/config/ip/route/fwmark.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \

net/ipv4/netfilter.o: $(deps_net/ipv4/netfilter.o)

$(deps_net/ipv4/netfilter.o):
