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
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xebee08d4, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0x19088f8a, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0x66df957, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0xc0c4332c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x6abe4e61, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x39cf8e1e, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x91c4c673, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9bf96959, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0x57aa2713, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xe8180a53, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1c0b4f81, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0x5b1055f3, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0xf675a277, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xe6f46c85, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x4de0f479, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD9F522EDpbC3901202pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD9F522EDpbACE80909pc*pd*");

MODULE_INFO(srcversion, "F7F49D03FA68598F00DDE4C");
