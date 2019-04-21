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
	{ 0xb6f9510e, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0x30f98e13, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x170e490c, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x762687f3, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x90298227, __VMLINUX_SYMBOL_STR(synproxy_init_timestamp_cookie) },
	{ 0x883c2740, __VMLINUX_SYMBOL_STR(__cookie_v6_init_sequence) },
	{ 0xc7d895cd, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0xef7db50c, __VMLINUX_SYMBOL_STR(synproxy_net_id) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xeb6016bc, __VMLINUX_SYMBOL_STR(synproxy_parse_options) },
	{ 0x64ba90ac, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_init) },
	{ 0x1a4e4a2c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x7a26c089, __VMLINUX_SYMBOL_STR(synproxy_tstamp_adjust) },
	{ 0xc549bb4a, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x11a006b5, __VMLINUX_SYMBOL_STR(synproxy_check_timestamp_cookie) },
	{ 0x8841d39b, __VMLINUX_SYMBOL_STR(synproxy_build_options) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb42e336a, __VMLINUX_SYMBOL_STR(synproxy_options_size) },
	{ 0x9973add9, __VMLINUX_SYMBOL_STR(__cookie_v6_check) },
	{ 0x7345040d, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0xfd558a4c, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2a067da0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xe40ed955, __VMLINUX_SYMBOL_STR(ip6_route_output) },
	{ 0xd78e6f89, __VMLINUX_SYMBOL_STR(security_skb_classify_flow) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_synproxy_core,nf_conntrack";


MODULE_INFO(srcversion, "5390CE0553A9068310EFDE6");
