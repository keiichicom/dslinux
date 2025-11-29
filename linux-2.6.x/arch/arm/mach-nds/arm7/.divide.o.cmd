cmd_arch/arm/mach-nds/arm7/divide.o := arm-linux-elf-gcc -Wp,-MD,arch/arm/mach-nds/arm7/.divide.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -D__ASSEMBLY__  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te  -msoft-float    -c -o arch/arm/mach-nds/arm7/divide.o arch/arm/mach-nds/arm7/divide.S

deps_arch/arm/mach-nds/arm7/divide.o := \
  arch/arm/mach-nds/arm7/divide.S \

arch/arm/mach-nds/arm7/divide.o: $(deps_arch/arm/mach-nds/arm7/divide.o)

$(deps_arch/arm/mach-nds/arm7/divide.o):
