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
	{ 0x872afa71, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd35008c2, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0x3d49dab7, __VMLINUX_SYMBOL_STR(nft_validate_input_register) },
	{ 0xa273f26d, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1daa0889, __VMLINUX_SYMBOL_STR(nla_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_nat";


MODULE_INFO(srcversion, "5014FD586B85C3A72C8F4C7");