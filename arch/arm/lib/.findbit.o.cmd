cmd_arch/arm/lib/findbit.o := arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/lib/.findbit.o.d  -nostdinc -isystem /usr/lib/gcc-cross/arm-linux-gnueabihf/5/include -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/study/imx-linux/SolidRun/linux-fslc/include/uapi -Iinclude/generated/uapi -include /home/study/imx-linux/SolidRun/linux-fslc/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float         -c -o arch/arm/lib/findbit.o arch/arm/lib/findbit.S

source_arch/arm/lib/findbit.o := arch/arm/lib/findbit.S

deps_arch/arm/lib/findbit.o := \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/asm/linkage.h \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/uapi/asm/ptrace.h \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/asm/hwcap.h \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/uapi/asm/hwcap.h \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/asm/opcodes-virt.h \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \

arch/arm/lib/findbit.o: $(deps_arch/arm/lib/findbit.o)

$(deps_arch/arm/lib/findbit.o):
