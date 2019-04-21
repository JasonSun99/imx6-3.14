cmd_arch/arm/kernel/sigreturn_codes.o := arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/kernel/.sigreturn_codes.o.d  -nostdinc -isystem /usr/lib/gcc-cross/arm-linux-gnueabihf/5/include -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/study/imx-linux/SolidRun/linux-fslc/include/uapi -Iinclude/generated/uapi -include /home/study/imx-linux/SolidRun/linux-fslc/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float         -c -o arch/arm/kernel/sigreturn_codes.o arch/arm/kernel/sigreturn_codes.S

source_arch/arm/kernel/sigreturn_codes.o := arch/arm/kernel/sigreturn_codes.S

deps_arch/arm/kernel/sigreturn_codes.o := \
    $(wildcard include/config/cpu/thumbonly.h) \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/asm/unistd.h \
    $(wildcard include/config/aeabi.h) \
    $(wildcard include/config/oabi/compat.h) \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/uapi/asm/unistd.h \

arch/arm/kernel/sigreturn_codes.o: $(deps_arch/arm/kernel/sigreturn_codes.o)

$(deps_arch/arm/kernel/sigreturn_codes.o):
