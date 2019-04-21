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
	{ 0x48832655, __VMLINUX_SYMBOL_STR(pmbus_do_remove) },
	{ 0xe077a5c6, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd7c74004, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x64781fe7, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x768f63f7, __VMLINUX_SYMBOL_STR(pmbus_set_page) },
	{ 0x2777d360, __VMLINUX_SYMBOL_STR(pmbus_read_word_data) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xef4c579a, __VMLINUX_SYMBOL_STR(pmbus_write_word_data) },
	{ 0x2040c13d, __VMLINUX_SYMBOL_STR(pmbus_get_driver_info) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:max34440");
MODULE_ALIAS("i2c:max34441");
MODULE_ALIAS("i2c:max34446");
MODULE_ALIAS("i2c:max34460");
MODULE_ALIAS("i2c:max34461");

MODULE_INFO(srcversion, "4D4D0AE5862770F7589873C");
