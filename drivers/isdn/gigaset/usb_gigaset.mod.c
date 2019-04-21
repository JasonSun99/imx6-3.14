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
	{ 0x34a8b964, __VMLINUX_SYMBOL_STR(gigaset_m10x_input) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x974f7ee9, __VMLINUX_SYMBOL_STR(gigaset_shutdown) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xa0d0c411, __VMLINUX_SYMBOL_STR(gigaset_stop) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5d2803e0, __VMLINUX_SYMBOL_STR(gigaset_freedriver) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x15c28058, __VMLINUX_SYMBOL_STR(gigaset_initdriver) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x76620642, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x71138ed4, __VMLINUX_SYMBOL_STR(gigaset_blockdriver) },
	{ 0xa1d4b5a6, __VMLINUX_SYMBOL_STR(gigaset_initcs) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x76a8f781, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x1a9b7a6c, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x16b0363b, __VMLINUX_SYMBOL_STR(gigaset_skb_sent) },
	{ 0x43b745a5, __VMLINUX_SYMBOL_STR(gigaset_freecs) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcdc00aa0, __VMLINUX_SYMBOL_STR(gigaset_add_event) },
	{ 0xdf3cd922, __VMLINUX_SYMBOL_STR(gigaset_fill_inbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xd6bcce70, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8eff32df, __VMLINUX_SYMBOL_STR(gigaset_dbg_buffer) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x965a942b, __VMLINUX_SYMBOL_STR(gigaset_start) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x486593ad, __VMLINUX_SYMBOL_STR(gigaset_m10x_send_skb) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gigaset";

MODULE_ALIAS("usb:v0681p0009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "90BD2CD371B3832BD2C39B6");
