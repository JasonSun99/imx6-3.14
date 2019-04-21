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
	{ 0x6626e0db, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0x7f0573fa, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0xace03c9c, __VMLINUX_SYMBOL_STR(inet_diag_dump_icsk) },
	{ 0x83bb0df9, __VMLINUX_SYMBOL_STR(inet_diag_dump_one_icsk) },
	{ 0x7eab8b8c, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1e857bf4, __VMLINUX_SYMBOL_STR(tcp_get_info) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";


MODULE_INFO(srcversion, "4FE17A47EA181DB5CD7B966");