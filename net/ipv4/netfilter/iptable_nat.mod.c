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
	{ 0x5198d01b, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0x2a067da0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa273f26d, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xcd19f82c, __VMLINUX_SYMBOL_STR(nf_nat_icmp_reply_translation) },
	{ 0xfc94d40a, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x681c70a5, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0x9356f676, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0xecb1e8a2, __VMLINUX_SYMBOL_STR(__nf_ct_kill_acct) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xde905980, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0xfbc66757, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x580f2938, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_nat_ipv4,nf_conntrack";


MODULE_INFO(srcversion, "FC5A49CBB41369B314CE728");
