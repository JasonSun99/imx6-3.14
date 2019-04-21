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
	{ 0xec8fd97a, __VMLINUX_SYMBOL_STR(wusbhc_rh_start_port_reset) },
	{ 0xde4ca571, __VMLINUX_SYMBOL_STR(wusbhc_rh_control) },
	{ 0x4feb36dd, __VMLINUX_SYMBOL_STR(wusbhc_rh_status_data) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x69e27c7a, __VMLINUX_SYMBOL_STR(bitmap_copy_le) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc543b60e, __VMLINUX_SYMBOL_STR(wa_process_errored_transfers_run) },
	{ 0xf4654c3f, __VMLINUX_SYMBOL_STR(wa_urb_enqueue_run) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x573589e4, __VMLINUX_SYMBOL_STR(wusbhc_b_create) },
	{ 0x33781598, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0x287e1f4b, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0xd58c68a9, __VMLINUX_SYMBOL_STR(wa_create) },
	{ 0xe11fe076, __VMLINUX_SYMBOL_STR(wusbhc_create) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfe2e17d7, __VMLINUX_SYMBOL_STR(wusb_et_name) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0x103e54cd, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x76a8f781, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xbcef2614, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbb6bf5e, __VMLINUX_SYMBOL_STR(wusb_cluster_id_get) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb725d128, __VMLINUX_SYMBOL_STR(wusb_cluster_id_put) },
	{ 0xc5a87c00, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0x4e32281, __VMLINUX_SYMBOL_STR(wa_urb_enqueue) },
	{ 0x711c7020, __VMLINUX_SYMBOL_STR(wa_urb_dequeue) },
	{ 0x146e6cf5, __VMLINUX_SYMBOL_STR(rpipe_ep_disable) },
	{ 0xa769a64c, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x7effc13c, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x434152c4, __VMLINUX_SYMBOL_STR(wusbhc_b_destroy) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1a9b7a6c, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x78302733, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0xaa1423cc, __VMLINUX_SYMBOL_STR(uwb_rc_put) },
	{ 0xd623af74, __VMLINUX_SYMBOL_STR(wusbhc_destroy) },
	{ 0xf25a4bb4, __VMLINUX_SYMBOL_STR(__wa_destroy) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wusbcore,wusb-wa,uwb";

MODULE_ALIAS("usb:v13DCp5310d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v13DCp5611d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc02ip01in*");

MODULE_INFO(srcversion, "F62EB235D97A42FCD435FC3");
