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
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x5528cb71, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0x32e8f353, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb61a0c3b, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x26a91c95, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v0CF3p3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE03Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pE019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p311Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE04Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE04Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE05Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE095d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C5p1330d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp300Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0219d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p021Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0227d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p3004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p311Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p311Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p311Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p3121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pE003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pE004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pE005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3362d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3375d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3393d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3395d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3432d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3472d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3474d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE02Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE03Cd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EE5C50B8E7D47276B9930D0");
