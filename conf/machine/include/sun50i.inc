require conf/machine/include/sunxi.inc
require conf/machine/include/sunxi-mali.inc
require conf/machine/include/arm/arch-armv8.inc

SOC_FAMILY = "sun50i"

PREFERRED_PROVIDER_virtual/kernel = "linux-sunxi"
PREFERRED_PROVIDER_u-boot = "u-boot-sun50i"
PREFERRED_PROVIDER_virtual/bootloader = "u-boot-sun50i"

KERNEL_IMAGETYPE = "Image"
