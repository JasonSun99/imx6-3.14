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
	{ 0xe077a5c6, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd7c74004, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xe242573d, __VMLINUX_SYMBOL_STR(lp55xx_register_sysfs) },
	{ 0xe250a544, __VMLINUX_SYMBOL_STR(lp55xx_register_leds) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb36219f8, __VMLINUX_SYMBOL_STR(lp55xx_of_populate_pdata) },
	{ 0x5ec17871, __VMLINUX_SYMBOL_STR(lp55xx_init_device) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc72c752e, __VMLINUX_SYMBOL_STR(lp55xx_is_extclk_used) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x25cb7da5, __VMLINUX_SYMBOL_STR(lp55xx_update_bits) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x7b3bd50b, __VMLINUX_SYMBOL_STR(lp55xx_read) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x12328e1c, __VMLINUX_SYMBOL_STR(lp55xx_deinit_device) },
	{ 0x38c5d4d9, __VMLINUX_SYMBOL_STR(lp55xx_unregister_leds) },
	{ 0x561256e4, __VMLINUX_SYMBOL_STR(lp55xx_unregister_sysfs) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x64604411, __VMLINUX_SYMBOL_STR(lp55xx_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=leds-lp55xx-common";

MODULE_ALIAS("of:N*T*Cnational,lp5521*");
MODULE_ALIAS("i2c:lp5521");

MODULE_INFO(srcversion, "A549B38F4B445FA90163201");
