cmd_arch/arm/lib/delay.o := arm-linux-elf-gcc -Wp,-MD,arch/arm/lib/.delay.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -D__ASSEMBLY__  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te  -msoft-float    -c -o arch/arm/lib/delay.o arch/arm/lib/delay.S

deps_arch/arm/lib/delay.o := \
  arch/arm/lib/delay.S \
  include/linux/linkage.h \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/linkage.h \
  include/asm/assembler.h \
  include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
    $(wildcard include/config/smp.h) \

arch/arm/lib/delay.o: $(deps_arch/arm/lib/delay.o)

$(deps_arch/arm/lib/delay.o):
