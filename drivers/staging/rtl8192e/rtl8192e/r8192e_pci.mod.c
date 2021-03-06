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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc2ca9c8b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc215d172, __VMLINUX_SYMBOL_STR(HT_update_self_and_peer_setting) },
	{ 0x5449d5e6, __VMLINUX_SYMBOL_STR(rtllib_wx_set_rawtx) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2ceb342, __VMLINUX_SYMBOL_STR(rtllib_wpa_supplicant_ioctl) },
	{ 0xadf42bd5, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xffb23fcc, __VMLINUX_SYMBOL_STR(rtllib_start_scan_syncro) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xfe84619a, __VMLINUX_SYMBOL_STR(rtllib_stop_scan_syncro) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x4845e163, __VMLINUX_SYMBOL_STR(rtllib_wx_set_auth) },
	{ 0xb0aae5d, __VMLINUX_SYMBOL_STR(rtllib_wx_set_mlme) },
	{ 0xb76d56bc, __VMLINUX_SYMBOL_STR(rtllib_wx_get_essid) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa8060a2, __VMLINUX_SYMBOL_STR(rtllib_ps_tx_ack) },
	{ 0xbb2a6bae, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x61facbab, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xaecc94e0, __VMLINUX_SYMBOL_STR(rtllib_wx_set_power) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x591eea84, __VMLINUX_SYMBOL_STR(dot11d_init) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x6490c26, __VMLINUX_SYMBOL_STR(rtllib_wx_set_rate) },
	{ 0x9ffbceb1, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xfb06c2f, __VMLINUX_SYMBOL_STR(rtllib_wx_get_encode) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa8c22c55, __VMLINUX_SYMBOL_STR(rtllib_sta_ps_send_null_frame) },
	{ 0xbe1420f2, __VMLINUX_SYMBOL_STR(rt_global_debug_component) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x6747c0c7, __VMLINUX_SYMBOL_STR(rtllib_wx_set_wap) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x2efa723d, __VMLINUX_SYMBOL_STR(rtllib_DisableIntelPromiscuousMode) },
	{ 0xeb7a30bc, __VMLINUX_SYMBOL_STR(rtllib_wx_set_scan) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xb7471f15, __VMLINUX_SYMBOL_STR(rtllib_wx_get_freq) },
	{ 0x6164627d, __VMLINUX_SYMBOL_STR(rtllib_xmit) },
	{ 0xf23b647c, __VMLINUX_SYMBOL_STR(rtllib_wx_get_wap) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xaaf11b11, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x7846111e, __VMLINUX_SYMBOL_STR(rtllib_wx_get_power) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x29cc81b, __VMLINUX_SYMBOL_STR(rtllib_wx_get_name) },
	{ 0xeb6109b5, __VMLINUX_SYMBOL_STR(rtllib_wx_set_freq) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xf24e21b4, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x5a6f1a86, __VMLINUX_SYMBOL_STR(rtllib_wx_get_rate) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x61e7d342, __VMLINUX_SYMBOL_STR(rtllib_wx_set_essid) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x1955875e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xff7a179, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xfa675719, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa717cb12, __VMLINUX_SYMBOL_STR(rtllib_wx_set_mode) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x556339b1, __VMLINUX_SYMBOL_STR(rtllib_wx_set_encode) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x13460f99, __VMLINUX_SYMBOL_STR(rtllib_act_scanning) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xd8ee4227, __VMLINUX_SYMBOL_STR(rtllib_stop_send_beacons) },
	{ 0x98fb2fad, __VMLINUX_SYMBOL_STR(rtllib_wx_set_rts) },
	{ 0xd878b16, __VMLINUX_SYMBOL_STR(rtllib_wx_get_rts) },
	{ 0x4a6ddd92, __VMLINUX_SYMBOL_STR(rtllib_legal_channel) },
	{ 0x3b99b8aa, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xa8f088d9, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x751c7d2c, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x186df290, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x89f4c553, __VMLINUX_SYMBOL_STR(RemovePeerTS) },
	{ 0xd53d0790, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xfb31ddb2, __VMLINUX_SYMBOL_STR(rtllib_wx_get_mode) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x853e0bcf, __VMLINUX_SYMBOL_STR(rtllib_rx) },
	{ 0x85fd8e34, __VMLINUX_SYMBOL_STR(alloc_rtllib) },
	{ 0xdf78f620, __VMLINUX_SYMBOL_STR(rtllib_wlan_frequencies) },
	{ 0x9bce482f, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x7e5e2827, __VMLINUX_SYMBOL_STR(rtllib_reset_queue) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf916cc7e, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xb9d5ccb7, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x4e6fcadc, __VMLINUX_SYMBOL_STR(rtllib_MgntDisconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6ff2473a, __VMLINUX_SYMBOL_STR(Dot11d_Channelmap) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd01b60f1, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0x9f84d4e6, __VMLINUX_SYMBOL_STR(rtllib_softmac_start_protocol) },
	{ 0x6957b98f, __VMLINUX_SYMBOL_STR(rtllib_wx_set_encode_ext) },
	{ 0xc7a671d6, __VMLINUX_SYMBOL_STR(rtllib_stop_scan) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x9d39cfd8, __VMLINUX_SYMBOL_STR(rtllib_get_beacon) },
	{ 0xbdb7c1ad, __VMLINUX_SYMBOL_STR(rtllib_softmac_stop_protocol) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xd6bcce70, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xd23f3588, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x86864dd0, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xea056cbd, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xeff1b9d0, __VMLINUX_SYMBOL_STR(rtllib_wx_set_gen_ie) },
	{ 0x32e8f353, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xb1a64b7, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0x3e913c1d, __VMLINUX_SYMBOL_STR(notify_wx_assoc_event) },
	{ 0xb75c261c, __VMLINUX_SYMBOL_STR(rtllib_wx_get_scan) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x341a3841, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xd97922b9, __VMLINUX_SYMBOL_STR(rtllib_start_send_beacons) },
	{ 0xef9665df, __VMLINUX_SYMBOL_STR(rtllib_EnableIntelPromiscuousMode) },
	{ 0x585f8a03, __VMLINUX_SYMBOL_STR(free_rtllib) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtllib";

MODULE_ALIAS("pci:v000010ECd00008192sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000007AAd00000044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000007AAd00000047sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1B6659B19B1546810F67F16");
