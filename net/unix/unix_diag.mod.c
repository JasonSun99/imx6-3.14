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
	{ 0x1d77b0f8, __VMLINUX_SYMBOL_STR(unix_socket_table) },
	{ 0x7c6a49ce, __VMLINUX_SYMBOL_STR(unix_table_lock) },
	{ 0x1dcde4d7, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0x68396980, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0x22bbd80b, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1ddc88df, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0x1daa0889, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x6ccd96cf, __VMLINUX_SYMBOL_STR(unix_peer_get) },
	{ 0xc502e7fe, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xbba5631b, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xbe067155, __VMLINUX_SYMBOL_STR(unix_inq_len) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x506691f1, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x39ff9dc7, __VMLINUX_SYMBOL_STR(unix_outq_len) },
	{ 0xd14bc4d9, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1f9e71a6, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x4fc77ca4, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x6b8b0aa2, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "789D2C660334C79E3CB5367");
