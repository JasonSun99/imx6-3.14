cmd_drivers/usb/host/sl811-hcd.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/study/imx-linux/SolidRun/linux-fslc/scripts/module-common.lds --build-id  -o drivers/usb/host/sl811-hcd.ko drivers/usb/host/sl811-hcd.o drivers/usb/host/sl811-hcd.mod.o