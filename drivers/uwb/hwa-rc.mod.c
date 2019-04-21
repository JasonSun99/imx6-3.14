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
	{ 0xf6b96c51, __VMLINUX_SYMBOL_STR(uwb_rc_reset_all) },
	{ 0x4e77eb5f, __VMLINUX_SYMBOL_STR(uwb_rc_neh_error) },
	{ 0xadfb79a0, __VMLINUX_SYMBOL_STR(uwb_rc_neh_grok) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1db7c3cf, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x1562a89c, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3e9c0018, __VMLINUX_SYMBOL_STR(uwb_rc_add) },
	{ 0x103e54cd, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x76a8f781, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xcd7d7d6d, __VMLINUX_SYMBOL_STR(uwb_rc_alloc) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xaa1423cc, __VMLINUX_SYMBOL_STR(uwb_rc_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1a9b7a6c, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x78302733, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0xa93b0b16, __VMLINUX_SYMBOL_STR(uwb_rc_rm) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe6304355, __VMLINUX_SYMBOL_STR(uwb_rc_pre_reset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4f076b5d, __VMLINUX_SYMBOL_STR(uwb_rc_post_reset) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uwb";

MODULE_ALIAS("usb:v07D1p3D02d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v8086p0C3Bd*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v13DCp5310d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v13DCp5611d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip02in*");

MODULE_INFO(srcversion, "47D3F2910EA7D75C24CC4A5");
