cmd_arch/arm/mm/proc-arm946.o := arm-linux-elf-gcc -Wp,-MD,arch/arm/mm/.proc-arm946.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -D__ASSEMBLY__  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te  -msoft-float    -c -o arch/arm/mm/proc-arm946.o arch/arm/mm/proc-arm946.S

deps_arch/arm/mm/proc-arm946.o := \
  arch/arm/mm/proc-arm946.S \
    $(wildcard include/config/cpu/cache/v4wt.h) \
    $(wildcard include/config/cpu/cache/v4wb.h) \
    $(wildcard include/config/cpu/arm946/cpu/idle.h) \
    $(wildcard include/config/cpu/mxu/enable.h) \
    $(wildcard include/config/cpu/arm940/d/cache/on.h) \
    $(wildcard include/config/cpu/arm940/i/cache/on.h) \
  include/linux/linkage.h \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/linkage.h \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
    $(wildcard include/config/hotplug/cpu.h) \
  include/linux/compiler.h \
  include/asm/assembler.h \
  include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
    $(wildcard include/config/smp.h) \
  include/asm/pgtable.h \
    $(wildcard include/config/mmu.h) \
  include/asm-generic/4level-fixup.h \
  include/asm/pgtable-nommu.h \
    $(wildcard include/config/arch/nds.h) \
  include/asm/procinfo.h \
  include/asm/hardware.h \
  include/asm/arch/hardware.h \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/xip/kernel.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/uclinux.h) \
  include/asm/page.h \
    $(wildcard include/config/cpu/copy/v3.h) \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
  include/asm-generic/page.h \
  arch/arm/mm/proc-macros.S \
  include/asm/asm-offsets.h \
  include/asm/thread_info.h \
  include/asm/fpstate.h \
    $(wildcard include/config/iwmmxt.h) \

arch/arm/mm/proc-arm946.o: $(deps_arch/arm/mm/proc-arm946.o)

$(deps_arch/arm/mm/proc-arm946.o):
