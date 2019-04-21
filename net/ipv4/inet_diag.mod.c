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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1dcde4d7, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x409cf9dd, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x68396980, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x22bbd80b, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1ddc88df, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x1daa0889, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbba5631b, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xe1392603, __VMLINUX_SYMBOL_STR(sock_diag_unregister_inet_compat) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x70800971, __VMLINUX_SYMBOL_STR(inet6_lookup) },
	{ 0x5a583f68, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x506691f1, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0xd14bc4d9, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa0435195, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x1f9e71a6, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x6596167a, __VMLINUX_SYMBOL_STR(sock_diag_register_inet_compat) },
	{ 0x4fc77ca4, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xcecbd3d5, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0x6b8b0aa2, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x1db31215, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "96814BEE02376888C3D9B6A");
