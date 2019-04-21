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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6e6587be, __VMLINUX_SYMBOL_STR(xt_hook_unlink) },
	{ 0xdcc6aefd, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x175bb36, __VMLINUX_SYMBOL_STR(xt_hook_link) },
	{ 0x26ec25db, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x15c2b6df, __VMLINUX_SYMBOL_STR(ip6_route_me_harder) },
	{ 0xcb23a396, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x443df3af, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0xea0c7b22, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7a09959f, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tables";


MODULE_INFO(srcversion, "DB76793159E7032AF40C0E4");
