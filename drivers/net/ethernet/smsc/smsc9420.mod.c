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
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x254f7f0, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x897c8e51, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xb9d5ccb7, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x99d52924, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x1f36cc81, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xa17e1d78, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0x6b9e01a5, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1955875e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x8142f04, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xe3d6d6a9, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xe45a7d04, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xa8f088d9, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xf24e21b4, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xa439ecde, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0x62bd7e64, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xea056cbd, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0x8d26227, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x51930a48, __VMLINUX_SYMBOL_STR(phy_connect) },
	{ 0x8e43d0ae, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0xbb8a374d, __VMLINUX_SYMBOL_STR(mdiobus_register) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1b99ba14, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x9ffbceb1, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xb513f829, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x279a1854, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0xfa223de7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2ccdcfc4, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xf6f9addd, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x9c1bae34, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0xbbd1bca3, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0xf6f7effc, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x3e258553, __VMLINUX_SYMBOL_STR(phy_start_aneg) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa78b8230, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x7b15c2ec, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0xd23f3588, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf916cc7e, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xfa675719, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x86864dd0, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x341a3841, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x751c7d2c, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe460621e, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x809a5cb6, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xecfac99d, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001055d0000E420sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "59F83515D9D771F6F62D822");
