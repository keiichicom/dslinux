cmd_arch/arm/lib/backtrace.o := arm-linux-elf-gcc -Wp,-MD,arch/arm/lib/.backtrace.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -D__ASSEMBLY__  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te  -msoft-float    -c -o arch/arm/lib/backtrace.o arch/arm/lib/backtrace.S

deps_arch/arm/lib/backtrace.o := \
  arch/arm/lib/backtrace.S \
    $(wildcard include/config/cpu.h) \
    $(wildcard include/config/frame/pointer.h) \
    $(wildcard include/config/printk.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/linkage.h \
  include/asm/linkage.h \
  include/asm/assembler.h \
  include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
    $(wildcard include/config/smp.h) \

arch/arm/lib/backtrace.o: $(deps_arch/arm/lib/backtrace.o)

$(deps_arch/arm/lib/backtrace.o):
