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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x26f0392b, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
	{ 0x1daa0889, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x7cf1eb3e, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0x7a2742f8, __VMLINUX_SYMBOL_STR(tcp_reno_ssthresh) },
	{ 0x39e02bf1, __VMLINUX_SYMBOL_STR(tcp_reno_min_cwnd) },
	{ 0x7e505efa, __VMLINUX_SYMBOL_STR(tcp_slow_start) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xedcbcad5, __VMLINUX_SYMBOL_STR(tcp_reno_cong_avoid) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BDBA96AB56A5A063A06937F");
