cmd_net/mac802154/mac802154.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/study/imx-linux/SolidRun/linux-fslc/scripts/module-common.lds --build-id  -o net/mac802154/mac802154.ko net/mac802154/mac802154.o net/mac802154/mac802154.mod.o