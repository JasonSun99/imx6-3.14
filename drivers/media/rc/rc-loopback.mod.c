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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xa1df927a, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x24423106, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x3b0bb73d, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x514c2133, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0xe5a8ff6a, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0xeab61090, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3645D1F769DE76680CBD556");
