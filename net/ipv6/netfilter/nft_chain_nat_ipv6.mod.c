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
	{ 0x41e2314c, __VMLINUX_SYMBOL_STR(nft_unregister_chain_type) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x850fceac, __VMLINUX_SYMBOL_STR(nft_register_chain_type) },
	{ 0x2a067da0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x15c2b6df, __VMLINUX_SYMBOL_STR(ip6_route_me_harder) },
	{ 0xc58a0f16, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd8396396, __VMLINUX_SYMBOL_STR(nf_nat_icmpv6_reply_translation) },
	{ 0xd028de9f, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x9532a6d2, __VMLINUX_SYMBOL_STR(nft_do_chain) },
	{ 0x65193a6f, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x681c70a5, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0xc549bb4a, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xfc94d40a, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_nat,nf_nat_ipv6,nf_conntrack";


MODULE_INFO(srcversion, "5DE59E3C4CD3AD96B911DFF");
