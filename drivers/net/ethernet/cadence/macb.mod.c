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
	{ 0x19384649, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xcbe4c90f, __VMLINUX_SYMBOL_STR(platform_driver_probe) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x809a5cb6, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x254f7f0, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa17e1d78, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0xf6f9addd, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0x7f9f2867, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x40b942b7, __VMLINUX_SYMBOL_STR(of_mdiobus_register) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x6b9e01a5, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x576019f7, __VMLINUX_SYMBOL_STR(mdiobus_scan) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xb513f829, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0xbc219a96, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xbb2a6bae, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0x61facbab, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x9ffbceb1, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xbbd1bca3, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x3c8d28cc, __VMLINUX_SYMBOL_STR(of_get_phy_mode) },
	{ 0xa439ecde, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0xad1f1e60, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x8d26227, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x6a5805a4, __VMLINUX_SYMBOL_STR(phy_find_first) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x897c8e51, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x8e43d0ae, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0xa78b8230, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x1955875e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x279a1854, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3f2da077, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0xa7947bc, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0x8142f04, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xa8f088d9, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xbcdedba7, __VMLINUX_SYMBOL_STR(of_get_mac_address) },
	{ 0xc2ef2b12, __VMLINUX_SYMBOL_STR(clk_round_rate) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x751c7d2c, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xbb8a374d, __VMLINUX_SYMBOL_STR(mdiobus_register) },
	{ 0x1f36cc81, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xf372b871, __VMLINUX_SYMBOL_STR(phy_connect_direct) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc329a245, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xfa223de7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x62bd7e64, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xee914bb9, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6b6dd888, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xecfac99d, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xb9d5ccb7, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8e9c7933, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x6a5d3888, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0xd23f3588, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x9c1bae34, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0xf6f7effc, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xea056cbd, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xc5bc1f56, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xee1068d0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2ccdcfc4, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x99d52924, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x61829a3b, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xe4e57eb0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xe45a7d04, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x1b99ba14, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Ccdns,at32ap7000-macb*");
MODULE_ALIAS("of:N*T*Ccdns,at91sam9260-macb*");
MODULE_ALIAS("of:N*T*Ccdns,macb*");
MODULE_ALIAS("of:N*T*Ccdns,pc302-gem*");
MODULE_ALIAS("of:N*T*Ccdns,gem*");

MODULE_INFO(srcversion, "13F81656D54B597D212BA59");
