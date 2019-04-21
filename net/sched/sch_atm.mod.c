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
	{ 0xaff6d3e2, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0xfeee7a09, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x25110d50, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xa8606fe, __VMLINUX_SYMBOL_STR(tc_classify_compat) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf69fef36, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x7f67869f, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x1599b0a9, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x7ad792c3, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3dbba480, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1de5271b, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3c34b874, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xf046b55a, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0xbde09797, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1daa0889, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xfdfc03fb, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x50fa8794, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D9B72678D80ACC119F2092A");
