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
	{ 0x561ea89b, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x73d004e8, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xddca91a9, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xce7ade18, __VMLINUX_SYMBOL_STR(pcie_port_bus_type) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xff7a179, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xe58fb452, __VMLINUX_SYMBOL_STR(aer_irq) },
	{ 0x5927d0d9, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0xd53d0790, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x6da8c376, __VMLINUX_SYMBOL_STR(pci_find_ext_capability) },
	{ 0xf675a277, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xdc0ae967, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x46fb0199, __VMLINUX_SYMBOL_STR(pci_bus_set_ops) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "188B5D7778FE278F1BD9882");
