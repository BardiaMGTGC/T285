################################################################################
1. How to Build
	- get Toolchain
		From android git server , codesourcery and etc ..
		
	- edit Makefile
		edit "CROSS_COMPILE" to right toolchain path(You downloaded).
		Ex)  CROSS_COMPILE=/*/gcc/linux-x86/arm/arm-eabi-4.8/bin/arm-eabi-    // You have to check.

	- make
		$ make gtexslte_rev02_defconfig
		$ make -j64

2. Output files
	- Kernel : arch/arm/boot/zImage
	- module : drivers/*/built-in.o

3. How to Clean	
		$ make ARCH=arm clean
		$ make ARCH=arm distclean		
################################################################################