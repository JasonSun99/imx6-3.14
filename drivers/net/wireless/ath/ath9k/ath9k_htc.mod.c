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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbcfbdd57, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x9339079a, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x590686b9, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xe49e4e3c, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x267af57a, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4a7f381b, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x5b62f6aa, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x278b4996, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x42a469a6, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1c11c0f6, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x890f861d, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x168c7828, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xaa3b4eec, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x55adc05a, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x2da2e09c, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xbed41975, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xc8cbcc4e, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4bfb8ce3, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0xbab50135, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5e55c2b0, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x47520886, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x4c66be27, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x5552bd67, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0xae1013af, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x7a1c92ab, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x56950994, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2f67808e, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x4c358eff, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x81f3afb, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xce9cdc72, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x12e3275d, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd82d0986, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x8ff0f9b7, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x6882f63c, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0xbaf2eaaa, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x78b2b134, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xed8e87b, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x2d2fcea4, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xf7d914c1, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x59409bad, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x62e94aec, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x6211316c, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x4e2481d5, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9be1bbed, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3ca9c216, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x97d27874, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x4d1f4f3d, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xa3b719de, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x7f38af76, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0xbfe8d346, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x2854caf3, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x93f79b6c, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x3b99b8aa, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xeca8cd54, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xa865b375, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8245e779, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x76a8f781, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xd2981357, __VMLINUX_SYMBOL_STR(ath9k_cmn_count_streams) },
	{ 0xbea7b075, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf27d13e9, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x26a91c95, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x1a9b7a6c, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x502aa276, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0x1a776c90, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x49817110, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x940c0656, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x9cce3faf, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0x65771f1e, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x631cb93d, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6b46d01b, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0x8ab33516, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0xf29ad845, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x66528bd2, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x48b421f, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x5f8a2a28, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x31514e4f, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5f857ea1, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xec3dfaf7, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0xa1fc36c4, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xf99fb62b, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0x85466c2a, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0x5f2c2dbb, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x3434653f, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x4e035b74, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xd6bcce70, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x16e02202, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x95c06418, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x21dffee8, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xb48f304e, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x32e8f353, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xd99437f7, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x8996fc9e, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,ath9k_common,mac80211,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3EA4AD4CEA34A8D4745B376");
