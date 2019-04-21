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
	{ 0xadf42bd5, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x11dc4b6d, __VMLINUX_SYMBOL_STR(bttv_gpio_enable) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5ab2090c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x8ecf4acc, __VMLINUX_SYMBOL_STR(bttv_write_gpio) },
	{ 0x9bce482f, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xbcf2d2fb, __VMLINUX_SYMBOL_STR(bttv_read_gpio) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bttv";

MODULE_ALIAS("pci:v0000109Ed00000878sv00000071sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001461sd00000761bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000011BDsd0000001Cbc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000011BDsd00000026bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001822sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv0000270Fsd0000FC00bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001461sd00000771bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000018ACsd0000DB10bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000018ACsd0000DB11bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000018ACsd0000D500bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00007063sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001822sd00000026bc*sc*i*");

MODULE_INFO(srcversion, "6753AD431307F0BB428C16B");
