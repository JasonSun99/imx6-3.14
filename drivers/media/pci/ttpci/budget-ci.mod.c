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
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xcfa25984, __VMLINUX_SYMBOL_STR(saa7146_unregister_extension) },
	{ 0xaf26729c, __VMLINUX_SYMBOL_STR(saa7146_register_extension) },
	{ 0xa600413d, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x24423106, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{        0, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xbc929f48, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_init) },
	{ 0x692ab938, __VMLINUX_SYMBOL_STR(ttpci_budget_init_hooks) },
	{ 0xf6563eda, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x3b0bb73d, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x514c2133, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0xfa7075ac, __VMLINUX_SYMBOL_STR(ttpci_budget_init) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x20bfd57a, __VMLINUX_SYMBOL_STR(ttpci_budget_set_video_port) },
	{ 0xe83c95a5, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_camready_irq) },
	{ 0x87b0bd37, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_camchange_irq) },
	{ 0x5ac3f44d, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_frda_irq) },
	{ 0xd1aa7a49, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0xcc8a39ca, __VMLINUX_SYMBOL_STR(ttpci_budget_debiread) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xb5895e4a, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_release) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x864592f3, __VMLINUX_SYMBOL_STR(ttpci_budget_deinit) },
	{ 0x64648430, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x341369a3, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xa1df927a, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x849ff420, __VMLINUX_SYMBOL_STR(saa7146_setgpio) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x17bc98f8, __VMLINUX_SYMBOL_STR(ttpci_budget_debiwrite) },
	{ 0x7948c222, __VMLINUX_SYMBOL_STR(budget_debug) },
	{ 0x627280aa, __VMLINUX_SYMBOL_STR(ttpci_budget_irq10_handler) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7146,budget-core";

MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000100Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000100Fbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001012bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001017bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001019bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Bbc*sc*i*");

MODULE_INFO(srcversion, "C68F106CE0395CEC26C8747");
