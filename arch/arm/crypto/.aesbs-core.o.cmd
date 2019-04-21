cmd_arch/arm/crypto/aesbs-core.o := arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/crypto/.aesbs-core.o.d  -nostdinc -isystem /usr/lib/gcc-cross/arm-linux-gnueabihf/5/include -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/study/imx-linux/SolidRun/linux-fslc/include/uapi -Iinclude/generated/uapi -include /home/study/imx-linux/SolidRun/linux-fslc/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float         -c -o arch/arm/crypto/aesbs-core.o arch/arm/crypto/aesbs-core.S

source_arch/arm/crypto/aesbs-core.o := arch/arm/crypto/aesbs-core.S

deps_arch/arm/crypto/aesbs-core.o := \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

arch/arm/crypto/aesbs-core.o: $(deps_arch/arm/crypto/aesbs-core.o)

$(deps_arch/arm/crypto/aesbs-core.o):
