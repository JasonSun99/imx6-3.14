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
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfafc9124, __VMLINUX_SYMBOL_STR(queue_ch_frame) },
	{ 0xdbf7f1bd, __VMLINUX_SYMBOL_STR(dchannel_senddata) },
	{ 0xbfaf9cbb, __VMLINUX_SYMBOL_STR(create_l1) },
	{ 0x7b657827, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x52737465, __VMLINUX_SYMBOL_STR(bchannel_senddata) },
	{ 0xfec2bcd0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x56f59ace, __VMLINUX_SYMBOL_STR(mISDN_ctrl_bchannel) },
	{ 0x7bd94bb9, __VMLINUX_SYMBOL_STR(mISDN_clear_bchannel) },
	{ 0x588886a6, __VMLINUX_SYMBOL_STR(l1_event) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x9267b50d, __VMLINUX_SYMBOL_STR(mISDN_unregister_device) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xceed7f85, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0x97ec1ff, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0xcfb3500f, __VMLINUX_SYMBOL_STR(mISDN_freedchannel) },
	{ 0xfd889345, __VMLINUX_SYMBOL_STR(mISDN_freebchannel) },
	{ 0xb8cf5fc9, __VMLINUX_SYMBOL_STR(mISDN_register_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe6c5e8fd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xd388bd46, __VMLINUX_SYMBOL_STR(mISDN_initbchannel) },
	{ 0x2891c495, __VMLINUX_SYMBOL_STR(mISDN_initdchannel) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xaaf11b11, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xe0d27574, __VMLINUX_SYMBOL_STR(get_next_bframe) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xaef6c518, __VMLINUX_SYMBOL_STR(get_next_dframe) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x2f2b1aa8, __VMLINUX_SYMBOL_STR(recv_Echannel) },
	{ 0xc59e0cbb, __VMLINUX_SYMBOL_STR(recv_Bchannel) },
	{ 0x62262fdd, __VMLINUX_SYMBOL_STR(recv_Dchannel) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x54ed38aa, __VMLINUX_SYMBOL_STR(bchannel_get_rxbuf) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mISDN_core";

MODULE_ALIAS("usb:v0959p2BD0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p1688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B0p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p200Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp0846d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp0847d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B0p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v071Dp1005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p0525d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "95EE4AEEDEFCDEDD44C74E3");
