cmd_fs/binfmt_misc.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/study/imx-linux/SolidRun/linux-fslc/scripts/module-common.lds --build-id  -o fs/binfmt_misc.ko fs/binfmt_misc.o fs/binfmt_misc.mod.o
