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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xcfa25984, __VMLINUX_SYMBOL_STR(saa7146_unregister_extension) },
	{ 0xaf26729c, __VMLINUX_SYMBOL_STR(saa7146_register_extension) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe69fa98d, __VMLINUX_SYMBOL_STR(saa7146_register_device) },
	{ 0x9f390af0, __VMLINUX_SYMBOL_STR(saa7146_vv_init) },
	{ 0x849ff420, __VMLINUX_SYMBOL_STR(saa7146_setgpio) },
	{ 0xcbc67b56, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x9b180044, __VMLINUX_SYMBOL_STR(saa7146_i2c_adapter_prepare) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9fea4390, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x23c33db9, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x53832a5d, __VMLINUX_SYMBOL_STR(saa7146_vv_release) },
	{ 0x58920729, __VMLINUX_SYMBOL_STR(saa7146_unregister_device) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7146,saa7146_vv";

MODULE_ALIAS("pci:v00001131d00007146sv000017C8sd00002401bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000017C8sd00002402bc*sc*i*");

MODULE_INFO(srcversion, "AE5620D84699B798ED29BD5");
