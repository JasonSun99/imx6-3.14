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
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xa1a29548, __VMLINUX_SYMBOL_STR(mdio45_probe) },
	{ 0x809a5cb6, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x254f7f0, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc4dc87, __VMLINUX_SYMBOL_STR(timecounter_init) },
	{ 0xc58793a6, __VMLINUX_SYMBOL_STR(dcb_ieee_setapp) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xf6f9addd, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0x53756ca1, __VMLINUX_SYMBOL_STR(pci_enable_sriov) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xca68fcbd, __VMLINUX_SYMBOL_STR(dcb_ieee_delapp) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x40ce5a19, __VMLINUX_SYMBOL_STR(pci_sriov_set_totalvfs) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xa0a47022, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xf19e9355, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xebcece3b, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0xb513f829, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x62e5ce7b, __VMLINUX_SYMBOL_STR(napi_hash_del) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x1c157f3c, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xcbc535c, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0xa381944f, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0x61facbab, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4a816a4e, __VMLINUX_SYMBOL_STR(pci_disable_sriov) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x9ffbceb1, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x22bce513, __VMLINUX_SYMBOL_STR(mdio_mii_ioctl) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7d76f138, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x2447533c, __VMLINUX_SYMBOL_STR(ktime_get_real) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xad188e4f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xb4edd46, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x6b5d93d7, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x75a8f868, __VMLINUX_SYMBOL_STR(ptp_clock_unregister) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x5d645d93, __VMLINUX_SYMBOL_STR(ptp_clock_event) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcbc01935, __VMLINUX_SYMBOL_STR(devm_hwmon_device_register_with_groups) },
	{ 0xc629982d, __VMLINUX_SYMBOL_STR(dcb_getapp) },
	{ 0x455bc1fd, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0xda4e6977, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
	{ 0xf24e21b4, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9391b23c, __VMLINUX_SYMBOL_STR(dev_addr_del) },
	{ 0xaa8f2b11, __VMLINUX_SYMBOL_STR(netif_set_xps_queue) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x897c8e51, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2be0f12d, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x6abe4e61, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xa78b8230, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x1955875e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x279a1854, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xff7a179, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xbae37de, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xc01b5934, __VMLINUX_SYMBOL_STR(netdev_printk) },
	{ 0x2f3a9787, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xe3ebc0a4, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0x8142f04, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xae5dc7ac, __VMLINUX_SYMBOL_STR(dcb_ieee_getapp_mask) },
	{ 0xb6a68816, __VMLINUX_SYMBOL_STR(find_last_bit) },
	{ 0x28e76d1, __VMLINUX_SYMBOL_STR(ptp_clock_register) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x96ec6ba8, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x359876fe, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x74954462, __VMLINUX_SYMBOL_STR(timecounter_read) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x8fadba29, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0xc0bf6ead, __VMLINUX_SYMBOL_STR(timecounter_cyc2time) },
	{ 0xa8f088d9, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x23c1fee, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xef8e550d, __VMLINUX_SYMBOL_STR(dev_addr_add) },
	{ 0x38347172, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x751c7d2c, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x186df290, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x39cf8e1e, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x1f36cc81, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xd53d0790, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xc7cfdf4c, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x11ca7a2b, __VMLINUX_SYMBOL_STR(napi_hash_add) },
	{ 0xd3bae121, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_add) },
	{ 0xfa223de7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xefbfe9e5, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x62bd7e64, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xf916cc7e, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xecfac99d, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xb9d5ccb7, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x624c83c7, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc8b76504, __VMLINUX_SYMBOL_STR(ptp_clock_index) },
	{ 0x229931c8, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xaf4b4652, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0x268d2563, __VMLINUX_SYMBOL_STR(pci_num_vf) },
	{ 0x74a946cf, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xe8180a53, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd23f3588, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0x6a047c43, __VMLINUX_SYMBOL_STR(ndo_dflt_bridge_getlink) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf675a277, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x1de2656d, __VMLINUX_SYMBOL_STR(pci_vfs_assigned) },
	{ 0x9e0c711d, __VMLINUX_SYMBOL_STR(vzalloc_node) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x22f36ec3, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0xea056cbd, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xed315e93, __VMLINUX_SYMBOL_STR(netdev_all_upper_get_next_dev_rcu) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x42f56481, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x2ccdcfc4, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x23b03d17, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x104c7b07, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0xa67085e2, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0xdc461430, __VMLINUX_SYMBOL_STR(irq_set_affinity_hint) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x1a4e4a2c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x6da8c376, __VMLINUX_SYMBOL_STR(pci_find_ext_capability) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x96255cc0, __VMLINUX_SYMBOL_STR(pcie_get_minimum_link) },
	{ 0x59db68c6, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xb1a64b7, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0x987601d0, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x341a3841, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe45a7d04, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x506f891f, __VMLINUX_SYMBOL_STR(netdev_crit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mdio";

MODULE_ALIAS("pci:v00008086d000010B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001508sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001517sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001507sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001514sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000152Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001529sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000151Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001528sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001558sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001557sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001560sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "725DC4A7B64B8750E73166B");
