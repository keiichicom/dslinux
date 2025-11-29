cmd_arch/arm/mm/cache-v4wb.o := arm-linux-elf-gcc -Wp,-MD,arch/arm/mm/.cache-v4wb.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -D__ASSEMBLY__  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te  -msoft-float    -c -o arch/arm/mm/cache-v4wb.o arch/arm/mm/cache-v4wb.S

deps_arch/arm/mm/cache-v4wb.o := \
  arch/arm/mm/cache-v4wb.S \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/arch/nds.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/linkage.h \
  include/asm/linkage.h \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
    $(wildcard include/config/hotplug/cpu.h) \
  include/linux/compiler.h \
  include/asm/hardware.h \
    $(wildcard include/config/mmu.h) \
  include/asm/arch/hardware.h \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/xip/kernel.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/uclinux.h) \
  include/asm/page.h \
    $(wildcard include/config/cpu/copy/v3.h) \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
  include/asm-generic/page.h \
  arch/arm/mm/proc-macros.S \
  include/asm/asm-offsets.h \
  include/asm/thread_info.h \
  include/asm/fpstate.h \
    $(wildcard include/config/iwmmxt.h) \

arch/arm/mm/cache-v4wb.o: $(deps_arch/arm/mm/cache-v4wb.o)

$(deps_arch/arm/mm/cache-v4wb.o):
