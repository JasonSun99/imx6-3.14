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
	{ 0xf0e6ca77, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5b72009f, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20df2681, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xb66cb0af, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x61420692, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf004ff4b, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xf23b45c8, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0x1e700450, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x353ea8ef, __VMLINUX_SYMBOL_STR(w1_read_block) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8e5c580a, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0xeb9e7cdd, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0x5047ad2e, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x84bee74b, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x159013e7, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "709F3FEBDADB9CC2CC64D22");
