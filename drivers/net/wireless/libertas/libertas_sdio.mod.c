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
	{ 0xac9cd308, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xfa16a4de, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2eb94036, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x90f13784, __VMLINUX_SYMBOL_STR(lbs_resume) },
	{ 0xa53b170f, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xd248f106, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x52735aad, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x263608bc, __VMLINUX_SYMBOL_STR(lbs_stop_card) },
	{ 0xbbee30bb, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x2273189c, __VMLINUX_SYMBOL_STR(netdev_alert) },
	{ 0x6412a80e, __VMLINUX_SYMBOL_STR(__lbs_cmd) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbd8c29c3, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb367aa66, __VMLINUX_SYMBOL_STR(lbs_start_card) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x56ead6a1, __VMLINUX_SYMBOL_STR(lbs_queue_event) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xaa9f9a7c, __VMLINUX_SYMBOL_STR(lbs_get_firmware_async) },
	{ 0x706cdfa0, __VMLINUX_SYMBOL_STR(lbs_cmd_copyback) },
	{ 0xbbdc5fb6, __VMLINUX_SYMBOL_STR(lbs_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x7216ae0c, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x65d97b23, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x22adc267, __VMLINUX_SYMBOL_STR(lbs_remove_card) },
	{ 0x8e3d001d, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x63b6fba, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x996fb3d1, __VMLINUX_SYMBOL_STR(lbs_process_rxed_packet) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xa3f89351, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xa804f642, __VMLINUX_SYMBOL_STR(lbs_host_to_card_done) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x7efe26a9, __VMLINUX_SYMBOL_STR(sdio_align_size) },
	{ 0x93d8f580, __VMLINUX_SYMBOL_STR(lbs_add_card) },
	{ 0xafa339c2, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x91c4c673, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x62bd7e64, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x4de0f479, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x44f28999, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x7d246069, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd118e3, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xb91c7f09, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x8457105a, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x34c43795, __VMLINUX_SYMBOL_STR(lbs_notify_command_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas";

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "1927269AF732A22BD9E00ED");
