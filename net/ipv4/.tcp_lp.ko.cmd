cmd_net/ipv4/tcp_lp.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/study/imx-linux/SolidRun/linux-fslc/scripts/module-common.lds --build-id  -o net/ipv4/tcp_lp.ko net/ipv4/tcp_lp.o net/ipv4/tcp_lp.mod.o