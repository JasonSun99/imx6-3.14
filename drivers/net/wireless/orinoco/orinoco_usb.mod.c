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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa04db96d, __VMLINUX_SYMBOL_STR(orinoco_get_stats) },
	{ 0xb0508ba9, __VMLINUX_SYMBOL_STR(orinoco_tx_timeout) },
	{ 0x105600e, __VMLINUX_SYMBOL_STR(orinoco_change_mtu) },
	{ 0xb9d5ccb7, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x99d52924, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xa0c7fa, __VMLINUX_SYMBOL_STR(orinoco_set_multicast_list) },
	{ 0x62979400, __VMLINUX_SYMBOL_STR(orinoco_stop) },
	{ 0x619677ae, __VMLINUX_SYMBOL_STR(orinoco_open) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x3598234e, __VMLINUX_SYMBOL_STR(orinoco_if_add) },
	{ 0x791b019c, __VMLINUX_SYMBOL_STR(orinoco_init) },
	{ 0x32e8f353, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc3dffff3, __VMLINUX_SYMBOL_STR(alloc_orinocodev) },
	{ 0x2bcb9c1, __VMLINUX_SYMBOL_STR(__orinoco_ev_rx) },
	{ 0xde69cf1c, __VMLINUX_SYMBOL_STR(__orinoco_ev_info) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x487d1b7b, __VMLINUX_SYMBOL_STR(orinoco_process_xmit_skb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x34092e0a, __VMLINUX_SYMBOL_STR(free_orinocodev) },
	{ 0xed123c24, __VMLINUX_SYMBOL_STR(orinoco_if_del) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xbe2e88f1, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xea056cbd, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=orinoco";

MODULE_ALIAS("usb:v049Fp001Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0082d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v047Ep0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D98p0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D9Ep0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E7Cp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5002d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5B11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p7011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1630pFF81d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep047Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F69965839A93AB2D90484C5");
