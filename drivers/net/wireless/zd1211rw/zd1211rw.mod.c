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
	{ 0xffc6c11a, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xef66075c, __VMLINUX_SYMBOL_STR(usb_wait_anchor_empty_timeout) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xc8cbcc4e, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe8fc8eac, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0x5e55c2b0, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x39f3e1eb, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0x2f67808e, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x4c358eff, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xc68aa090, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x2d2fcea4, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x92881b76, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x3ebcce5b, __VMLINUX_SYMBOL_STR(usb_queue_reset_device) },
	{ 0x3b99b8aa, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1db7c3cf, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x26a91c95, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x384b88, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x49817110, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x940c0656, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x103e54cd, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x48b421f, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5f857ea1, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf99fb62b, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x4e035b74, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xd6bcce70, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8896f044, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x32e8f353, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x8996fc9e, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x78302733, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0x3ef6a0b8, __VMLINUX_SYMBOL_STR(ieee80211_queue_stopped) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

MODULE_ALIAS("usb:v0105p145Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3407d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3409d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p6001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEpA211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p170Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1630d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp5630d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p9075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v126FpA006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp1666d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep300Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep300Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6891pA727d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0053p5301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00DAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p1236d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p1237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0257d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p340Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p340Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3412d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3413d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p6001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp1196d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApE501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApE503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApE506d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEpB215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p171Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp1667d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep300Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1582p6003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp2011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "34B2BA616FB7EB68B3087A0");
