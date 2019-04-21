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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x7b6c5218, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8896f044, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x8557ee5e, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x630a5ebc, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x92881b76, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x75e777ab, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5b130c00, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x5532fb20, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05ACp020Ed*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp020Fd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp030Ad*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp030Bd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0214d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0215d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0216d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0217d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0218d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0219d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp021Ad*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp021Bd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp021Cd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0229d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp022Ad*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp022Bd*dc*dsc*dp*ic03isc*ip02in*");

MODULE_INFO(srcversion, "03528562C84486B8C35E227");
