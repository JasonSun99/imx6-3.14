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
	{ 0x5ba7d026, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0xa2db3c7f, __VMLINUX_SYMBOL_STR(nft_reject_policy) },
	{ 0x2a067da0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd78e6f89, __VMLINUX_SYMBOL_STR(security_skb_classify_flow) },
	{ 0xa3f700c0, __VMLINUX_SYMBOL_STR(nf_ct_attach) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd35008c2, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0x872afa71, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0x261b7410, __VMLINUX_SYMBOL_STR(nft_reject_init) },
	{ 0xe40ed955, __VMLINUX_SYMBOL_STR(ip6_route_output) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xc549bb4a, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x490da9d1, __VMLINUX_SYMBOL_STR(nft_reject_dump) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x7345040d, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0x29ea98fc, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0xa249c090, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xfd558a4c, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x1a4e4a2c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xc7d895cd, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_reject,nf_tables";


MODULE_INFO(srcversion, "2E07D6300D646B3695EC32E");
