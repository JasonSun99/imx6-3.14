cmd_net/mac80211/mac80211.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/study/imx-linux/SolidRun/linux-fslc/scripts/module-common.lds --build-id  -o net/mac80211/mac80211.ko net/mac80211/mac80211.o net/mac80211/mac80211.mod.o