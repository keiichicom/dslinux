cmd_drivers/video/logo/logo_nds_big_clut224.o := arm-linux-elf-gcc -Wp,-MD,drivers/video/logo/.logo_nds_big_clut224.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te   -msoft-float -Uarm -mswp-byte-writes -Wdeclaration-after-statement -Wno-pointer-sign    -DKBUILD_BASENAME=logo_nds_big_clut224 -DKBUILD_MODNAME=logo_nds_big_clut224 -c -o drivers/video/logo/logo_nds_big_clut224.o drivers/video/logo/logo_nds_big_clut224.c

deps_drivers/video/logo/logo_nds_big_clut224.o := \
  drivers/video/logo/logo_nds_big_clut224.c \
  include/linux/linux_logo.h \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
    $(wildcard include/config/hotplug/cpu.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/compiler.h \
  include/linux/compiler-gcc4.h \
  include/linux/compiler-gcc.h \

drivers/video/logo/logo_nds_big_clut224.o: $(deps_drivers/video/logo/logo_nds_big_clut224.o)

$(deps_drivers/video/logo/logo_nds_big_clut224.o):
