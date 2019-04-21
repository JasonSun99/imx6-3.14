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
	{ 0xace03c9c, __VMLINUX_SYMBOL_STR(inet_diag_dump_icsk) },
	{ 0xbc7f4dd3, __VMLINUX_SYMBOL_STR(dccp_hashinfo) },
	{ 0x6626e0db, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x83bb0df9, __VMLINUX_SYMBOL_STR(inet_diag_dump_one_icsk) },
	{ 0x7f0573fa, __VMLINUX_SYMBOL_STR(inet_diag_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag,dccp";


MODULE_INFO(srcversion, "7F6BB6D6F594384409A8C1D");
