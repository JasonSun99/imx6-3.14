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
	{ 0x65d97b23, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x44f28999, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x32e8f353, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xefd118e3, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x52735aad, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xdf532846, __VMLINUX_SYMBOL_STR(btmrvl_register_hdev) },
	{ 0x29076069, __VMLINUX_SYMBOL_STR(btmrvl_add_card) },
	{ 0xd248f106, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7c640527, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x80a16367, __VMLINUX_SYMBOL_STR(btmrvl_send_module_cfg_cmd) },
	{ 0xc9de9e42, __VMLINUX_SYMBOL_STR(btmrvl_remove_card) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x23c0fb1d, __VMLINUX_SYMBOL_STR(btmrvl_check_evtpkt) },
	{ 0xea313f34, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{  0x95eef, __VMLINUX_SYMBOL_STR(btmrvl_process_event) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7216ae0c, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa53b170f, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8b68c79f, __VMLINUX_SYMBOL_STR(btmrvl_interrupt) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfa16a4de, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xb91c7f09, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xa3f89351, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x8457105a, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xac9cd308, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x7d246069, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x63b6fba, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xaaf11b11, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x98197155, __VMLINUX_SYMBOL_STR(hci_suspend_dev) },
	{ 0x27583305, __VMLINUX_SYMBOL_STR(btmrvl_enable_hs) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb61a0c3b, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xfa4a6e23, __VMLINUX_SYMBOL_STR(hci_resume_dev) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbd8c29c3, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd912E*");

MODULE_INFO(srcversion, "83C3ED1B4CAD2E375EF24E6");
