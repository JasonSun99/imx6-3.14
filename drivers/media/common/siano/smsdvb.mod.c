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
	{ 0x85c332b, __VMLINUX_SYMBOL_STR(smscore_register_hotplug) },
	{ 0x22c4272f, __VMLINUX_SYMBOL_STR(smscore_get_board_id) },
	{ 0xb96384e7, __VMLINUX_SYMBOL_STR(sms_board_setup) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1ca42c10, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x6e43336d, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xafc7fc05, __VMLINUX_SYMBOL_STR(sms_board_event) },
	{ 0xf6563eda, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xbbdb5c42, __VMLINUX_SYMBOL_STR(smscore_unregister_client) },
	{ 0x341369a3, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x63222b29, __VMLINUX_SYMBOL_STR(smsclient_sendrequest) },
	{ 0xec73ff5c, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x14543a8a, __VMLINUX_SYMBOL_STR(sms_board_lna_control) },
	{ 0x11d51648, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfc49ef27, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x524f714c, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x701fa0fa, __VMLINUX_SYMBOL_STR(smscore_unregister_hotplug) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0x88faae87, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x29f6f218, __VMLINUX_SYMBOL_STR(sms_board_power) },
	{ 0xd49bd599, __VMLINUX_SYMBOL_STR(sms_board_led_feedback) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xe464a49c, __VMLINUX_SYMBOL_STR(smscore_register_client) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x3485559a, __VMLINUX_SYMBOL_STR(smscore_get_device_mode) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xc299480b, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv";


MODULE_INFO(srcversion, "7C30E920CEC2BC4DC4EFA75");
