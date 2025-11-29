cmd_arch/arm/lib/getuser.o := arm-linux-elf-gcc -Wp,-MD,arch/arm/lib/.getuser.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -D__ASSEMBLY__  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te  -msoft-float    -c -o arch/arm/lib/getuser.o arch/arm/lib/getuser.S

deps_arch/arm/lib/getuser.o := \
  arch/arm/lib/getuser.S \
  include/asm/asm-offsets.h \
  include/asm/thread_info.h \
  include/asm/fpstate.h \
    $(wildcard include/config/iwmmxt.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \

arch/arm/lib/getuser.o: $(deps_arch/arm/lib/getuser.o)

$(deps_arch/arm/lib/getuser.o):
