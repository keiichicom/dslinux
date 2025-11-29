cmd_arch/arm/lib/div64.o := arm-linux-elf-gcc -Wp,-MD,arch/arm/lib/.div64.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -D__ASSEMBLY__  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te  -msoft-float    -c -o arch/arm/lib/div64.o arch/arm/lib/div64.S

deps_arch/arm/lib/div64.o := \
  arch/arm/lib/div64.S \
  include/linux/linkage.h \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/linkage.h \

arch/arm/lib/div64.o: $(deps_arch/arm/lib/div64.o)

$(deps_arch/arm/lib/div64.o):
