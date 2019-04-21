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
	{ 0x1730a2ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x6692c09a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x35c913da, __VMLINUX_SYMBOL_STR(__max730x_probe) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xfe6f2261, __VMLINUX_SYMBOL_STR(__max730x_remove) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gpio-max730x";

MODULE_ALIAS("i2c:max7300");

MODULE_INFO(srcversion, "773BCB8CA5FDE8756DB8B47");
