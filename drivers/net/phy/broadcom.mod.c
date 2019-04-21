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
	{ 0xa9773369, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x9f318e91, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0x42df5026, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0xde4cf3b9, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa2698af5, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe460621e, __VMLINUX_SYMBOL_STR(mdiobus_read) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:0000000000100000011000000111????");
MODULE_ALIAS("mdio:0000000000100000011000001110????");
MODULE_ALIAS("mdio:0000000000100000011000001100????");
MODULE_ALIAS("mdio:0000000000100000011000001011????");
MODULE_ALIAS("mdio:0000000101000011101111001010????");
MODULE_ALIAS("mdio:0000000101000011101111001011????");
MODULE_ALIAS("mdio:0000000101000011101111010110????");
MODULE_ALIAS("mdio:0000000101000011101111010111????");
MODULE_ALIAS("mdio:0000001101100010010111011001????");
MODULE_ALIAS("mdio:0000000101000011101111000111????");
MODULE_ALIAS("mdio:0000000101000011101111000011????");

MODULE_INFO(srcversion, "611ACC4D3EC76EC892BD5E4");
