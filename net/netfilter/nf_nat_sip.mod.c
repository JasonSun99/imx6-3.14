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
	{ 0xa3b9c5b1, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8c4b9e70, __VMLINUX_SYMBOL_STR(nf_nat_sip_hooks) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x55305ff8, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x854ac18a, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x72a65cc1, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0xce476c0d, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0x68d67e6f, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x4e830a3e, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0x1ad2ba06, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0xa1fe7cd1, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0x4fb3a47b, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x9eb48c24, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xc5107eda, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe2925e9c, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0xe21b46ed, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0x1adb475e, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xc110252b, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa273f26d, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";


MODULE_INFO(srcversion, "0560EB78D4029FA61146C5D");
