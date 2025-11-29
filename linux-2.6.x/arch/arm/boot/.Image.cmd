cmd_arch/arm/boot/Image := arm-linux-elf-objcopy -O binary -R .note -R .comment -S  vmlinux arch/arm/boot/Image
