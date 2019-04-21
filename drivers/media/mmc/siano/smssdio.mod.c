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
	{ 0x43193fd3, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x37d91069, __VMLINUX_SYMBOL_STR(smsendian_handle_tx_message) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x31493990, __VMLINUX_SYMBOL_STR(smscore_getbuffer) },
	{ 0x22448fdd, __VMLINUX_SYMBOL_STR(smscore_onresponse) },
	{ 0x45284ae9, __VMLINUX_SYMBOL_STR(smsendian_handle_rx_message) },
	{ 0xaa871106, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xfa16a4de, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4e0d6bfb, __VMLINUX_SYMBOL_STR(smscore_start_device) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x52735aad, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xefd118e3, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xd248f106, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x6ae697bb, __VMLINUX_SYMBOL_STR(smscore_set_board_id) },
	{ 0xe1973c21, __VMLINUX_SYMBOL_STR(smscore_register_device) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8457105a, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xb91c7f09, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xa3f89351, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x7d246069, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xb71e6cb9, __VMLINUX_SYMBOL_STR(smscore_unregister_device) },
	{ 0x524f714c, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv";

MODULE_ALIAS("sdio:c*v039Ad5347*");
MODULE_ALIAS("sdio:c*v039Ad1100*");
MODULE_ALIAS("sdio:c*v039Ad0201*");
MODULE_ALIAS("sdio:c*v039Ad0300*");
MODULE_ALIAS("sdio:c*v039Ad0301*");
MODULE_ALIAS("sdio:c*v039Ad0302*");
MODULE_ALIAS("sdio:c*v039Ad0500*");
MODULE_ALIAS("sdio:c*v039Ad0600*");
MODULE_ALIAS("sdio:c*v039Ad0700*");
MODULE_ALIAS("sdio:c*v039Ad0800*");

MODULE_INFO(srcversion, "529BB8308E2822B0AFB542D");
