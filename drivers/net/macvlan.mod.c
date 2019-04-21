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
	{ 0xe26d8e86, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x52d4d2b, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x15e23984, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcd8a3ab1, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x4258e0fd, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0xebcece3b, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0x5c06a2f0, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0x1c157f3c, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0x16053804, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x69e529f0, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x2194f23, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xccb2ec43, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x6b5d93d7, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb6bba6e2, __VMLINUX_SYMBOL_STR(ip_check_defrag) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x897c8e51, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xf99a7f4f, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0xa78b8230, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x85a59fa5, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x1daa0889, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x6ad2257e, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0xdc63bd7c, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_dump) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x129192e1, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0xc97e2060, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xfa249d2, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x680cc692, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x496924fe, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x829796fc, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa64daf3d, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0x5fc71f69, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xe1699341, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xc12af069, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xb9d5ccb7, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xdc4b4e69, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7f3b8b6, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x90cb93ac, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xdaba0bb3, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x5fa29aa7, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7eb8bb6c, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x1cb4ff3b, __VMLINUX_SYMBOL_STR(dev_queue_xmit_accel) },
	{ 0xa249c090, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x2b38de78, __VMLINUX_SYMBOL_STR(eth_rebuild_header) },
	{ 0x45be849e, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "80C57FBC836E7DC933E2E61");
