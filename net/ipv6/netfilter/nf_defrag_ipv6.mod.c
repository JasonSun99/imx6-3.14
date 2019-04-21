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
	{ 0x86290a8e, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0xd74289f9, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x28b6a6b8, __VMLINUX_SYMBOL_STR(ip6_expire_frag_queue) },
	{ 0x7740a914, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xfd99623a, __VMLINUX_SYMBOL_STR(ip_frag_ecn_table) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x16053804, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe7a664c4, __VMLINUX_SYMBOL_STR(nf_hooks) },
	{ 0xe27a47c3, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0xe4fddefd, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0xb2c5fa92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xdcc6aefd, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0x3eb0e017, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x766101b6, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x5ef0cb31, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x30f98e13, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xbbccedb7, __VMLINUX_SYMBOL_STR(inet_frag_evictor) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xc62cd177, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0x31805f80, __VMLINUX_SYMBOL_STR(__net_get_random_once) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x27fa3065, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x26ec25db, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xefbfe9e5, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x16c9d9d0, __VMLINUX_SYMBOL_STR(ip6_frag_init) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xd5c5ff75, __VMLINUX_SYMBOL_STR(inet_frags_init_net) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb5b4908, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x762687f3, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x94e736c4, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xc049d3ef, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x1a4e4a2c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x412a672b, __VMLINUX_SYMBOL_STR(ip6_frag_match) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E6877A0E5AF5026393C6CFB");
