cmd_arch/arm/nwfpe/fpa11_cpdo.o := arm-linux-elf-gcc -Wp,-MD,arch/arm/nwfpe/.fpa11_cpdo.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te   -msoft-float -Uarm -mswp-byte-writes -Wdeclaration-after-statement -Wno-pointer-sign    -DKBUILD_BASENAME=fpa11_cpdo -DKBUILD_MODNAME=nwfpe -c -o arch/arm/nwfpe/fpa11_cpdo.o arch/arm/nwfpe/fpa11_cpdo.c

deps_arch/arm/nwfpe/fpa11_cpdo.o := \
  arch/arm/nwfpe/fpa11_cpdo.c \
    $(wildcard include/config/fpe/nwfpe/xp.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  arch/arm/nwfpe/fpa11.h \
  include/linux/thread_info.h \
  include/linux/bitops.h \
  include/asm/types.h \
  include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
  include/asm/system.h \
    $(wildcard include/config/cpu/has/no/cp15.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
  include/linux/linkage.h \
  include/asm/linkage.h \
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
  include/linux/compiler.h \
  include/linux/compiler-gcc4.h \
  include/linux/compiler-gcc.h \
  include/asm/arch/memory.h \
  include/asm-generic/page.h \
  include/asm/thread_info.h \
  include/asm/fpstate.h \
    $(wildcard include/config/iwmmxt.h) \
  include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  include/asm/domain.h \
  arch/arm/nwfpe/fpsr.h \
  arch/arm/nwfpe/milieu.h \
  arch/arm/nwfpe/ARM-gcc.h \
  arch/arm/nwfpe/softfloat.h \
  arch/arm/nwfpe/fpopcode.h \

arch/arm/nwfpe/fpa11_cpdo.o: $(deps_arch/arm/nwfpe/fpa11_cpdo.o)

$(deps_arch/arm/nwfpe/fpa11_cpdo.o):
