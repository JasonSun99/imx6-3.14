cmd_arch/arm/boot/dts/imx51-babbage.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx51-babbage.dtb.d.pre.tmp -nostdinc -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/boot/dts -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/boot/dts/include -I/home/study/imx-linux/SolidRun/linux-fslc/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx51-babbage.dtb.dts.tmp arch/arm/boot/dts/imx51-babbage.dts ; /home/study/imx-linux/SolidRun/linux-fslc/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx51-babbage.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx51-babbage.dtb.d.dtc.tmp arch/arm/boot/dts/.imx51-babbage.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx51-babbage.dtb.d.pre.tmp arch/arm/boot/dts/.imx51-babbage.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx51-babbage.dtb.d

source_arch/arm/boot/dts/imx51-babbage.dtb := arch/arm/boot/dts/imx51-babbage.dts

deps_arch/arm/boot/dts/imx51-babbage.dtb := \
  arch/arm/boot/dts/imx51.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx51-pinfunc.h \

arch/arm/boot/dts/imx51-babbage.dtb: $(deps_arch/arm/boot/dts/imx51-babbage.dtb)

$(deps_arch/arm/boot/dts/imx51-babbage.dtb):