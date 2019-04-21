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
	{ 0xe8e40d79, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x12ce865f, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xaaaa21ca, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x19b6a378, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0x5fc71f69, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x2a067da0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb2c5fa92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x88c967a5, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x52d4d2b, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0xfec2bcd0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xd23f3588, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x4b97dd28, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0xa78b8230, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x1e700719, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x1955875e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xd6be4c96, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xcf2f3b30, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0x9d1e4a14, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x657b5c44, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x3d73323a, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_netlink,l2tp_core";


MODULE_INFO(srcversion, "596739EEC831C4BB98925CA");
