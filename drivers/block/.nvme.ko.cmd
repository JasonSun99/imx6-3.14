cmd_drivers/block/nvme.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/study/imx-linux/SolidRun/linux-fslc/scripts/module-common.lds --build-id  -o drivers/block/nvme.ko drivers/block/nvme.o drivers/block/nvme.mod.o