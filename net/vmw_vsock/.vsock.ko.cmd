cmd_net/vmw_vsock/vsock.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/study/imx-linux/SolidRun/linux-fslc/scripts/module-common.lds --build-id  -o net/vmw_vsock/vsock.ko net/vmw_vsock/vsock.o net/vmw_vsock/vsock.mod.o