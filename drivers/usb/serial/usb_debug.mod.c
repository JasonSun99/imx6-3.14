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
	{ 0x341c970b, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x8d4c2c9b, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xfcdc984b, __VMLINUX_SYMBOL_STR(usb_serial_generic_write) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xbfcb1a3d, __VMLINUX_SYMBOL_STR(usb_serial_handle_break) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xc244e66e, __VMLINUX_SYMBOL_STR(usb_serial_generic_process_read_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0525p127Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9C45B06EC87E48CC15C8FE6");
