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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x6df8265a, __VMLINUX_SYMBOL_STR(mwifiex_cancel_hs) },
	{ 0xa53b170f, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xd248f106, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x52735aad, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x6f56cbf0, __VMLINUX_SYMBOL_STR(mwifiex_disable_auto_ds) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x3c31483a, __VMLINUX_SYMBOL_STR(mwifiex_process_sleep_confirm_resp) },
	{ 0x594e2008, __VMLINUX_SYMBOL_STR(mwifiex_main_process) },
	{ 0xbd8c29c3, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2d4cbbf6, __VMLINUX_SYMBOL_STR(mwifiex_add_card) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd561f199, __VMLINUX_SYMBOL_STR(mwifiex_deauthenticate) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7216ae0c, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x65d97b23, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x63b6fba, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xa3f89351, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x91c4c673, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4de0f479, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xc0bbe57d, __VMLINUX_SYMBOL_STR(mwifiex_handle_rx_packet) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x4b2a95f5, __VMLINUX_SYMBOL_STR(mwifiex_remove_card) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x58f32f5e, __VMLINUX_SYMBOL_STR(mwifiex_enable_hs) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x44f28999, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x7d246069, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf1664a98, __VMLINUX_SYMBOL_STR(mwifiex_init_shutdown_fw) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd118e3, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xb91c7f09, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x8457105a, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");

MODULE_INFO(srcversion, "C17670AA81A0B6DBC5BD2CE");
