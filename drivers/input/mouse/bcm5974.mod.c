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
	{ 0x909bef8, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x88625f54, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x44f6254a, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x94c6b866, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x3e93cf34, __VMLINUX_SYMBOL_STR(input_mt_assign_slots) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x5532fb20, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7b6c5218, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x324356d6, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8896f044, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8557ee5e, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x630a5ebc, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5b130c00, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x92881b76, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x75e777ab, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05ACp0223d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0224d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0225d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0230d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0231d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0232d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0236d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0237d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0238d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp023Fd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0240d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0241d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0242d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0243d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0244d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0245d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0246d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0247d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0249d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Ad*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Bd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Cd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Dd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Ed*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0252d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0253d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0254d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0262d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0263d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0264d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0259d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp025Ad*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp025Bd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0290d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0291d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0292d*dc*dsc*dp*ic03isc*ip02in*");

MODULE_INFO(srcversion, "C9366815048AFF67A75FF92");
