cmd_arch/arm/boot/dts/imx6dl-sabresd-pf200.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6dl-sabresd-pf200.dtb.d.pre.tmp -nostdinc -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/boot/dts -I/home/study/imx-linux/SolidRun/linux-fslc/arch/arm/boot/dts/include -I/home/study/imx-linux/SolidRun/linux-fslc/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6dl-sabresd-pf200.dtb.dts.tmp arch/arm/boot/dts/imx6dl-sabresd-pf200.dts ; /home/study/imx-linux/SolidRun/linux-fslc/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6dl-sabresd-pf200.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6dl-sabresd-pf200.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6dl-sabresd-pf200.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6dl-sabresd-pf200.dtb.d.pre.tmp arch/arm/boot/dts/.imx6dl-sabresd-pf200.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6dl-sabresd-pf200.dtb.d

source_arch/arm/boot/dts/imx6dl-sabresd-pf200.dtb := arch/arm/boot/dts/imx6dl-sabresd-pf200.dts

deps_arch/arm/boot/dts/imx6dl-sabresd-pf200.dtb := \
  arch/arm/boot/dts/imx6dl-sabresd-ldo.dts \
  arch/arm/boot/dts/imx6dl-sabresd.dts \
  arch/arm/boot/dts/imx6dl.dtsi \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6dl-pinfunc.h \
  arch/arm/boot/dts/imx6qdl.dtsi \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/boot/dts/include/dt-bindings/clock/imx6qdl-clock.h \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx6qdl-sabresd.dtsi \
  /home/study/imx-linux/SolidRun/linux-fslc/arch/arm/boot/dts/include/dt-bindings/input/input.h \

arch/arm/boot/dts/imx6dl-sabresd-pf200.dtb: $(deps_arch/arm/boot/dts/imx6dl-sabresd-pf200.dtb)

$(deps_arch/arm/boot/dts/imx6dl-sabresd-pf200.dtb):
