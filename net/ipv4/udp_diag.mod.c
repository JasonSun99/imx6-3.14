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
	{ 0xc0780a5f, __VMLINUX_SYMBOL_STR(inet_diag_bc_sk) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xa0786de, __VMLINUX_SYMBOL_STR(udplite_table) },
	{ 0x598cd828, __VMLINUX_SYMBOL_STR(udp_table) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7404450b, __VMLINUX_SYMBOL_STR(__udp4_lib_lookup) },
	{ 0xbba5631b, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xce424fc8, __VMLINUX_SYMBOL_STR(inet_sk_diag_fill) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xc502e7fe, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x506691f1, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x2d6fad93, __VMLINUX_SYMBOL_STR(__udp6_lib_lookup) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";


MODULE_INFO(srcversion, "386AAE64C8F318EE63EBD35");