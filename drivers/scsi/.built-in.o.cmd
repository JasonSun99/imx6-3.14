cmd_drivers/scsi/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o drivers/scsi/built-in.o drivers/scsi/pcmcia/built-in.o drivers/scsi/scsi_mod.o drivers/scsi/device_handler/built-in.o drivers/scsi/arm/built-in.o drivers/scsi/sd_mod.o drivers/scsi/sr_mod.o drivers/scsi/sg.o 
