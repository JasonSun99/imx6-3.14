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
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xcfa25984, __VMLINUX_SYMBOL_STR(saa7146_unregister_extension) },
	{ 0xaf26729c, __VMLINUX_SYMBOL_STR(saa7146_register_extension) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{        0, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x42ae73fd, __VMLINUX_SYMBOL_STR(saa7146_set_hps_source_and_sync) },
	{ 0xe69fa98d, __VMLINUX_SYMBOL_STR(saa7146_register_device) },
	{ 0x9f390af0, __VMLINUX_SYMBOL_STR(saa7146_vv_init) },
	{ 0x692ab938, __VMLINUX_SYMBOL_STR(ttpci_budget_init_hooks) },
	{ 0xbc929f48, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_init) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf6563eda, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xfa7075ac, __VMLINUX_SYMBOL_STR(ttpci_budget_init) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x17bc98f8, __VMLINUX_SYMBOL_STR(ttpci_budget_debiwrite) },
	{ 0x2ade9e7, __VMLINUX_SYMBOL_STR(dvb_frontend_reinitialise) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xcc8a39ca, __VMLINUX_SYMBOL_STR(ttpci_budget_debiread) },
	{ 0x20bfd57a, __VMLINUX_SYMBOL_STR(ttpci_budget_set_video_port) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xa600413d, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x53832a5d, __VMLINUX_SYMBOL_STR(saa7146_vv_release) },
	{ 0x58920729, __VMLINUX_SYMBOL_STR(saa7146_unregister_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb5895e4a, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_release) },
	{ 0x849ff420, __VMLINUX_SYMBOL_STR(saa7146_setgpio) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x864592f3, __VMLINUX_SYMBOL_STR(ttpci_budget_deinit) },
	{ 0x64648430, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x341369a3, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x7948c222, __VMLINUX_SYMBOL_STR(budget_debug) },
	{ 0x627280aa, __VMLINUX_SYMBOL_STR(ttpci_budget_irq10_handler) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7146,saa7146_vv,budget-core";

MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00004F56bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00000010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00000011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000014bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000015bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000018bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000019bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Dbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Ebc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Bbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000002Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000002Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000003Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000020bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000021bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000022bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000028bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000023bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000030bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000031bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001154bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001155bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001156bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001176bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001157bc*sc*i*");

MODULE_INFO(srcversion, "87B8ADE8F92BE2FBC1ABE10");
