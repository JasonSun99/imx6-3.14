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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x44dbadf2, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf0a16657, __VMLINUX_SYMBOL_STR(FsmNew) },
	{ 0x59cc8a7e, __VMLINUX_SYMBOL_STR(isdnhdlc_out_init) },
	{ 0x4b432e53, __VMLINUX_SYMBOL_STR(usb_reset_endpoint) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe8fc8eac, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xbe2e88f1, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x7f29ce36, __VMLINUX_SYMBOL_STR(FsmInitTimer) },
	{ 0x148f0c99, __VMLINUX_SYMBOL_STR(FsmFree) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfd9d4c09, __VMLINUX_SYMBOL_STR(isdnhdlc_encode) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe6c5e8fd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x8ee38862, __VMLINUX_SYMBOL_STR(isdnhdlc_rcv_init) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x93a64734, __VMLINUX_SYMBOL_STR(FsmChangeState) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x3b71e4fc, __VMLINUX_SYMBOL_STR(isdnhdlc_decode) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xee93522c, __VMLINUX_SYMBOL_STR(hisax_register) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe227344e, __VMLINUX_SYMBOL_STR(FsmRestartTimer) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7f4f2ce, __VMLINUX_SYMBOL_STR(hisax_unregister) },
	{ 0x16e02202, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xc5a87c00, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0x9df0cd27, __VMLINUX_SYMBOL_STR(FsmEvent) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xff2db2cf, __VMLINUX_SYMBOL_STR(FsmDelTimer) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hisax,isdnhdlc";

MODULE_ALIAS("usb:v0483p4810d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4814d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4816d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4817d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4818d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4819d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EF0B523F3B1FD5D3954F592");
