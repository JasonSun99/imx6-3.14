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
	{ 0xd3fdce9e, __VMLINUX_SYMBOL_STR(ar9003_paprd_is_done) },
	{ 0xbcfbdd57, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x5fdf69b1, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0x9339079a, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x590686b9, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0xe49e4e3c, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x63ab5e6c, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0x267af57a, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x62f8aae6, __VMLINUX_SYMBOL_STR(ar9003_mci_send_wlan_channels) },
	{ 0x76d3de27, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1e8ce602, __VMLINUX_SYMBOL_STR(ath9k_hw_setantenna) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5b62f6aa, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x278b4996, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x42a469a6, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1c11c0f6, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x2d2f52d3, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x57b4721a, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0x340689b6, __VMLINUX_SYMBOL_STR(ath9k_hw_numtxpending) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xb83ee1e0, __VMLINUX_SYMBOL_STR(ar9003_paprd_setup_gain_table) },
	{ 0x890f861d, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x168c7828, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xaca8add2, __VMLINUX_SYMBOL_STR(ath9k_hw_set_interrupts) },
	{ 0xaa3b4eec, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x55adc05a, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x140f95de, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_mci) },
	{ 0xc15c8611, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0x3a0abdbd, __VMLINUX_SYMBOL_STR(ar9003_paprd_enable) },
	{ 0x6ab45a67, __VMLINUX_SYMBOL_STR(ath9k_hw_getchan_noise) },
	{ 0x2da2e09c, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xbed41975, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xdd2b30fc, __VMLINUX_SYMBOL_STR(ath9k_hw_computetxtime) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf16a3728, __VMLINUX_SYMBOL_STR(ath9k_hw_disable_interrupts) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x2daba868, __VMLINUX_SYMBOL_STR(ath9k_hw_bstuck_nfcal) },
	{ 0xc8cbcc4e, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4bfb8ce3, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0xbab50135, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x7b7426bf, __VMLINUX_SYMBOL_STR(ath9k_hw_gettxbuf) },
	{ 0x5adff007, __VMLINUX_SYMBOL_STR(dfs_pattern_detector_init) },
	{ 0x5e55c2b0, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28bca7d9, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x47520886, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x4c66be27, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x5552bd67, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0xae1013af, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x7a1c92ab, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x56950994, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x41b3d1f8, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_gpio_input) },
	{ 0x225afd8e, __VMLINUX_SYMBOL_STR(ath9k_hw_kill_interrupts) },
	{ 0xcbaae858, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2f67808e, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xcd7e80d6, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xce9cdc72, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x12e3275d, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4ea70ff6, __VMLINUX_SYMBOL_STR(ath9k_hw_process_rxdesc_edma) },
	{ 0x1e8313fc, __VMLINUX_SYMBOL_STR(ar9003_paprd_populate_single_table) },
	{ 0xd82d0986, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x8ff0f9b7, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x6882f63c, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0xf28be445, __VMLINUX_SYMBOL_STR(ath_gen_timer_isr) },
	{ 0xb16f09f2, __VMLINUX_SYMBOL_STR(ath9k_hw_rxprocdesc) },
	{ 0xbaf2eaaa, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x40776e53, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_2wire) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5d0d0e89, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x78b2b134, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xf9965161, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_dbg_info) },
	{ 0x96ddbefb, __VMLINUX_SYMBOL_STR(ar9003_paprd_create_curve) },
	{ 0xed8e87b, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x2d2fcea4, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xf7d914c1, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x59409bad, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x62e94aec, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x6211316c, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x4e2481d5, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xff7a179, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x9be1bbed, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e67bf61, __VMLINUX_SYMBOL_STR(ath9k_hw_addrxbuf_edma) },
	{ 0xa7947bc, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xc0cb6583, __VMLINUX_SYMBOL_STR(ieee80211_find_sta_by_ifaddr) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x6c26942e, __VMLINUX_SYMBOL_STR(ath9k_hw_setup_statusring) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3ca9c216, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x97d27874, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x4575c404, __VMLINUX_SYMBOL_STR(ar9003_mci_get_next_gpm_offset) },
	{ 0x4d1f4f3d, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xa3b719de, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x99bb061f, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x7f38af76, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0xb8a3481, __VMLINUX_SYMBOL_STR(ath9k_hw_puttxbuf) },
	{ 0xbfe8d346, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x75c6d713, __VMLINUX_SYMBOL_STR(ar9003_mci_state) },
	{ 0x4723cf3b, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_scheme) },
	{ 0x2854caf3, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x93f79b6c, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xeca8cd54, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa865b375, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb0c5110a, __VMLINUX_SYMBOL_STR(ath9k_hw_abortpcurecv) },
	{ 0x8245e779, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd2981357, __VMLINUX_SYMBOL_STR(ath9k_cmn_count_streams) },
	{ 0xd53d0790, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xbea7b075, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf27d13e9, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x9376f2, __VMLINUX_SYMBOL_STR(ieee80211_sta_set_buffered) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x593cd5f6, __VMLINUX_SYMBOL_STR(ar9003_mci_get_interrupt) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x502aa276, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xb3bf03b3, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0x31312de7, __VMLINUX_SYMBOL_STR(ath9k_hw_updatetxtriglevel) },
	{ 0xd4ae5461, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0x79788aa5, __VMLINUX_SYMBOL_STR(ar9003_mci_set_bt_version) },
	{ 0x4904e67, __VMLINUX_SYMBOL_STR(ath9k_hw_set_rx_bufsize) },
	{ 0xdfedd146, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0x5a49690c, __VMLINUX_SYMBOL_STR(ar9003_is_paprd_enabled) },
	{ 0x94c43ee4, __VMLINUX_SYMBOL_STR(ar9003_get_pll_sqsum_dvc) },
	{ 0x179747c7, __VMLINUX_SYMBOL_STR(ar9003_mci_send_message) },
	{ 0x49817110, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x1ff60df9, __VMLINUX_SYMBOL_STR(ar9003_mci_cleanup) },
	{ 0xefbfe9e5, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x9cce3faf, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0x8b6031a, __VMLINUX_SYMBOL_STR(ath9k_hw_txstart) },
	{ 0x65771f1e, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x8373ef60, __VMLINUX_SYMBOL_STR(ath9k_hw_check_alive) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5b8973d8, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_concur_txprio) },
	{ 0x631cb93d, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x717b2687, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x6b46d01b, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x853d0e13, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x4f03afe, __VMLINUX_SYMBOL_STR(ar9003_mci_setup) },
	{ 0x8ab33516, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0xf29ad845, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x9c5e6334, __VMLINUX_SYMBOL_STR(ieee80211_sta_eosp) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x66528bd2, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x5f8a2a28, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x48b421f, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x31514e4f, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5f857ea1, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xec3dfaf7, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0xf99fb62b, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0xae5e826d, __VMLINUX_SYMBOL_STR(ath9k_hw_check_nav) },
	{ 0xf7a45c40, __VMLINUX_SYMBOL_STR(ath9k_hw_putrxbuf) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x7a8bfbdf, __VMLINUX_SYMBOL_STR(ath_rxbuf_alloc) },
	{ 0xd2a8eea7, __VMLINUX_SYMBOL_STR(ar9003_paprd_init_table) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x85466c2a, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xfc8a4f9f, __VMLINUX_SYMBOL_STR(ath9k_hw_setuprxdesc) },
	{ 0x5f2c2dbb, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xf6ba405c, __VMLINUX_SYMBOL_STR(ath9k_hw_abort_tx_dma) },
	{ 0x3434653f, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x4e035b74, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x95c06418, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xee1068d0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x21dffee8, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0xd9407754, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_check) },
	{ 0xe67d4b4e, __VMLINUX_SYMBOL_STR(ath9k_hw_enable_interrupts) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xe2356693, __VMLINUX_SYMBOL_STR(ath9k_hw_intrpend) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xb48f304e, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x32e8f353, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xd99437f7, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xb1a64b7, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x4e09a161, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x5fc0e9f5, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txpowerlimit) },
	{ 0x344e9123, __VMLINUX_SYMBOL_STR(ath9k_hw_stop_dma_queue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,mac80211,ath9k_common,cfg80211,ath";

MODULE_ALIAS("pci:v0000168Cd00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A3Bsd00001C71bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000105Bsd0000E01Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A32sd00000306bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000185Fsd0000309Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd00001536bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv00001A3Bsd00002C37bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002086bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001237bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002126bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd0000126Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002152bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E075bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003122bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004105bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004106bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C706bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C680bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C708bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003218bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003219bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002C97bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002100bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001C56sd00004001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006627bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006628bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Fsd00007197bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001186bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F86bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001195bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F95bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C00bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C01bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001043sd0000850Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002116bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006661bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000168Csd00003117bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000017AAsd00003214bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001969sd00000091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002110bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001043sd0000850Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006631bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006641bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000103Csd00001864bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000063bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000064bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000010CFsd00001783bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002003bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002176bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E068bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006B2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00006671bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002811bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002812bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A1bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003025bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E069bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000622bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000672bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000662bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000682bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd000018E3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd0000217Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd00002005bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000652bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000612bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000692bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002130bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002182bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Fsd00007202bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002810bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A120bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E07Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E081bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00004026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001043sd000085F2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("platform:ath9k");
MODULE_ALIAS("platform:ar933x_wmac");
MODULE_ALIAS("platform:ar934x_wmac");
MODULE_ALIAS("platform:qca955x_wmac");

MODULE_INFO(srcversion, "80170CD072396DC75B0EF9A");
