cmd_arch/arm/kernel/hyp-stub.o := arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/kernel/.hyp-stub.o.d  -nostdinc -isystem /usr/lib/gcc-cross/arm-linux-gnueabihf/5/include -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/study/imx-linux/SolidRun/linux-fslc/include/uapi -Iinclude/generated/uapi -include /home/study/imx-linux/SolidRun/linux-fslc/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float         -c -o arch/arm/kernel/hyp-stub.o arch/arm/kernel/hyp-stub.S

source_arch/arm/kernel/hyp-stub.o := arch/arm/kernel/hyp-stub.S

deps_arch/arm/kernel/hyp-stub.o := \
    $(wildcard include/config/arm/arch/timer.h) \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
    $(wildcard include/config/modules.h) \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/linux/linkage.h \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
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
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/include/asm/virt.h \
    $(wildcard include/config/arm/virt/ext.h) \

arch/arm/kernel/hyp-stub.o: $(deps_arch/arm/kernel/hyp-stub.o)

$(deps_arch/arm/kernel/hyp-stub.o):