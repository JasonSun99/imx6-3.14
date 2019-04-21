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
	{ 0x3419625b, __VMLINUX_SYMBOL_STR(il_init_channel_map) },
	{ 0xa2e21b7b, __VMLINUX_SYMBOL_STR(il_power_update_mode) },
	{ 0x975e9026, __VMLINUX_SYMBOL_STR(il_clear_ucode_stations) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x58176465, __VMLINUX_SYMBOL_STR(il_get_free_ucode_key_idx) },
	{ 0x510ac62f, __VMLINUX_SYMBOL_STR(il_send_cmd) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x7800e85f, __VMLINUX_SYMBOL_STR(il_get_active_dwell_time) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x1dc876fe, __VMLINUX_SYMBOL_STR(il_mac_change_interface) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4a7f381b, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xbd3a4357, __VMLINUX_SYMBOL_STR(il_set_rate) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xbcb2365, __VMLINUX_SYMBOL_STR(il_rd_prph) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x28e042b0, __VMLINUX_SYMBOL_STR(il_power_initialize) },
	{ 0x7b87269b, __VMLINUX_SYMBOL_STR(il_txq_update_write_ptr) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xd842b048, __VMLINUX_SYMBOL_STR(il_free_geos) },
	{ 0xcfd8213, __VMLINUX_SYMBOL_STR(il_wr_prph) },
	{ 0xfd9c8749, __VMLINUX_SYMBOL_STR(il_send_lq_cmd) },
	{ 0x4aa39103, __VMLINUX_SYMBOL_STR(il_get_cmd_string) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x564c6740, __VMLINUX_SYMBOL_STR(il_debug_level) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x60d19df4, __VMLINUX_SYMBOL_STR(il_send_rxon_timing) },
	{ 0xd10350bd, __VMLINUX_SYMBOL_STR(il_write_targ_mem) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xd365c90b, __VMLINUX_SYMBOL_STR(il_hdl_error) },
	{ 0x5e55c2b0, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x7b15c2ec, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x700089b3, __VMLINUX_SYMBOL_STR(rate_control_send_low) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x5a29ce7, __VMLINUX_SYMBOL_STR(il_get_passive_dwell_time) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d76f138, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xc39cf12c, __VMLINUX_SYMBOL_STR(il_bg_watchdog) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa7e175a4, __VMLINUX_SYMBOL_STR(il_init_geos) },
	{ 0xad188e4f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xb2b7c4e1, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xcafc10e0, __VMLINUX_SYMBOL_STR(il_set_rxon_hwcrypto) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xaec874ca, __VMLINUX_SYMBOL_STR(il_connection_init_rx_config) },
	{ 0x44988fe1, __VMLINUX_SYMBOL_STR(il_send_cmd_sync) },
	{ 0xbaa4e0cb, __VMLINUX_SYMBOL_STR(il_force_reset) },
	{ 0x2f67808e, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x15fd0b3b, __VMLINUX_SYMBOL_STR(il_eeprom_query_addr) },
	{ 0xdbd09eb1, __VMLINUX_SYMBOL_STR(il_tx_queue_init) },
	{ 0xa5b9361c, __VMLINUX_SYMBOL_STR(il_get_lowest_plcp) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xcd7e80d6, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xa6cc2ee3, __VMLINUX_SYMBOL_STR(il_get_channel_info) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x54a0950d, __VMLINUX_SYMBOL_STR(il_tx_queue_unmap) },
	{ 0x433ef596, __VMLINUX_SYMBOL_STR(il_hdl_pm_sleep) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xdc4636d1, __VMLINUX_SYMBOL_STR(il_fill_probe_req) },
	{ 0xdbf00cdf, __VMLINUX_SYMBOL_STR(il_mac_reset_tsf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x628486be, __VMLINUX_SYMBOL_STR(il_mac_conf_tx) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xddb0b9b4, __VMLINUX_SYMBOL_STR(il_cmd_queue_unmap) },
	{ 0xdc03700c, __VMLINUX_SYMBOL_STR(il_set_rxon_channel) },
	{ 0x6a7cdcc2, __VMLINUX_SYMBOL_STR(il_send_bt_config) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x229f9473, __VMLINUX_SYMBOL_STR(il_mac_tx_last_beacon) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x269f7eed, __VMLINUX_SYMBOL_STR(il_tx_queue_free) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6a296fc2, __VMLINUX_SYMBOL_STR(il_init_scan_params) },
	{ 0xadaec9e7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8add7960, __VMLINUX_SYMBOL_STR(ieee80211_rate_control_register) },
	{ 0x7519f94c, __VMLINUX_SYMBOL_STR(il_full_rxon_required) },
	{ 0x2d2fcea4, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xacad3123, __VMLINUX_SYMBOL_STR(il_rx_queue_update_write_ptr) },
	{ 0x60f82dae, __VMLINUX_SYMBOL_STR(_il_grab_nic_access) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x840db8ca, __VMLINUX_SYMBOL_STR(il_mac_config) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x168b0a5a, __VMLINUX_SYMBOL_STR(il_clear_bit) },
	{ 0x9be1bbed, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x498a4119, __VMLINUX_SYMBOL_STR(_il_poll_bit) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x7fd899b, __VMLINUX_SYMBOL_STR(il_leds_init) },
	{ 0x5400486, __VMLINUX_SYMBOL_STR(ieee80211_sta_block_awake) },
	{ 0x85adbcb1, __VMLINUX_SYMBOL_STR(il_mac_sta_remove) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xb97989ca, __VMLINUX_SYMBOL_STR(il_set_tx_power) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8fb26033, __VMLINUX_SYMBOL_STR(il_mac_remove_interface) },
	{ 0xe867fb18, __VMLINUX_SYMBOL_STR(il_set_decrypted_flag) },
	{ 0x4b47c06b, __VMLINUX_SYMBOL_STR(il_setup_rx_scan_handlers) },
	{ 0x4a5052d3, __VMLINUX_SYMBOL_STR(il_send_add_sta) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xa9c0d930, __VMLINUX_SYMBOL_STR(il_dealloc_bcast_stations) },
	{ 0x29e9b3ac, __VMLINUX_SYMBOL_STR(il_mac_hw_scan) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x4e083699, __VMLINUX_SYMBOL_STR(il_cancel_scan_deferred_work) },
	{ 0x97d27874, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x96ec6ba8, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x1f59ee3c, __VMLINUX_SYMBOL_STR(il_tx_queue_reset) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x8df4be39, __VMLINUX_SYMBOL_STR(il_remove_station) },
	{ 0x8563e21b, __VMLINUX_SYMBOL_STR(il_set_flags_for_band) },
	{ 0x93f79b6c, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x4c3ac897, __VMLINUX_SYMBOL_STR(il_queue_space) },
	{ 0x122f060a, __VMLINUX_SYMBOL_STR(il_eeprom_init) },
	{ 0x38347172, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x501762a7, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x186df290, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xf0697a, __VMLINUX_SYMBOL_STR(il_mac_add_interface) },
	{ 0x666695f0, __VMLINUX_SYMBOL_STR(il_restore_stations) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf27d13e9, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xb7bd33ff, __VMLINUX_SYMBOL_STR(il_isr) },
	{ 0x28d5b891, __VMLINUX_SYMBOL_STR(il_leds_exit) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xfcfa3c36, __VMLINUX_SYMBOL_STR(il_scan_cancel_timeout) },
	{ 0x384b88, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x119fa56d, __VMLINUX_SYMBOL_STR(il_free_txq_mem) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb9367acf, __VMLINUX_SYMBOL_STR(il_apm_init) },
	{ 0x5b45b36d, __VMLINUX_SYMBOL_STR(il_cmd_queue_free) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xa77bc52a, __VMLINUX_SYMBOL_STR(il_add_beacon_time) },
	{ 0x1a776c90, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x307d9c60, __VMLINUX_SYMBOL_STR(il_apm_stop) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x63afb5de, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x717b2687, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x228fbd55, __VMLINUX_SYMBOL_STR(il_setup_watchdog) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x69aa03a3, __VMLINUX_SYMBOL_STR(ieee80211_rate_control_unregister) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x59ab009e, __VMLINUX_SYMBOL_STR(ieee80211_restart_hw) },
	{ 0x3afef047, __VMLINUX_SYMBOL_STR(il_rx_queue_space) },
	{ 0x3c925387, __VMLINUX_SYMBOL_STR(il_irq_handle_error) },
	{ 0x78a8493b, __VMLINUX_SYMBOL_STR(il_check_rxon_cmd) },
	{ 0xf4dcf286, __VMLINUX_SYMBOL_STR(il_tx_cmd_complete) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x48b421f, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xea502995, __VMLINUX_SYMBOL_STR(il_tx_cmd_protection) },
	{ 0x3fcf61d4, __VMLINUX_SYMBOL_STR(il_hdl_pm_debug_stats) },
	{ 0x2532f955, __VMLINUX_SYMBOL_STR(il_add_station_common) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa5fb26ab, __VMLINUX_SYMBOL_STR(il_read_targ_mem) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa1fc36c4, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0x199a0414, __VMLINUX_SYMBOL_STR(il_set_bit) },
	{ 0xe3d6d6a9, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xf99fb62b, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0x229931c8, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xaf4b4652, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0xf501278b, __VMLINUX_SYMBOL_STR(il_bcast_addr) },
	{ 0xeff03af9, __VMLINUX_SYMBOL_STR(il_mac_flush) },
	{ 0xfcb9c5a9, __VMLINUX_SYMBOL_STR(il_hdl_csa) },
	{ 0xb5e774b3, __VMLINUX_SYMBOL_STR(il_free_channel_map) },
	{ 0xfe05304c, __VMLINUX_SYMBOL_STR(il_scan_cancel) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x49a6104c, __VMLINUX_SYMBOL_STR(il_setup_scan_deferred_work) },
	{ 0xd818d197, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_p2k) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x9f0792f6, __VMLINUX_SYMBOL_STR(il_print_rx_config_cmd) },
	{ 0x64bcd1ba, __VMLINUX_SYMBOL_STR(il_hdl_spectrum_measurement) },
	{ 0x4e035b74, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xc95316bd, __VMLINUX_SYMBOL_STR(il_usecs_to_beacons) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x84b2765, __VMLINUX_SYMBOL_STR(il_is_ht40_tx_allowed) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd5a27f61, __VMLINUX_SYMBOL_STR(il_alloc_txq_mem) },
	{ 0xabb7e2df, __VMLINUX_SYMBOL_STR(il_send_cmd_pdu) },
	{ 0x7153e3ff, __VMLINUX_SYMBOL_STR(il_mac_bss_info_changed) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x22f36ec3, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0x4edede07, __VMLINUX_SYMBOL_STR(_il_apm_stop) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xcd2338eb, __VMLINUX_SYMBOL_STR(il_eeprom_query16) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xac557ee5, __VMLINUX_SYMBOL_STR(il_chswitch_done) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x13dcfe35, __VMLINUX_SYMBOL_STR(il_prep_station) },
	{ 0xb9804f7b, __VMLINUX_SYMBOL_STR(ieee80211_chswitch_done) },
	{ 0xc0b3d71c, __VMLINUX_SYMBOL_STR(il_send_cmd_pdu_async) },
	{ 0x17148277, __VMLINUX_SYMBOL_STR(il_set_rxon_ht) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x221c7746, __VMLINUX_SYMBOL_STR(il_rx_queue_alloc) },
	{ 0x32e8f353, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xd99437f7, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xc0c96f02, __VMLINUX_SYMBOL_STR(il_eeprom_free) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xcccafe99, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_session) },
	{ 0x898e2c79, __VMLINUX_SYMBOL_STR(il_pm_ops) },
	{ 0xa21bb299, __VMLINUX_SYMBOL_STR(il_send_stats_request) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=iwlegacy,cfg80211,mac80211";

MODULE_ALIAS("pci:v00008086d00004229sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004230sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B09DE1FF21A7943778D45CE");
