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
	{ 0xa2db3c7f, __VMLINUX_SYMBOL_STR(nft_reject_policy) },
	{ 0x490da9d1, __VMLINUX_SYMBOL_STR(nft_reject_dump) },
	{ 0x261b7410, __VMLINUX_SYMBOL_STR(nft_reject_init) },
	{ 0x872afa71, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0xd35008c2, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xde01cab1, __VMLINUX_SYMBOL_STR(nft_reject_ipv4_eval) },
	{ 0x85a5e6a7, __VMLINUX_SYMBOL_STR(nft_reject_ipv6_eval) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_reject,nf_tables,nft_reject_ipv4,nft_reject_ipv6";


MODULE_INFO(srcversion, "22C16230789C97057CB79D1");
