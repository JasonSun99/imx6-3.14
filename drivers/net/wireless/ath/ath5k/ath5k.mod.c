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
	{ 0x394778b, __VMLINUX_SYMBOL_STR(ieee80211_rts_duration) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xaac451e0, __VMLINUX_SYMBOL_STR(pci_release_region) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x42a469a6, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1c11c0f6, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xa911bbd6, __VMLINUX_SYMBOL_STR(pci_match_id) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x2da2e09c, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xc8cbcc4e, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0xbab50135, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x5e55c2b0, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x47520886, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0xb2b7c4e1, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2f67808e, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xcd7e80d6, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xce9cdc72, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe6f46c85, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5d0d0e89, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0xadaec9e7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x2d2fcea4, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x6211316c, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x4e2481d5, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9be1bbed, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xa3b719de, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x7f38af76, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0xbfe8d346, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7a27c184, __VMLINUX_SYMBOL_STR(ewma_init) },
	{ 0x501762a7, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0xf8cc85e2, __VMLINUX_SYMBOL_STR(ath_hw_get_listen_time) },
	{ 0x53358ce3, __VMLINUX_SYMBOL_STR(ath_regd_get_band_ctl) },
	{ 0x10b56f33, __VMLINUX_SYMBOL_STR(__ieee80211_get_rx_led_name) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf27d13e9, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd4ae5461, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0xdfedd146, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0x49817110, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xadf0adb9, __VMLINUX_SYMBOL_STR(__ieee80211_get_tx_led_name) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x319c6026, __VMLINUX_SYMBOL_STR(ath_is_49ghz_allowed) },
	{ 0x631cb93d, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x717b2687, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0xa8268b07, __VMLINUX_SYMBOL_STR(ieee80211_generic_frame_duration) },
	{ 0x8ab33516, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x761f0229, __VMLINUX_SYMBOL_STR(ieee80211_ctstoself_duration) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x48b421f, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x5f8a2a28, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5f857ea1, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf99fb62b, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0x7a8bfbdf, __VMLINUX_SYMBOL_STR(ath_rxbuf_alloc) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x4e035b74, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x57aa2713, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x21dffee8, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xe66c40b, __VMLINUX_SYMBOL_STR(ath_hw_keyreset) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x3196432b, __VMLINUX_SYMBOL_STR(pci_request_region) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xa14f3d8c, __VMLINUX_SYMBOL_STR(ewma_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211,ath";

MODULE_ALIAS("pci:v0000168Cd00000207sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000A727d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00001014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000FF1Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F1B02085EF17AA3008D9ACF");
