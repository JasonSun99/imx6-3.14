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
	{ 0x768f63f7, __VMLINUX_SYMBOL_STR(pmbus_set_page) },
	{ 0x84b8a588, __VMLINUX_SYMBOL_STR(pmbus_read_byte_data) },
	{ 0xb30c6673, __VMLINUX_SYMBOL_STR(pmbus_check_word_register) },
	{ 0xbf0b8412, __VMLINUX_SYMBOL_STR(pmbus_check_byte_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x64781fe7, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:adp4000");
MODULE_ALIAS("i2c:bmr453");
MODULE_ALIAS("i2c:bmr454");
MODULE_ALIAS("i2c:mdt040");
MODULE_ALIAS("i2c:ncp4200");
MODULE_ALIAS("i2c:ncp4208");
MODULE_ALIAS("i2c:pdt003");
MODULE_ALIAS("i2c:pdt006");
MODULE_ALIAS("i2c:pdt012");
MODULE_ALIAS("i2c:pmbus");
MODULE_ALIAS("i2c:tps40400");
MODULE_ALIAS("i2c:tps40422");
MODULE_ALIAS("i2c:udt020");

MODULE_INFO(srcversion, "F79B788E8C8BBEA4DF8A141");
