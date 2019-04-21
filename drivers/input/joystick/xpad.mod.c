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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5f14548, __VMLINUX_SYMBOL_STR(input_ff_destroy) },
	{ 0x7b6c5218, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x1c11c0f6, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x8557ee5e, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xf05ad530, __VMLINUX_SYMBOL_STR(input_ff_create_memless) },
	{ 0x5d40d24c, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x8896f044, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x630a5ebc, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x92881b76, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x75e777ab, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x5532fb20, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5b130c00, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5f8a2a28, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ff-memless";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic58isc42ip00in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v046Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v046Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0738p4540d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v12ABp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v12ABp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1430p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1430p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v146Bp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v146Bp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1BADp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1BADp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1689p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1689p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc5Dip81in*");

MODULE_INFO(srcversion, "863501A58F5D8F05162423E");
