cmd_drivers/gpio/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o drivers/gpio/built-in.o drivers/gpio/devres.o drivers/gpio/gpiolib.o drivers/gpio/gpiolib-of.o drivers/gpio/gpio-generic.o drivers/gpio/gpio-mxc.o drivers/gpio/gpio-pca953x.o drivers/gpio/gpio-sx150x.o 
