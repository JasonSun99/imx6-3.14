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
	{ 0x711741ce, __VMLINUX_SYMBOL_STR(team_mode_unregister) },
	{ 0xf064a642, __VMLINUX_SYMBOL_STR(team_mode_register) },
	{ 0xd773d120, __VMLINUX_SYMBOL_STR(team_option_inst_set_change) },
	{ 0x42c615fb, __VMLINUX_SYMBOL_STR(team_options_register) },
	{ 0x55339d94, __VMLINUX_SYMBOL_STR(team_options_unregister) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfdce7d75, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xa249c090, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=team";


MODULE_INFO(srcversion, "E9FF3CF3704F9C3D765B829");
