cmd_arch/arm/mach-nds/arm7/head.o := arm-linux-elf-gcc -Wp,-MD,arch/arm/mach-nds/arm7/.head.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -D__ASSEMBLY__  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te  -msoft-float    -c -o arch/arm/mach-nds/arm7/head.o arch/arm/mach-nds/arm7/head.S

deps_arch/arm/mach-nds/arm7/head.o := \
  arch/arm/mach-nds/arm7/head.S \
    $(wildcard include/config/xip/kernel.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \

arch/arm/mach-nds/arm7/head.o: $(deps_arch/arm/mach-nds/arm7/head.o)

$(deps_arch/arm/mach-nds/arm7/head.o):
