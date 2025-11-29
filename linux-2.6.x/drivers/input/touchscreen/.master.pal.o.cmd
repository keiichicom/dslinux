cmd_drivers/input/touchscreen/master.pal.o := arm-linux-elf-gcc -Wp,-MD,drivers/input/touchscreen/.master.pal.o.d  -nostdinc -isystem /usr/local/dslinux-toolchain-2008-01-24-i686/bin/../lib/gcc/arm-linux-elf/4.0.4/include -D__KERNEL__ -Iinclude  -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer  -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te   -msoft-float -Uarm -mswp-byte-writes -Wdeclaration-after-statement -Wno-pointer-sign    -DKBUILD_BASENAME=master.pal -DKBUILD_MODNAME=master.pal -c -o drivers/input/touchscreen/master.pal.o drivers/input/touchscreen/master.pal.c

deps_drivers/input/touchscreen/master.pal.o := \
  drivers/input/touchscreen/master.pal.c \

drivers/input/touchscreen/master.pal.o: $(deps_drivers/input/touchscreen/master.pal.o)

$(deps_drivers/input/touchscreen/master.pal.o):
