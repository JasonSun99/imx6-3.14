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
	{ 0xbd00a109, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x1bc3edc2, __VMLINUX_SYMBOL_STR(usb_stor_sense_invalidCDB) },
	{ 0x5e4a1f5, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0x12af4dbf, __VMLINUX_SYMBOL_STR(scsi_eh_restore_cmnd) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x23599055, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0xbcf36ac2, __VMLINUX_SYMBOL_STR(usb_stor_transparent_scsi_command) },
	{ 0x6239c969, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x4958747, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0x3301ab6a, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x1ce2d0f4, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xff5f1d9e, __VMLINUX_SYMBOL_STR(scsi_eh_prep_cmnd) },
	{ 0xb6fc634f, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04B4p6830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6116d0160dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "03C249061D4862FB9737CB4");
