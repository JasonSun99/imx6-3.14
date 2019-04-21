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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xdd424d97, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1730a2ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x22f1eb58, __VMLINUX_SYMBOL_STR(tveeprom_hauppauge_analog) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x49cf382e, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2f63532, __VMLINUX_SYMBOL_STR(__v4l2_clk_register_fixed) },
	{ 0xbe2e88f1, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcbc67b56, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x16166dcd, __VMLINUX_SYMBOL_STR(rt_mutex_trylock) },
	{ 0xcc8340c4, __VMLINUX_SYMBOL_STR(rt_mutex_unlock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x92881b76, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x23c33db9, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x76a8f781, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1a9b7a6c, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x73a7ea94, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister_fixed) },
	{ 0x30adc4a0, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x8f2e7547, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xeaccf838, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev_board) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x8896f044, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tveeprom";

MODULE_ALIAS("usb:vEB1Ap2750d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2751d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2710d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2820d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2860d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2862d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2863d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2881d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2883d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2868d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2875d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApA313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApA316d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE355d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp004Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp004Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp008Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10ADd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0084d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0096d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10AFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp2870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp2041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6517d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p651Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p651Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0438pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001pF112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p021Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0227d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap50A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pA340d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p024Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p024Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p1605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE755d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap5006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE1CCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p9003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p9004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0258d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CDB0107FC79F16B01300CEA");
