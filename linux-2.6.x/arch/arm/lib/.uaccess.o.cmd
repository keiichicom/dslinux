cmd_arch/arm/lib/uaccess.o := arm-linux-elf-gcc -Wp,-MD,arch/arm/lib/.uaccess.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -D__ASSEMBLY__  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te  -msoft-float    -c -o arch/arm/lib/uaccess.o arch/arm/lib/uaccess.S

deps_arch/arm/lib/uaccess.o := \
  arch/arm/lib/uaccess.S \
    $(wildcard include/config/nds/rom8bit.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/linkage.h \
  include/asm/linkage.h \
  include/asm/assembler.h \
  include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
    $(wildcard include/config/smp.h) \
  include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \

arch/arm/lib/uaccess.o: $(deps_arch/arm/lib/uaccess.o)

$(deps_arch/arm/lib/uaccess.o):
