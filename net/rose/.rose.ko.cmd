cmd_net/rose/rose.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/study/imx-linux/SolidRun/linux-fslc/scripts/module-common.lds --build-id  -o net/rose/rose.ko net/rose/rose.o net/rose/rose.mod.o