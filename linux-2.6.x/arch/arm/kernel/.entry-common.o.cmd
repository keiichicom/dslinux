cmd_arch/arm/kernel/entry-common.o := arm-linux-elf-gcc -Wp,-MD,arch/arm/kernel/.entry-common.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -D__ASSEMBLY__  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te  -msoft-float    -c -o arch/arm/kernel/entry-common.o arch/arm/kernel/entry-common.S

deps_arch/arm/kernel/entry-common.o := \
  arch/arm/kernel/entry-common.S \
    $(wildcard include/config/cpu/arm710.h) \
    $(wildcard include/config/arm/thumb.h) \
    $(wildcard include/config/alignment/trap.h) \
    $(wildcard include/config/mmu.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/unistd.h \
  include/linux/linkage.h \
  include/asm/linkage.h \
  arch/arm/kernel/entry-header.S \
    $(wildcard include/config/frame/pointer.h) \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
    $(wildcard include/config/hotplug/cpu.h) \
  include/linux/compiler.h \
  include/asm/assembler.h \
  include/asm/ptrace.h \
    $(wildcard include/config/smp.h) \
  include/asm/asm-offsets.h \
  include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \
  include/asm/thread_info.h \
  include/asm/fpstate.h \
    $(wildcard include/config/iwmmxt.h) \
  arch/arm/kernel/calls.S \

arch/arm/kernel/entry-common.o: $(deps_arch/arm/kernel/entry-common.o)

$(deps_arch/arm/kernel/entry-common.o):
