cmd_arch/arm/mach-nds/arm7/spi.o := arm-linux-elf-gcc -Wp,-MD,arch/arm/mach-nds/arm7/.spi.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te   -msoft-float -Uarm -mswp-byte-writes -Wdeclaration-after-statement -Wno-pointer-sign    -DKBUILD_BASENAME=spi -DKBUILD_MODNAME=spi -c -o arch/arm/mach-nds/arm7/spi.o arch/arm/mach-nds/arm7/spi.c

deps_arch/arm/mach-nds/arm7/spi.o := \
  arch/arm/mach-nds/arm7/spi.c \
  include/asm/types.h \
  include/asm/arch/fifo.h \
  include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/spinlock/sleep.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/sysctl.h) \
  /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include/stdarg.h \
  include/linux/linkage.h \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/linkage.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
  include/linux/compiler-gcc4.h \
  include/linux/compiler-gcc.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
  include/linux/posix_types.h \
  include/asm/posix_types.h \
  include/asm/types.h \
  include/linux/bitops.h \
  include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
  include/asm/system.h \
    $(wildcard include/config/cpu/has/no/cp15.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
  include/asm/proc-fns.h \
    $(wildcard include/config/cpu/32.h) \
    $(wildcard include/config/cpu/arm610.h) \
    $(wildcard include/config/cpu/arm7tdmi.h) \
    $(wildcard include/config/cpu/arm710.h) \
    $(wildcard include/config/cpu/s3c4510b.h) \
    $(wildcard include/config/cpu/arm720t.h) \
    $(wildcard include/config/cpu/arm9tdmi.h) \
    $(wildcard include/config/cpu/arm920t.h) \
    $(wildcard include/config/cpu/arm922t.h) \
    $(wildcard include/config/cpu/arm925t.h) \
    $(wildcard include/config/cpu/arm926t.h) \
    $(wildcard include/config/cpu/arm940t.h) \
    $(wildcard include/config/cpu/arm946e.h) \
    $(wildcard include/config/cpu/arm1020.h) \
    $(wildcard include/config/cpu/arm1020e.h) \
    $(wildcard include/config/cpu/arm1022.h) \
    $(wildcard include/config/cpu/arm1026.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/v6.h) \
  include/asm/cpu-single.h \
  include/asm/page.h \
    $(wildcard include/config/cpu/copy/v3.h) \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
  include/asm/glue.h \
    $(wildcard include/config/cpu/abrt/lv4t.h) \
    $(wildcard include/config/cpu/abrt/ev4.h) \
    $(wildcard include/config/cpu/abrt/ev4t.h) \
    $(wildcard include/config/cpu/abrt/ev5tj.h) \
    $(wildcard include/config/cpu/abrt/ev5t.h) \
    $(wildcard include/config/cpu/abrt/ev6.h) \
  include/asm/page-nommu.h \
    $(wildcard include/config/small/tasks.h) \
  include/asm/memory.h \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/discontigmem.h) \
  include/asm/arch/memory.h \
  include/asm-generic/page.h \
  include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/byteorder/swab.h \
  include/linux/byteorder/generic.h \
  include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/debug/bugverbose.h) \
  include/asm-generic/bug.h \
  include/linux/list.h \
  include/linux/prefetch.h \
  include/asm/processor.h \
  include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  include/asm/procinfo.h \
  include/asm/cache.h \
  arch/arm/mach-nds/arm7/spi.h \

arch/arm/mach-nds/arm7/spi.o: $(deps_arch/arm/mach-nds/arm7/spi.o)

$(deps_arch/arm/mach-nds/arm7/spi.o):
