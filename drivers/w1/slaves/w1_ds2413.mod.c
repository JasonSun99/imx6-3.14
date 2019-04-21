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
	{ 0x159013e7, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0x5047ad2e, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x1e700450, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbc1e4e46, __VMLINUX_SYMBOL_STR(w1_reset_resume_command) },
	{ 0x64d1c081, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0xf23b45c8, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0xf0e6ca77, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "E0996193DB88B664F3DF520");
