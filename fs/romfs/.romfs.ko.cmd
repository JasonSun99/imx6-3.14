cmd_fs/romfs/romfs.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/study/imx-linux/SolidRun/linux-fslc/scripts/module-common.lds --build-id  -o fs/romfs/romfs.ko fs/romfs/romfs.o fs/romfs/romfs.mod.o
