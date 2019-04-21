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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x56579ea1, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xee72a0be, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xb8fe2510, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0xa405fd04, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x1f84db5, __VMLINUX_SYMBOL_STR(nf_conntrack_set_hashsize) },
	{ 0x547d32e3, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0x9539dcc5, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp4) },
	{ 0xfc612eeb, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0x690ff0ad, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xca78e404, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0xdcc6aefd, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x22c0f036, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x41861da6, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9ff82838, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0x1daa0889, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8d628107, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0x493f7dc6, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0x30f98e13, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xcb0c5d50, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0xbb5643d, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0xe32e33a5, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0x26ec25db, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x31dc1990, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x762687f3, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x8ec6d9c5, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0xd402c72f, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp4) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x10c8d7cb, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x1a4e4a2c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x46785c5c, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0xaa78d571, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x230a09a4, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";


MODULE_INFO(srcversion, "7D559D92FCA8D118C4418F2");
