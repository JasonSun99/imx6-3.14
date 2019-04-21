cmd_lib/raid6/neon1.o := arm-linux-gnueabihf-gcc -Wp,-MD,lib/raid6/.neon1.o.d  -nostdinc -isystem /usr/local/gcc-linaro-arm-linux-gnueabihf-4.7/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/study/imx-linux/SolidRun/linux-fslc/include/uapi -Iinclude/generated/uapi -include /home/study/imx-linux/SolidRun/linux-fslc/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -std=gnu89 -O2 -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO -ffreestanding -mfloat-abi=softfp -mfpu=neon  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(neon1)"  -D"KBUILD_MODNAME=KBUILD_STR(raid6_pq)" -c -o lib/raid6/.tmp_neon1.o lib/raid6/neon1.c

source_lib/raid6/neon1.o := lib/raid6/neon1.c

deps_lib/raid6/neon1.o := \
  /usr/local/gcc-linaro-arm-linux-gnueabihf-4.7/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include/arm_neon.h \
  /usr/local/gcc-linaro-arm-linux-gnueabihf-4.7/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include/stdint.h \
  /usr/local/gcc-linaro-arm-linux-gnueabihf-4.7/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include/stdint-gcc.h \

lib/raid6/neon1.o: $(deps_lib/raid6/neon1.o)

$(deps_lib/raid6/neon1.o):
