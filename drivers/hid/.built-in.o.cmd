cmd_drivers/hid/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o drivers/hid/built-in.o drivers/hid/hid.o drivers/hid/hid-generic.o drivers/hid/hid-magicmouse.o drivers/hid/hid-ntrig.o drivers/hid/usbhid/built-in.o 