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
	{ 0xcf670660, __VMLINUX_SYMBOL_STR(usb_stor_set_xfer_buf) },
	{ 0x84488f96, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0xd01bb05a, __VMLINUX_SYMBOL_STR(usb_stor_access_xfer_buf) },
	{ 0xbd00a109, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5e4a1f5, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x23599055, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6239c969, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x4958747, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0x3301ab6a, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x1ce2d0f4, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x91619302, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_sg) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xe2b2ce76, __VMLINUX_SYMBOL_STR(usb_stor_bulk_srb) },
	{ 0x32e8f353, __VMLINUX_SYMBOL_STR(release_firmware) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0CF2p6250d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "99E808B6703A268D08139AE");
