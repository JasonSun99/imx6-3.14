#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc2ca9c8b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5e76109e, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0xa1856f9f, __VMLINUX_SYMBOL_STR(em28xx_read_reg) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd5136bc1, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf2109e8b, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0x614dd5a, __VMLINUX_SYMBOL_STR(v4l2_video_std_frame_period) },
	{ 0x3e710433, __VMLINUX_SYMBOL_STR(em28xx_write_regs) },
	{ 0xa0ace78c, __VMLINUX_SYMBOL_STR(v4l2_ctrl_notify) },
	{ 0x6daa8597, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0xd8c30bc1, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x8309d10a, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x46b33c55, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0xbf360c82, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x78860564, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x75fb64f6, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xc292b802, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xb574e78e, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0x23560840, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc37c72b2, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x7c5b6f2, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xa03b44a7, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5c0ccea2, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x6eb138d8, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x4c40e9ba, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5f4f0cd4, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xcf105480, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x5ab2090c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb0d08137, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xe6c5e8fd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x80b358bc, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x7876b163, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xa1107f97, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x5e986c56, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xff6aceef, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x18f214b1, __VMLINUX_SYMBOL_STR(em28xx_write_reg_bits) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x362d891e, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x8cd912d2, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x199473b4, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0xe316071f, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x70365fe6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x1abc19be, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x68257b41, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xb3efdbaa, __VMLINUX_SYMBOL_STR(em28xx_audio_setup) },
	{ 0x73a7ea94, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister_fixed) },
	{ 0x96d56915, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x3c7d6da8, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x47af8295, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0xa1cb18a9, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x63697bf6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x1fa7ef82, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x5fb575d4, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x54a1b78a, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0x232bd5f1, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0x794a55f2, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x21f21215, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xf90a3b08, __VMLINUX_SYMBOL_STR(em28xx_boards) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x2cc1efc7, __VMLINUX_SYMBOL_STR(em28xx_init_camera) },
	{ 0xdd6c4475, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx,videobuf2-vmalloc";


MODULE_INFO(srcversion, "71F555BB93BEEEE44001426");
