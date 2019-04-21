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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x215d20da, __VMLINUX_SYMBOL_STR(cfg80211_rx_unprot_mlme_mgmt) },
	{ 0xa6977ee9, __VMLINUX_SYMBOL_STR(cfg80211_auth_timeout) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbaff3a71, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x809a5cb6, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4b36de70, __VMLINUX_SYMBOL_STR(cfg80211_cqm_rssi_notify) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xab6babaf, __VMLINUX_SYMBOL_STR(pm_qos_request) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x412c6dc8, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0xccf29342, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0xfed4d591, __VMLINUX_SYMBOL_STR(cfg80211_find_vendor_ie) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x1879fcbd, __VMLINUX_SYMBOL_STR(bridge_tunnel_header) },
	{ 0x811581d7, __VMLINUX_SYMBOL_STR(cfg80211_radar_event) },
	{ 0x1ee8e1da, __VMLINUX_SYMBOL_STR(led_trigger_event) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x19e03378, __VMLINUX_SYMBOL_STR(cfg80211_get_p2p_attr) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd6195785, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xa197b1ff, __VMLINUX_SYMBOL_STR(ieee80211_get_mesh_hdrlen) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x9409ac71, __VMLINUX_SYMBOL_STR(cfg80211_report_wowlan_wakeup) },
	{ 0x87bc9249, __VMLINUX_SYMBOL_STR(led_set_brightness) },
	{ 0xc15c8611, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0x61facbab, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x7a188791, __VMLINUX_SYMBOL_STR(prandom_bytes) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x16053804, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb622c2cd, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x67a65aa5, __VMLINUX_SYMBOL_STR(led_trigger_register) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x9ffbceb1, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x4b325e96, __VMLINUX_SYMBOL_STR(led_blink_set) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x1a7addc3, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc63f1b81, __VMLINUX_SYMBOL_STR(ieee80211_radiotap_iterator_next) },
	{ 0x9ef5efce, __VMLINUX_SYMBOL_STR(ieee80211_data_to_8023) },
	{ 0x9581f24e, __VMLINUX_SYMBOL_STR(cfg80211_probe_status) },
	{ 0xe1cd1591, __VMLINUX_SYMBOL_STR(cfg80211_del_sta) },
	{ 0x2c55d86, __VMLINUX_SYMBOL_STR(cfg80211_unregister_wdev) },
	{ 0x7fe1a403, __VMLINUX_SYMBOL_STR(cfg80211_find_ie) },
	{ 0x4881d505, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x1a2973d5, __VMLINUX_SYMBOL_STR(cfg80211_reg_can_beacon) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x2d48aa00, __VMLINUX_SYMBOL_STR(cfg80211_check_station_change) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x7ba7c9f5, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x6b5d93d7, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xb2c5fa92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x865029ac, __VMLINUX_SYMBOL_STR(__hw_addr_sync) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x69b18f43, __VMLINUX_SYMBOL_STR(rfc1042_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xaaf11b11, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5a974dc8, __VMLINUX_SYMBOL_STR(cfg80211_chandef_usable) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x710d8ef6, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xa1186816, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x5d891a64, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x788ffa2b, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xaf91d89f, __VMLINUX_SYMBOL_STR(__kernel_param_lock) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x502e519, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped_rtnl) },
	{ 0x170de57e, __VMLINUX_SYMBOL_STR(cfg80211_notify_new_peer_candidate) },
	{ 0x982e6b6d, __VMLINUX_SYMBOL_STR(ieee80211_radiotap_iterator_init) },
	{ 0xe1398347, __VMLINUX_SYMBOL_STR(led_trigger_unregister) },
	{ 0x1e5b03dc, __VMLINUX_SYMBOL_STR(pm_qos_add_notifier) },
	{ 0xa78b8230, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x7a273363, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x279a1854, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6d6cb9ad, __VMLINUX_SYMBOL_STR(ieee80211_operating_class_to_band) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xbae37de, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xf22a44b2, __VMLINUX_SYMBOL_STR(cfg80211_cqm_pktloss_notify) },
	{ 0x89912a0c, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xe3ecd638, __VMLINUX_SYMBOL_STR(cfg80211_report_obss_beacon) },
	{ 0xdc3fcbc9, __VMLINUX_SYMBOL_STR(__sw_hweight8) },
	{ 0xf74dae0f, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xee42db3c, __VMLINUX_SYMBOL_STR(cfg80211_chandef_compatible) },
	{ 0x771e7649, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x57d45ff9, __VMLINUX_SYMBOL_STR(cfg80211_rx_spurious_frame) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xd7119aba, __VMLINUX_SYMBOL_STR(cfg80211_assoc_timeout) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xdf401846, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x4c40b2fb, __VMLINUX_SYMBOL_STR(ieee80211_bss_get_ie) },
	{ 0xfec2bcd0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x3b99b8aa, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x5ae18634, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x3a39e62d, __VMLINUX_SYMBOL_STR(cfg80211_gtk_rekey_notify) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7a27c184, __VMLINUX_SYMBOL_STR(ewma_init) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc997318, __VMLINUX_SYMBOL_STR(cfg80211_tx_mlme_mgmt) },
	{ 0xf1806da9, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x26bd10dc, __VMLINUX_SYMBOL_STR(cfg80211_ch_switch_notify) },
	{ 0xdf25bcdd, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x7fa9b09d, __VMLINUX_SYMBOL_STR(wiphy_new) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x89a363c1, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xbacdc72a, __VMLINUX_SYMBOL_STR(cfg80211_rx_mlme_mgmt) },
	{ 0x72f8faf7, __VMLINUX_SYMBOL_STR(cfg80211_classify8021d) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xcae6a35a, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_width_frame) },
	{ 0xb08522e6, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x74ce05b8, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xd6be4c96, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xfa223de7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xe107f1fd, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0xcf618a57, __VMLINUX_SYMBOL_STR(cfg80211_calculate_bitrate) },
	{ 0xd11c0dc1, __VMLINUX_SYMBOL_STR(__kernel_param_unlock) },
	{ 0xefbfe9e5, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x5fc71f69, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x96b6f4b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xc12af069, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x24cbe3a1, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x406a8302, __VMLINUX_SYMBOL_STR(cfg80211_chandef_valid) },
	{ 0xce46e140, __VMLINUX_SYMBOL_STR(ktime_get_ts) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x62d58b5d, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x18b1dbb8, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x6d27ef64, __VMLINUX_SYMBOL_STR(__bitmap_empty) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xdb5b4908, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xd01b60f1, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0xb7b61546, __VMLINUX_SYMBOL_STR(crc32_be) },
	{ 0x549ae50f, __VMLINUX_SYMBOL_STR(ieee80211_mandatory_rates) },
	{ 0xca922026, __VMLINUX_SYMBOL_STR(cfg80211_ref_bss) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x3e9110fa, __VMLINUX_SYMBOL_STR(__hw_addr_unsync) },
	{ 0xc6a63768, __VMLINUX_SYMBOL_STR(ieee80211_amsdu_to_8023s) },
	{ 0x14450ef, __VMLINUX_SYMBOL_STR(led_trigger_blink_oneshot) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xd6bcce70, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x71cac5ec, __VMLINUX_SYMBOL_STR(cfg80211_cac_event) },
	{ 0xf3d314f7, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0xbcac6160, __VMLINUX_SYMBOL_STR(pm_qos_remove_notifier) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xea056cbd, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x248c486, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x57674fd7, __VMLINUX_SYMBOL_STR(__sw_hweight16) },
	{ 0xba54cc65, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x8945259, __VMLINUX_SYMBOL_STR(cfg80211_chandef_dfs_required) },
	{ 0xa77a369d, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0xa249c090, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x99d52924, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xc5c7094f, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x1a4e4a2c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x7b657827, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x739427d9, __VMLINUX_SYMBOL_STR(cfg80211_rx_unexpected_4addr_frame) },
	{ 0x7a2723d5, __VMLINUX_SYMBOL_STR(cfg80211_rx_assoc_resp) },
	{ 0xf389fe60, __VMLINUX_SYMBOL_STR(__hw_addr_init) },
	{ 0x38c63d28, __VMLINUX_SYMBOL_STR(skb_complete_wifi_ack) },
	{ 0x618f72b7, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_results) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0xa14f3d8c, __VMLINUX_SYMBOL_STR(ewma_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "9AB358C11B4915B4D94E10E");
