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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5532fb20, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x26a91c95, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x75e777ab, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x7b6c5218, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x8557ee5e, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x92881b76, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8896f044, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x630a5ebc, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5b130c00, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x909bef8, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x88625f54, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0EEFp0001d*dc*dsc*dp*ic03isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0002d*dc*dsc*dp*ic03isc*ip*in*");
MODULE_ALIAS("usb:v3823p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3823p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0123p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0596p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0403pF9E9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16E3pF9E9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p5678d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0637p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AFAp03E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v595Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6615p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1391p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DFCp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p007Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p00CEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F92p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AC7p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14C8p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0664p0309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0664p0306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10F0p2002d*dc*dsc*dp*ic0Aisc00ip00in*");
MODULE_ALIAS("usb:v1870p0001d*dc*dsc*dp*ic0Aisc00ip00in*");
MODULE_ALIAS("usb:v04E7p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7374p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AACA378C0181505EF05BD13");
