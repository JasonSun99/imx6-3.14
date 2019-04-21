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
	{ 0xd0b2e938, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb9d5ccb7, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x99d52924, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xcd7dc0e4, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x902907f4, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xdc0ca366, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0xe8e40d79, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x3f5e2176, __VMLINUX_SYMBOL_STR(gre_cisco_unregister) },
	{ 0xc97e2060, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x90cb93ac, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xb1db095e, __VMLINUX_SYMBOL_STR(gre_cisco_register) },
	{ 0x12ce865f, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1fb89f60, __VMLINUX_SYMBOL_STR(ip_mc_dec_group) },
	{ 0x2ecf2b3e, __VMLINUX_SYMBOL_STR(inetdev_by_index) },
	{ 0x9c360c2a, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x5fc71f69, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x17d89b7e, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0xc3d2bf51, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x1daa0889, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x16dba0, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xfb8d1088, __VMLINUX_SYMBOL_STR(ip_mc_inc_group) },
	{ 0x2a067da0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x4212313f, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xefbfe9e5, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x6f85810b, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4600291e, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0xe3a2c2f7, __VMLINUX_SYMBOL_STR(gre_build_header) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xbd9864ad, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1453cc63, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x7454dfb3, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2e111e56, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x752d5cbe, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre";


MODULE_INFO(srcversion, "2B6482F8A305EF5A3C7242A");
