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
	{ 0xafad493b, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x48832655, __VMLINUX_SYMBOL_STR(pmbus_do_remove) },
	{ 0xe077a5c6, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd7c74004, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xef4c579a, __VMLINUX_SYMBOL_STR(pmbus_write_word_data) },
	{ 0x35a811d, __VMLINUX_SYMBOL_STR(pmbus_clear_cache) },
	{ 0x2777d360, __VMLINUX_SYMBOL_STR(pmbus_read_word_data) },
	{ 0x84b8a588, __VMLINUX_SYMBOL_STR(pmbus_read_byte_data) },
	{ 0xeca421ee, __VMLINUX_SYMBOL_STR(pmbus_write_byte) },
	{ 0x2040c13d, __VMLINUX_SYMBOL_STR(pmbus_get_driver_info) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x64781fe7, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0xfebf6c6d, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x76620642, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe8d9f4e7, __VMLINUX_SYMBOL_STR(i2c_smbus_read_block_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:bmr450");
MODULE_ALIAS("i2c:bmr451");
MODULE_ALIAS("i2c:bmr462");
MODULE_ALIAS("i2c:bmr463");
MODULE_ALIAS("i2c:bmr464");
MODULE_ALIAS("i2c:zl2004");
MODULE_ALIAS("i2c:zl2005");
MODULE_ALIAS("i2c:zl2006");
MODULE_ALIAS("i2c:zl2008");
MODULE_ALIAS("i2c:zl2105");
MODULE_ALIAS("i2c:zl2106");
MODULE_ALIAS("i2c:zl6100");
MODULE_ALIAS("i2c:zl6105");
MODULE_ALIAS("i2c:zl9101");
MODULE_ALIAS("i2c:zl9117");

MODULE_INFO(srcversion, "79DFEB67234D653B75D43AA");
