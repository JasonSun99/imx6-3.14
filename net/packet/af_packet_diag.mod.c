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
	{ 0x1dcde4d7, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0x409cf9dd, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x68396980, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xff46bcf6, __VMLINUX_SYMBOL_STR(sock_diag_put_filterinfo) },
	{ 0x22bbd80b, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0xefe108c1, __VMLINUX_SYMBOL_STR(fanout_mutex) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1ddc88df, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0x1daa0889, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc0b25b00, __VMLINUX_SYMBOL_STR(nla_reserve_nohdr) },
	{ 0xd14bc4d9, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x4fc77ca4, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xcecbd3d5, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0x6b8b0aa2, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x3d237e3d, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "60244C3BF66A7AD1F64A701");
