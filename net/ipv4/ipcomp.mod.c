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
	{ 0x908b4c70, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0x3620e12e, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0x2011ed2e, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x9006eb56, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0x3961acb2, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9b285df7, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x5463be50, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3086bf33, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xed3f83f6, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0x1d7b6ae0, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xe24d9b6, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xfacc89c3, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x885ec892, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x3e2dda84, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x259b9339, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x934e86cc, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";


MODULE_INFO(srcversion, "6EA5034AE9F5252100CEC02");
