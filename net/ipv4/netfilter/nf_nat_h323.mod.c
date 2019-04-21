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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x55305ff8, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x159fc306, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0x47759e7b, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0xb421cfae, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0xe1b8a801, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0xc9106dc1, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0xec60f310, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0xa7dc794f, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0x45e739bf, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0x24b28d98, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
	{ 0xa3b9c5b1, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x9eb48c24, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x9e1de51b, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0xc5107eda, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x1a4e4a2c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x1adb475e, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xc110252b, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x467a4649, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa273f26d, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";


MODULE_INFO(srcversion, "B50D0B221589CC8C4479864");
