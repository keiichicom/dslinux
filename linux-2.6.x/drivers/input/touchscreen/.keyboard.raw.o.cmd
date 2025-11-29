cmd_drivers/input/touchscreen/keyboard.raw.o := arm-linux-elf-gcc -Wp,-MD,drivers/input/touchscreen/.keyboard.raw.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te   -msoft-float -Uarm -mswp-byte-writes -Wdeclaration-after-statement -Wno-pointer-sign    -DKBUILD_BASENAME=keyboard.raw -DKBUILD_MODNAME=keyboard.raw -c -o drivers/input/touchscreen/keyboard.raw.o drivers/input/touchscreen/keyboard.raw.c

deps_drivers/input/touchscreen/keyboard.raw.o := \
  drivers/input/touchscreen/keyboard.raw.c \

drivers/input/touchscreen/keyboard.raw.o: $(deps_drivers/input/touchscreen/keyboard.raw.o)

$(deps_drivers/input/touchscreen/keyboard.raw.o):
