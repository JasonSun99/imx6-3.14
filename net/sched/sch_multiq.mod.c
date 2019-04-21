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
	{ 0xb0c9ca3c, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf046b55a, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0x7ad792c3, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x3dbba480, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0xbde09797, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1daa0889, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x1599b0a9, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xfe07fb2e, __VMLINUX_SYMBOL_STR(qdisc_tree_decrease_qlen) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x7f67869f, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xfdfc03fb, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x50fa8794, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "93AD51560A9ECE3D22850A8");
