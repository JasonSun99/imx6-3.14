cmd_drivers/ata/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o drivers/ata/built-in.o drivers/ata/libata.o drivers/ata/ahci.o drivers/ata/libahci.o drivers/ata/ahci_platform.o drivers/ata/libahci_platform.o drivers/ata/ahci_imx.o drivers/ata/ata_piix.o 
