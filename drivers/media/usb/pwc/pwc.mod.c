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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd5136bc1, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x7d822ee2, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0xd734e71c, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x44dbadf2, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xc7c260dd, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x8309d10a, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x46b33c55, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xbf360c82, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x78860564, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x75fb64f6, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xc292b802, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x23560840, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7c5b6f2, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xa03b44a7, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x5532fb20, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xee5bd21f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5c0ccea2, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x6eb138d8, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0xa6ff7d88, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5f4f0cd4, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xcf105480, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x5ab2090c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb0d08137, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xe6c5e8fd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x7876b163, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xa1107f97, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x5e986c56, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x19fec4e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0x92881b76, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xe316071f, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x1abc19be, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x68257b41, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x7b6c5218, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x8557ee5e, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x495426ee, __VMLINUX_SYMBOL_STR(v4l2_ctrl_get_name) },
	{ 0xe1df198b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfd81330a, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xa1cb18a9, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x75e777ab, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x63697bf6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1fa7ef82, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x16e02202, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8896f044, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x794a55f2, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xd862d5bc, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x21f21215, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x630a5ebc, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xdd6c4475, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-vmalloc";

MODULE_ALIAS("usb:v0471p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CCp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1910d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1900d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "47EB3AA0714D2796E36FAF0");
