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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3062bc5, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf2109e8b, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xd8c30bc1, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x8309d10a, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x23560840, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcbc67b56, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x7c5b6f2, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5c0ccea2, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x4c40e9ba, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x5ab2090c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb0d08137, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xe6c5e8fd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x92881b76, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x2968102b, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0x86e0c1a8, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x23c33db9, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x76a8f781, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x68257b41, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1a9b7a6c, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa0b04675, __VMLINUX_SYMBOL_STR(vmalloc_32) },
	{ 0x3c7d6da8, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe254e39c, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x8896f044, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x21f21215, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0A6Fp0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0571p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2D00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2D01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4450d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4550d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D14d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D20d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D21d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D23d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D25d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D26d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D28d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D34d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D35d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D36d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D37d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D38d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0768p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07F8p9104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p010Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0214d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0419d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2400p4200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7011FEF37C520D5A6677B33");
