cmd_drivers/scsi/osd/osd.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/study/imx-linux/SolidRun/linux-fslc/scripts/module-common.lds --build-id  -o drivers/scsi/osd/osd.ko drivers/scsi/osd/osd.o drivers/scsi/osd/osd.mod.o