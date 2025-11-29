cmd_drivers/video/console/font_mini_4x6.o := arm-linux-elf-gcc -Wp,-MD,drivers/video/console/.font_mini_4x6.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te   -msoft-float -Uarm -mswp-byte-writes -Wdeclaration-after-statement -Wno-pointer-sign    -DKBUILD_BASENAME=font_mini_4x6 -DKBUILD_MODNAME=font -c -o drivers/video/console/font_mini_4x6.o drivers/video/console/font_mini_4x6.c

deps_drivers/video/console/font_mini_4x6.o := \
  drivers/video/console/font_mini_4x6.c \
  include/linux/font.h \
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

drivers/video/console/font_mini_4x6.o: $(deps_drivers/video/console/font_mini_4x6.o)

$(deps_drivers/video/console/font_mini_4x6.o):
