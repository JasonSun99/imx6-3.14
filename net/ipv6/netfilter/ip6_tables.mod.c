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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x52d8eb55, __VMLINUX_SYMBOL_STR(xt_unregister_table) },
	{ 0x24c8e482, __VMLINUX_SYMBOL_STR(xt_copy_counters_from_user) },
	{ 0x40728a63, __VMLINUX_SYMBOL_STR(xt_find_revision) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xadf27ed5, __VMLINUX_SYMBOL_STR(xt_check_target) },
	{ 0x636b3abb, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0xd87ae60d, __VMLINUX_SYMBOL_STR(xt_check_entry_offsets) },
	{ 0x7b10539, __VMLINUX_SYMBOL_STR(xt_proto_fini) },
	{ 0xaed111eb, __VMLINUX_SYMBOL_STR(xt_table_unlock) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x641ddbf0, __VMLINUX_SYMBOL_STR(xt_find_table_lock) },
	{ 0x65193a6f, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x237edacc, __VMLINUX_SYMBOL_STR(xt_replace_table) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x690ff0ad, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0x4255ff17, __VMLINUX_SYMBOL_STR(xt_proto_init) },
	{ 0xdd5b9538, __VMLINUX_SYMBOL_STR(xt_register_table) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdcc6aefd, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{        0, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xc5e43ab8, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x807d2b2c, __VMLINUX_SYMBOL_STR(xt_recseq) },
	{ 0xbfc0d13, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xfec2bcd0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xbb5643d, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x7bfdd82b, __VMLINUX_SYMBOL_STR(xt_request_find_match) },
	{ 0x26ec25db, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x1ab80ecc, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x5fa94836, __VMLINUX_SYMBOL_STR(xt_request_find_target) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4391dba1, __VMLINUX_SYMBOL_STR(xt_check_match) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x10c8d7cb, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x8c473b7, __VMLINUX_SYMBOL_STR(xt_alloc_table_info) },
	{ 0x1a4e4a2c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xb28f5ef1, __VMLINUX_SYMBOL_STR(xt_free_table_info) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4522948B77600D806EAB775");
