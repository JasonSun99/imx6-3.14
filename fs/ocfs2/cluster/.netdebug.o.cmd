cmd_fs/ocfs2/cluster/netdebug.o := arm-linux-gnueabihf-gcc -Wp,-MD,fs/ocfs2/cluster/.netdebug.o.d  -nostdinc -isystem /usr/local/gcc-linaro-arm-linux-gnueabihf-4.7/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/study/imx-linux/SolidRun/linux-fslc/include/uapi -Iinclude/generated/uapi -include /home/study/imx-linux/SolidRun/linux-fslc/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -std=gnu89 -O2 -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(netdebug)"  -D"KBUILD_MODNAME=KBUILD_STR(ocfs2_nodemanager)" -c -o fs/ocfs2/cluster/.tmp_netdebug.o fs/ocfs2/cluster/netdebug.c

source_fs/ocfs2/cluster/netdebug.o := fs/ocfs2/cluster/netdebug.c

deps_fs/ocfs2/cluster/netdebug.o := \
    $(wildcard include/config/debug/fs.h) \
    $(wildcard include/config/ocfs2/fs/stats.h) \

fs/ocfs2/cluster/netdebug.o: $(deps_fs/ocfs2/cluster/netdebug.o)

$(deps_fs/ocfs2/cluster/netdebug.o):
