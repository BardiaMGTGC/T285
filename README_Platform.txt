How to build Mobule for Platform
- It is only for modules are needed to using Android build system.
- Please check its own install information under its folder for other module.

[Step to build]
1. Get android open source.
    : version info - Android 5.1
    ( Download site : http://source.android.com )
	
2. Get previous version of SM-J200G open source code
    : SM-J200GU_SEA_LL_Opensource.zip, version : J200GUDXU1AOI4
     ( Download site : http://opensource.samsung.com )
     Unzip it, then you will see the file Platform.tar.gz which includes the platform source code.

3. Unzip Platform.zip and overwrite to the platform source code.

2. Copy module that you want to build - to original android open source
   If same module exist in android open source, you should replace it. (no overwrite)
   
  # It is possible to build all modules at once.
  
3. You should add module name to 'PRODUCT_PACKAGES' in 'build\target\product\core.mk' as following case.
                  
ex.) [build\target\product\core.mk] - add below module name

# strongSwan
PRODUCT_PACKAGES += \
    charon \
    libcharon \
    libhydra \
    libstrongswan

# e2fsprog
PRODUCT_PACKAGES += \
    e2fsck \
    blkid \
    resize2fs

# libexifa, libjpega, libexif
PRODUCT_PACKAGES += \
    libexif \
    libexifa \
    libjpega \
    
# KeyUtils
PRODUCT_PACKAGES += \
    libkeyutils
     
# dm_verity_hash
PRODUCT_PACKAGES += \
    dm_verity_hash
   
4. excute build command
	make -j64
   
5. Note : 
 		To download the source code of S/W listed below, please visit http://opensource.samsung.com and find 
		Mobile -> Mobile Application" menu, and then, you will be able to download what you want. 
		You might save time in finding the right one by making use of the search keyword below. 
 			- SBrowser_3.0.38_MASS_LATEST.apk : "SBrowser"
			
			