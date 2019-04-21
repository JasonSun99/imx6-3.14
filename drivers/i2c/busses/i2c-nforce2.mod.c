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
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x186df290, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xcbc67b56, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xadf42bd5, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x59d8223a, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9bce482f, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x23c33db9, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010DEd00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000264sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000542sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000752sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AA2sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ED130B47D2F56873772E4A6");
