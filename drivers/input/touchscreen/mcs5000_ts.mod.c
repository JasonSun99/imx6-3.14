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
	{ 0x5532fb20, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xf1d27356, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8557ee5e, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7b6c5218, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x5b130c00, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x630a5ebc, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x75e777ab, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6692c09a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:mcs5000_ts");

MODULE_INFO(srcversion, "D00CF5B903B66C865F1C70A");
