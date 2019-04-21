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
	{ 0xaa1423cc, __VMLINUX_SYMBOL_STR(uwb_rc_put) },
	{ 0x8f9dd935, __VMLINUX_SYMBOL_STR(uwb_rc_get_by_grandpa) },
	{ 0xadf42bd5, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb725d128, __VMLINUX_SYMBOL_STR(wusb_cluster_id_put) },
	{ 0x287e1f4b, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xde4ca571, __VMLINUX_SYMBOL_STR(wusbhc_rh_control) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd3f164f2, __VMLINUX_SYMBOL_STR(__umc_driver_register) },
	{ 0x7effc13c, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xbcef2614, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xbb6bf5e, __VMLINUX_SYMBOL_STR(wusb_cluster_id_get) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xa769a64c, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xbc2de0f0, __VMLINUX_SYMBOL_STR(wusbhc_giveback_urb) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x7249299c, __VMLINUX_SYMBOL_STR(umc_driver_unregister) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfef5d28a, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xf54c51a2, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0xec8fd97a, __VMLINUX_SYMBOL_STR(wusbhc_rh_start_port_reset) },
	{ 0x33781598, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xfa2d48f3, __VMLINUX_SYMBOL_STR(whci_wait_for) },
	{ 0xb5b36d56, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x434152c4, __VMLINUX_SYMBOL_STR(wusbhc_b_destroy) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xee3496c3, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0x9bce482f, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7e5695eb, __VMLINUX_SYMBOL_STR(wusbhc_handle_dn) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd623af74, __VMLINUX_SYMBOL_STR(wusbhc_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe11fe076, __VMLINUX_SYMBOL_STR(wusbhc_create) },
	{ 0x573589e4, __VMLINUX_SYMBOL_STR(wusbhc_b_create) },
	{ 0x4feb36dd, __VMLINUX_SYMBOL_STR(wusbhc_rh_status_data) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x2b0422ba, __VMLINUX_SYMBOL_STR(wusbhc_reset_all) },
	{ 0xe0490eb3, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0x97451ebd, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x69e27c7a, __VMLINUX_SYMBOL_STR(bitmap_copy_le) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uwb,wusbcore,umc,whci";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Dsc10i10*");

MODULE_INFO(srcversion, "CF2EB38F85CE366156CB678");
