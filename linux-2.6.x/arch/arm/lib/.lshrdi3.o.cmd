cmd_arch/arm/lib/lshrdi3.o := arm-linux-elf-gcc -Wp,-MD,arch/arm/lib/.lshrdi3.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te   -msoft-float -Uarm -mswp-byte-writes -Wdeclaration-after-statement -Wno-pointer-sign    -DKBUILD_BASENAME=lshrdi3 -DKBUILD_MODNAME=lshrdi3 -c -o arch/arm/lib/lshrdi3.o arch/arm/lib/lshrdi3.c

deps_arch/arm/lib/lshrdi3.o := \
  arch/arm/lib/lshrdi3.c \
  arch/arm/lib/gcclib.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
  include/linux/compiler-gcc4.h \
  include/linux/compiler-gcc.h \
  include/asm/posix_types.h \
  include/asm/types.h \

arch/arm/lib/lshrdi3.o: $(deps_arch/arm/lib/lshrdi3.o)

$(deps_arch/arm/lib/lshrdi3.o):
