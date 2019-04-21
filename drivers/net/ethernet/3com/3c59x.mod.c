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
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x254f7f0, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x897c8e51, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xbb2a6bae, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xb9d5ccb7, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x99d52924, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x59d8223a, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x9bce482f, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x594bf15b, __VMLINUX_SYMBOL_STR(ioport_map) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe3d6d6a9, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xcdca3691, __VMLINUX_SYMBOL_STR(nr_irqs) },
	{ 0x57aa2713, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x1955875e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xe45a7d04, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x3f2da077, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xea056cbd, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0xa8f088d9, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x9ffbceb1, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x61facbab, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x37917732, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x679376aa, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xbdf2580d, __VMLINUX_SYMBOL_STR(__raw_readsl) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x2ccdcfc4, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x51908eb8, __VMLINUX_SYMBOL_STR(__raw_writesl) },
	{ 0xf6f9addd, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0xf67952ec, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xd079435d, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe35cae9e, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xf24e21b4, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xa78b8230, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x7b15c2ec, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xd23f3588, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xe6f46c85, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x751c7d2c, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x341a3841, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xf916cc7e, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xfa675719, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x59db68c6, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x6b5d93d7, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfa223de7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x57a8904b, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v000010B7d00005900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005970sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005950sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005951sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005952sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000900Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000905Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00007646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005B57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005157sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005257sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006564sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00001201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009210sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D25A5F9BA81F2C56C208B93");
