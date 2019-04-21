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
	{ 0x1ab80ecc, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0x636b3abb, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0xa0435195, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x1db31215, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0xdd9a8e4a, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7eab8b8c, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x70800971, __VMLINUX_SYMBOL_STR(inet6_lookup) },
	{ 0xef025d95, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0x1a4e4a2c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xc549bb4a, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x5a583f68, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x65193a6f, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_defrag_ipv6,nf_defrag_ipv4";


MODULE_INFO(srcversion, "F4965C1E34C80EC49540717");
