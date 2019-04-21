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
	{ 0x9806fc9a, __VMLINUX_SYMBOL_STR(team_modeop_port_change_dev_addr) },
	{ 0x8e4d11e1, __VMLINUX_SYMBOL_STR(team_modeop_port_enter) },
	{ 0x711741ce, __VMLINUX_SYMBOL_STR(team_mode_unregister) },
	{ 0xf064a642, __VMLINUX_SYMBOL_STR(team_mode_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xfdce7d75, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xa249c090, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=team";


MODULE_INFO(srcversion, "E033E5EF64B73A976E6F9FB");
