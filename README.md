This is a fork of the original dslinux hosted here: https://www.dslinux.org/, which now runs on the Nintendo DSi and DSi XL. Note that if you are a 
Nintendo ds/ds lite owner, you should still use the original dslinux.

The pre-release includes 1 game with dldi disabled. The reason for it being disabled is that the dldi driver that comes with the original dslinux is only for flashcarts. So to get it working, I would either have to create a new dldi driver or Linux kernel mmc/sd host driver which is not done yet. As a result of this there can be no Linux directory with games on the sdcard since Linux can't read it. So I installed one game to the ROMFS instead which is advent4 (Colossal Cave Adventure) for proof-of-concept purposes. An improvement over the original dslinux is that I could specify the available 16mb of RAM that is on the DSi / DSi XL, since the memory expansion pack (required by the older dslinux) can't be installed on the DSi / DSi XL since there is no GBA slot on those devices.

Priority TODOs: Create and add Linux kernel driver for mmc/sd, Add WiFi driver with WPA.

Here is an example of it running on a Nintendo DSi XL:

<img width="679" height="923" alt="image" src="https://github.com/user-attachments/assets/a01e4c22-0990-43c0-942b-fda66924cde5" />

Build Instructions: 

You need to first setup a VM with Debian Wheezy 7.11.0 i386 version and use that for your build.


Then follow the instructions here, except you would clone this repo instead of downloading it from Apache Subversion. I strongly suggest to download a pre-compiled toolchain rather than trying to compile it locally. The toolchain I used is in the source tree: dslinux-toolchain-2008-01-24-i686.tbz :

https://www.dslinux.org/wiki/CompilingDSLinux.html

