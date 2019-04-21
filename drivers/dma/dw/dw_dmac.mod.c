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
	{ 0xab80e049, __VMLINUX_SYMBOL_STR(dw_dma_shutdown) },
	{ 0xc66f9f18, __VMLINUX_SYMBOL_STR(dw_dma_suspend) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xf09c0b26, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xfa4d3cf4, __VMLINUX_SYMBOL_STR(dw_dma_probe) },
	{ 0xcbaae858, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xb857c8fd, __VMLINUX_SYMBOL_STR(of_dma_controller_register) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x43632d7d, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x4473389, __VMLINUX_SYMBOL_STR(dw_dma_remove) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc65cf6fd, __VMLINUX_SYMBOL_STR(dw_dma_resume) },
	{ 0xa7947bc, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x7bdcfcdc, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xc5bc1f56, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xfe112dc, __VMLINUX_SYMBOL_STR(of_dma_controller_free) },
	{ 0xee1068d0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dw_dmac_core";

MODULE_ALIAS("of:N*T*Csnps,dma-spear1340*");

MODULE_INFO(srcversion, "6F906E199F79A6C47FAB9FF");
