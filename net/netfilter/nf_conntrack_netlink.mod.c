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
	{ 0x209a1a5e, __VMLINUX_SYMBOL_STR(nf_ct_tcp_seqadj_set) },
	{ 0xdcc6aefd, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x91db0b00, __VMLINUX_SYMBOL_STR(nfq_ct_hook) },
	{ 0xf4bf3eaf, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0x26ec25db, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x6bdcc5e0, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2447533c, __VMLINUX_SYMBOL_STR(ktime_get_real) },
	{ 0xf3ee20f2, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0x179c4dba, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0x4a7b75b6, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0xfc94d40a, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x6018f02c, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xd8cad65a, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0x3a2de11b, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x468d07fd, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0xed84cc51, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0x384f275c, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0x1b6afb92, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0x36e0e24, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0xf8c7fe0b, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0x43567411, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0xd12e3a29, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0xc5107eda, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x9f3b6cc5, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0x24ed03d0, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xe271e8ce, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4e4d4c12, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0x5f98060c, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0xcf24002a, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x53a044d3, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0x78cddb4e, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x3308c153, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9a8b7a1a, __VMLINUX_SYMBOL_STR(nf_conntrack_flush_report) },
	{ 0xcc72ba98, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xaa78d571, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xbba5631b, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb23f3373, __VMLINUX_SYMBOL_STR(nf_conntrack_lock) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4fc77ca4, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0xaa879b20, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x6d70105, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x230a09a4, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x1daa0889, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6b8b0aa2, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nfnetlink";


MODULE_INFO(srcversion, "845241465A0F28DDB2583A6");
