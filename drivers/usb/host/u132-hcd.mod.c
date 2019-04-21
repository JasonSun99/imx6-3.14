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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xee1068d0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xf004ff4b, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xcbaae858, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x11d5f40b, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_edset_empty) },
	{ 0x5a1100ff, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_edset_setup) },
	{ 0xf6ea357d, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_edset_output) },
	{ 0x33ae9b52, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_edset_single) },
	{ 0x7ce653c7, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_edset_flush) },
	{ 0x68b69e53, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_edset_input) },
	{ 0x7effc13c, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x33781598, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0x287e1f4b, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xbcef2614, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0x61b523eb, __VMLINUX_SYMBOL_STR(ftdi_elan_gone_away) },
	{ 0xc422d0ca, __VMLINUX_SYMBOL_STR(usb_hc_died) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xfef5d28a, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb7494169, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0xe0490eb3, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0xb5b36d56, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x42e578a0, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_write_pcimem) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbbfafbb9, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_read_pcimem) },
	{ 0xa769a64c, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ftdi-elan";


MODULE_INFO(srcversion, "399169DCEA42119E6FF4CAA");