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
	{ 0x42df5026, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0xde4cf3b9, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0x6ae66a4a, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x58ab4882, __VMLINUX_SYMBOL_STR(genphy_suspend) },
	{ 0xa9773369, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x9f318e91, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa2698af5, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe460621e, __VMLINUX_SYMBOL_STR(mdiobus_read) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:0000000000000110000111000101????");
MODULE_ALIAS("mdio:00011100000001000000000000010001");

MODULE_INFO(srcversion, "03D5096E489916C0BEA89CD");
