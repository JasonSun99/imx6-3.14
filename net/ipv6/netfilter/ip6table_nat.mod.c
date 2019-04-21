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
	{ 0x30f98e13, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xdcc6aefd, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x762687f3, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x26ec25db, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xc58a0f16, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0x15c2b6df, __VMLINUX_SYMBOL_STR(ip6_route_me_harder) },
	{ 0x2a067da0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa273f26d, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xd8396396, __VMLINUX_SYMBOL_STR(nf_nat_icmpv6_reply_translation) },
	{ 0xfc94d40a, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x681c70a5, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0xcb23a396, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0xc549bb4a, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xecb1e8a2, __VMLINUX_SYMBOL_STR(__nf_ct_kill_acct) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x443df3af, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0xea0c7b22, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7a09959f, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_nat_ipv6,nf_conntrack,ip6_tables";


MODULE_INFO(srcversion, "A13659AB9D337383E1A3A2B");
