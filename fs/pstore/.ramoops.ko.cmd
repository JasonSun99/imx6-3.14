cmd_fs/pstore/ramoops.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/study/imx-linux/SolidRun/linux-fslc/scripts/module-common.lds --build-id  -o fs/pstore/ramoops.ko fs/pstore/ramoops.o fs/pstore/ramoops.mod.o