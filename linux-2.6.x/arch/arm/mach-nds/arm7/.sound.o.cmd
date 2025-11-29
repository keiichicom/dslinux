cmd_arch/arm/mach-nds/arm7/sound.o := arm-linux-elf-gcc -Wp,-MD,arch/arm/mach-nds/arm7/.sound.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te   -msoft-float -Uarm -mswp-byte-writes -Wdeclaration-after-statement -Wno-pointer-sign    -DKBUILD_BASENAME=sound -DKBUILD_MODNAME=sound -c -o arch/arm/mach-nds/arm7/sound.o arch/arm/mach-nds/arm7/sound.c

deps_arch/arm/mach-nds/arm7/sound.o := \
  arch/arm/mach-nds/arm7/sound.c \
  include/asm/types.h \
  include/asm/io.h \
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
  include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/byteorder/swab.h \
  include/linux/byteorder/generic.h \
  include/asm/memory.h \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/discontigmem.h) \
  include/asm/arch/memory.h \
  include/asm/arch/hardware.h \
    $(wildcard include/config/xip/kernel.h) \
    $(wildcard include/config/uclinux.h) \
  include/asm/arch/io.h \
  arch/arm/mach-nds/arm7/sound.h \

arch/arm/mach-nds/arm7/sound.o: $(deps_arch/arm/mach-nds/arm7/sound.o)

$(deps_arch/arm/mach-nds/arm7/sound.o):
