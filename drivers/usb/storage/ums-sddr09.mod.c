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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xcf670660, __VMLINUX_SYMBOL_STR(usb_stor_set_xfer_buf) },
	{ 0x84488f96, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0xd01bb05a, __VMLINUX_SYMBOL_STR(usb_stor_access_xfer_buf) },
	{ 0xbd00a109, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0xe8fc8eac, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5e4a1f5, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x23599055, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x4ebeb425, __VMLINUX_SYMBOL_STR(fill_inquiry_response) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6239c969, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x4958747, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0x57d97c7b, __VMLINUX_SYMBOL_STR(usb_stor_ctrl_transfer) },
	{ 0x3301ab6a, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x245b102a, __VMLINUX_SYMBOL_STR(usb_stor_CB_reset) },
	{ 0x1ce2d0f4, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb6fc634f, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd8c00b26, __VMLINUX_SYMBOL_STR(usb_stor_CB_transport) },
	{ 0x91619302, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_sg) },
	{ 0xe2b2ce76, __VMLINUX_SYMBOL_STR(usb_stor_bulk_srb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0436p0005d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0005d020[0-8]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0005d01*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp0105d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AFp0006d0100dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E6DED1B5629DB54CD41975E");
