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
	{ 0x39e02bf1, __VMLINUX_SYMBOL_STR(tcp_reno_min_cwnd) },
	{ 0x7cf1eb3e, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0x26f0392b, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
	{ 0x7e505efa, __VMLINUX_SYMBOL_STR(tcp_slow_start) },
	{ 0x8deaa72a, __VMLINUX_SYMBOL_STR(tcp_cong_avoid_ai) },
	{ 0x50b9c48a, __VMLINUX_SYMBOL_STR(tcp_is_cwnd_limited) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "97FD14E95E8673707E08BF4");
