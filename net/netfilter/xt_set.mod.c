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
	{ 0xbfc0d13, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x1ab80ecc, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0xc5e43ab8, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x636b3abb, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0x990c3792, __VMLINUX_SYMBOL_STR(ip_set_test) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x538dd8ee, __VMLINUX_SYMBOL_STR(ip_set_nfnl_get_byindex) },
	{ 0x1f685788, __VMLINUX_SYMBOL_STR(ip_set_nfnl_put) },
	{ 0x936bfb3f, __VMLINUX_SYMBOL_STR(ip_set_del) },
	{ 0x80f5b18f, __VMLINUX_SYMBOL_STR(ip_set_add) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_set";


MODULE_INFO(srcversion, "7285E890B1F92818CBD54A2");
