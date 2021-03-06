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
	{ 0x659e933e, __VMLINUX_SYMBOL_STR(__iwl_err) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xff80cfb6, __VMLINUX_SYMBOL_STR(iwl_nvm_check_version) },
	{ 0x5c5e3c53, __VMLINUX_SYMBOL_STR(ieee80211_disable_rssi_reports) },
	{ 0x3f0b9a6d, __VMLINUX_SYMBOL_STR(iwl_remove_notification) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x1c11c0f6, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xd82b8c30, __VMLINUX_SYMBOL_STR(ieee80211_request_smps) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x236e0eb8, __VMLINUX_SYMBOL_STR(iwl_set_bits_mask_prph) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xc8cbcc4e, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x45967358, __VMLINUX_SYMBOL_STR(iwl_opmode_register) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x74c84b58, __VMLINUX_SYMBOL_STR(ieee80211_resume_disconnect) },
	{ 0x5e55c2b0, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x700089b3, __VMLINUX_SYMBOL_STR(rate_control_send_low) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc0f4cc7e, __VMLINUX_SYMBOL_STR(ieee80211_scan_completed) },
	{ 0x2f0d5c07, __VMLINUX_SYMBOL_STR(iwl_wait_notification) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xaa157485, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_rx_p1k) },
	{ 0x2f67808e, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xcd7e80d6, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xce9cdc72, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x3a991442, __VMLINUX_SYMBOL_STR(__iwl_dbg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xf5032a20, __VMLINUX_SYMBOL_STR(iwl_init_notification_wait) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5d0d0e89, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8add7960, __VMLINUX_SYMBOL_STR(ieee80211_rate_control_register) },
	{ 0x36f42057, __VMLINUX_SYMBOL_STR(iwl_write_direct32) },
	{ 0x2d2fcea4, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9be1bbed, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x5400486, __VMLINUX_SYMBOL_STR(ieee80211_sta_block_awake) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8522d53f, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x2d5f99ad, __VMLINUX_SYMBOL_STR(ieee80211_ave_rssi) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x93f79b6c, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x860a9639, __VMLINUX_SYMBOL_STR(ieee80211_enable_rssi_reports) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x6a85e719, __VMLINUX_SYMBOL_STR(iwlwifi_mod_params) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x65bf2e07, __VMLINUX_SYMBOL_STR(__iwl_info) },
	{ 0xf27d13e9, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xddb47d52, __VMLINUX_SYMBOL_STR(ieee80211_get_key_rx_seq) },
	{ 0xafa7245c, __VMLINUX_SYMBOL_STR(ieee80211_iter_keys) },
	{ 0x1a776c90, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x224b156d, __VMLINUX_SYMBOL_STR(__iwl_warn) },
	{ 0xc7e9782e, __VMLINUX_SYMBOL_STR(ieee80211_get_key_tx_seq) },
	{ 0xefbfe9e5, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5a10d898, __VMLINUX_SYMBOL_STR(iwl_abort_notification_waits) },
	{ 0x717b2687, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x5c52e109, __VMLINUX_SYMBOL_STR(iwl_opmode_deregister) },
	{ 0x853d0e13, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x69aa03a3, __VMLINUX_SYMBOL_STR(ieee80211_rate_control_unregister) },
	{ 0x59ab009e, __VMLINUX_SYMBOL_STR(ieee80211_restart_hw) },
	{ 0x66528bd2, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x48b421f, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x5f8a2a28, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa1fc36c4, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xf99fb62b, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0xaf4b4652, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0xd818d197, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_p2k) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x4e035b74, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfc444ddd, __VMLINUX_SYMBOL_STR(iwl_parse_eeprom_data) },
	{ 0x194202ee, __VMLINUX_SYMBOL_STR(iwl_notification_wait_init) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb9804f7b, __VMLINUX_SYMBOL_STR(ieee80211_chswitch_done) },
	{ 0x86223ce7, __VMLINUX_SYMBOL_STR(ieee80211_report_wowlan_wakeup) },
	{ 0xd99437f7, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xe11f9eaa, __VMLINUX_SYMBOL_STR(iwl_notification_wait_notify) },
	{ 0x5c28cca5, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_p1k_iv) },
	{ 0x59db68c6, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xcccafe99, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_session) },
	{ 0x8e1cb9d5, __VMLINUX_SYMBOL_STR(iwl_read_eeprom) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=iwlwifi,mac80211,cfg80211";


MODULE_INFO(srcversion, "C07D4FCAF9309C73A58C6C9");
