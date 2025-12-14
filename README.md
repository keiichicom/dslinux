This is a fork of the original dslinux source tree hosted here: (<a href="https://svn.dslinux.org/svn/trunk/" target="_blank">dslinux source code</a>) , which now runs on the Nintendo DSi and DSi XL. Note that if you are a Nintendo ds/ds lite owner, you should still use the original dslinux.

The pre-release, dslinux.nds, in the source tree, includes 1 game with dldi disabled. The reason for it being disabled is that the dldi driver that comes with the original dslinux is only for flashcarts. So to get it working, I would either have to create a new dldi driver or a Linux kernel mmc/sd host driver which is not done yet. As a result of this there can be no Linux directory with games on the sdcard since Linux can't read it. So I installed one game to the ROMFS instead which is advent4 (Colossal Cave Adventure) for proof-of-concept purposes. An improvement over the original dslinux is that I could specify the available 16mb of RAM that is on the DSi / DSi XL, since the memory expansion pack (required by the older dslinux) can't be installed on the DSi / DSi XL since there is no GBA slot on those devices.

Priority TODOs: 

I have given up on this: Create and add Linux kernel driver for mmc/sd. 

Add WiFi driver with WPA.

Here is an example of it running on a Nintendo DSi XL:

<img width="680" height="877" alt="image" src="https://github.com/user-attachments/assets/a00725e6-7d2f-479c-a8d5-05591a313060" />

Build Instructions:

Note: I had trouble with the github source tree not matching my local, so the build did not work after a git clone. So you need to take this archive: dslinux-backup.tar.gz and unpack the contents into dslinux (without the top folder: dslinux-backup. You need git lfs (large file storage) installed to download it.

You need to first setup a VM with Debian Wheezy 7.11.0 i386 version and use that for your build.

Then follow the instructions here: https://www.dslinux.org/wiki/CompilingDSLinux.html, except you would clone this repo instead of downloading it from Apache Subversion. I strongly suggest to download a pre-compiled toolchain rather than trying to compile it locally. The toolchain I used is available here: [dslinux-toolchain-2008-01-24-i686.tbz](https://dslinux.org/toolchain/dslinux-toolchain-2008-01-24-i686.tbz).

The only other difference is you would build it once and then do make menuconfig again and select Kernel/library/Defaults selection, Select Customize Kernel Settings(New), Exit, Exit, Yes, then select System Type and do these settings and then do Exit,Exit,Yes and run make again:

<img width="384" height="123" alt="image" src="https://github.com/user-attachments/assets/cbb90cef-f96b-423c-9cc6-4d73ea949315" />
