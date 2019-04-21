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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb71b5265, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x409cf9dd, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x3a65ed9f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xd7f0174e, __VMLINUX_SYMBOL_STR(skb_zerocopy) },
	{ 0xa9d72dce, __VMLINUX_SYMBOL_STR(nf_reinject) },
	{ 0x8a06f177, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0x46850cca, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0xacc5e45, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x2e998ca7, __VMLINUX_SYMBOL_STR(skb_zerocopy_headlen) },
	{ 0xcd7d3739, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0xf4bf3eaf, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdcc6aefd, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1daa0889, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xd7ea7094, __VMLINUX_SYMBOL_STR(nf_unregister_queue_handler) },
	{ 0x70a94d2a, __VMLINUX_SYMBOL_STR(nfnetlink_unicast) },
	{ 0x538bcbe4, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0xfec2bcd0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x5ae18634, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x164d3c9a, __VMLINUX_SYMBOL_STR(__nla_reserve) },
	{ 0x1b48fb8a, __VMLINUX_SYMBOL_STR(nf_register_queue_handler) },
	{ 0xc43eda34, __VMLINUX_SYMBOL_STR(nf_queue_entry_get_refs) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0c9c5e0, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf7f8e721, __VMLINUX_SYMBOL_STR(nfnetlink_alloc_skb) },
	{ 0x26ec25db, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xca30dea4, __VMLINUX_SYMBOL_STR(nf_queue_entry_release_refs) },
	{ 0x91db0b00, __VMLINUX_SYMBOL_STR(nfq_ct_hook) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb3b3c4f4, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xa6bc24e9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x6bdcc5e0, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbb4e6169, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xdb5b4908, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x854ac18a, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4fc77ca4, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x7b657827, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "21CAD95851F153BFFC99920");
