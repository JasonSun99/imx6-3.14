cmd_drivers/watchdog/softdog.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/study/imx-linux/SolidRun/linux-fslc/scripts/module-common.lds --build-id  -o drivers/watchdog/softdog.ko drivers/watchdog/softdog.o drivers/watchdog/softdog.mod.o