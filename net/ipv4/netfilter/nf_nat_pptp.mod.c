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
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc2008854, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_expectfn) },
	{ 0xb9cce664, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_exp_gre) },
	{ 0x97c8a1d0, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_inbound) },
	{ 0x451dc08b, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_outbound) },
	{ 0x636b12c8, __VMLINUX_SYMBOL_STR(nf_nat_need_gre) },
	{ 0x1adb475e, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xa273f26d, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xcf24002a, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x9eb48c24, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x5f98060c, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_pptp,nf_nat_proto_gre,nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "7E64A4CA9629AF14E700AB2");
