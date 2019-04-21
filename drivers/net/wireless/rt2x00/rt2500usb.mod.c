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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x7b933069, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0x650c8144, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0xe96570a, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0xd9345a9f, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x6647e637, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0xbb86cced, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x4e8226e6, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0xa76ec870, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0x834f22cb, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x77ef95d2, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xc899d522, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x1b4f812b, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xb3331e3e, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0xd9cdf44f, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0xf5b4f067, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0x3fc60df1, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xa2a602c6, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xee9b6622, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x6950529c, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x588dc244, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x63f1616b, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x70e8993e, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x37937498, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x669d58f9, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0x20508aba, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0xfa1ed8a6, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0xfaf6e9ee, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0xd0978049, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0x1f765edf, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5d338058, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0x4fe7b434, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa43d3d20, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8c695a09, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x94864080, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BEA9CB2F4433DD75913BC26");
