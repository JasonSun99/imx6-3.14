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
	{ 0x554408fa, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x95c11c30, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x3582fabd, __VMLINUX_SYMBOL_STR(lis3lv02d_init_device) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1c9bc26f, __VMLINUX_SYMBOL_STR(lis3lv02d_init_dt) },
	{ 0xd7fef2ed, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xa796677c, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0xeec7c36a, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0xbdbf45f1, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x92d8899f, __VMLINUX_SYMBOL_STR(lis3lv02d_remove_fs) },
	{ 0xb252d9c, __VMLINUX_SYMBOL_STR(lis3lv02d_joystick_disable) },
	{ 0xbd8a6b81, __VMLINUX_SYMBOL_STR(lis3_dev) },
	{ 0x1296314b, __VMLINUX_SYMBOL_STR(lis3lv02d_poweroff) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x53eb03fd, __VMLINUX_SYMBOL_STR(lis3lv02d_poweron) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lis3lv02d";

MODULE_ALIAS("of:N*T*Cst,lis302dl-spi*");

MODULE_INFO(srcversion, "D9997ACDCD2F86807B6D8A0");
