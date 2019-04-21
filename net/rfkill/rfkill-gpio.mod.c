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
	{ 0xee1068d0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xcbaae858, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x4cabed9, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0xcbfcab4d, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0xe4c4b28f, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x88c4cfbf, __VMLINUX_SYMBOL_STR(devm_gpiod_get_index) },
	{ 0xee914bb9, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7f9f2867, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xbc219a96, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x8f902a2c, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill";


MODULE_INFO(srcversion, "83455FF08AC6EBAF288C1E3");
