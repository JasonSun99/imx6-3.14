cmd_drivers/virtio/virtio_mmio.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/study/imx-linux/SolidRun/linux-fslc/scripts/module-common.lds --build-id  -o drivers/virtio/virtio_mmio.ko drivers/virtio/virtio_mmio.o drivers/virtio/virtio_mmio.mod.o