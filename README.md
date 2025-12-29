2025-12-29 I am re-purposing this site to improving dslinux on the nds. For other devices either use a 2ds/3ds or higher device with other available Linux repos.

Note: For now: I have given up on the project of porting dslinux to the DSi / DSi XL, since if there is no sdmmc driver, there is no point in continuing. If anyone else wants to try, you can try to integrate this driver into dslinux: https://github.com/profi200/dsi_sdmmc/tree/main, you will need to first replace the devkitpro header includes with linux header includes compile it with the dslinux toolchain to .o files and include in dslinux and rebuild it.

This is a fork of the original dslinux hosted here: https://www.dslinux.org/, source code: https://svn.dslinux.org/svn/trunk, which now runs on the Nintendo DSi and DSi XL. Note that if you are a Nintendo ds/ds lite owner, you should still use the original dslinux.

The pre-release, dsilinux.nds, in the source tree, includes 1 game with dldi disabled. The reason for it being disabled is that the dldi driver that comes with the original dslinux is only for flashcarts (which may need patching depending on your type of flashcart), not the DSi / DSi XL's removable sdcard. So to get it working, I would either have to create a new dldi driver or a Linux kernel mmc/sd host driver which is not done yet. As a result of this there can be no Linux directory with games on the sdcard since Linux can't read it. So I installed one game to the ROMFS instead which is advent4 (Colossal Cave Adventure) for proof-of-concept purposes. An improvement over the original dslinux is that I could specify the available 16mb of RAM that is on the DSi / DSi XL, since the memory expansion pack (required by the older dslinux) can't be installed on the DSi / DSi XL since there is no GBA slot on those devices.

Priority TODOs: 

I have given up on this: Create and add Linux kernel driver for mmc/sd. 

Add WiFi driver with WPA.

Here is an example of it running on a Nintendo DSi XL:

<img width="680" height="877" alt="image" src="https://github.com/user-attachments/assets/a00725e6-7d2f-479c-a8d5-05591a313060" />

Build Instructions:

Note: I had trouble with the github source tree not matching my local, so the build did not work after a git clone of the source files not compressed. So you need to download this archive: dsilinux-backup.tar.gz instead and unpack the contents into dslinux (without the top folder: dslinux-backup). You need git lfs (large file storage) installed to download it.

You need to first setup a VM with Debian Wheezy 7.11.0 i386 version and use that for your build.

Then follow the instructions here: https://www.dslinux.org/wiki/CompilingDSLinux.html, except you would clone this repo instead of downloading it from Apache Subversion. I strongly suggest to download a pre-compiled toolchain rather than trying to compile it locally. The toolchain I used is available here: https://dslinux.org/toolchain/dslinux-toolchain-2008-01-24-i686.tbz .

The only other difference is you would build it once and then do make menuconfig again and select Kernel/library/Defaults selection, Select Customize Kernel Settings(New), Exit, Exit, Yes, then select System Type and do these settings and then do Exit,Exit,Yes and run make again:

<img width="384" height="123" alt="image" src="https://github.com/user-attachments/assets/cbb90cef-f96b-423c-9cc6-4d73ea949315" />
