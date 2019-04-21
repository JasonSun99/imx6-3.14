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
	{ 0x4403fcf, __VMLINUX_SYMBOL_STR(unregister_capi_driver) },
	{ 0x9f823278, __VMLINUX_SYMBOL_STR(register_capi_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd6112b78, __VMLINUX_SYMBOL_STR(b1dmactl_proc_fops) },
	{ 0x88e7f784, __VMLINUX_SYMBOL_STR(b1dma_send_message) },
	{ 0xd5aeea7e, __VMLINUX_SYMBOL_STR(b1dma_release_appl) },
	{ 0x4af1a53f, __VMLINUX_SYMBOL_STR(b1dma_register_appl) },
	{ 0x3fa4835d, __VMLINUX_SYMBOL_STR(b1dma_load_firmware) },
	{ 0xd6f9f1ea, __VMLINUX_SYMBOL_STR(b1dma_interrupt) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x217db965, __VMLINUX_SYMBOL_STR(attach_capi_ctr) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x46955a4c, __VMLINUX_SYMBOL_STR(b1dma_reset_ctr) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xc1c811b0, __VMLINUX_SYMBOL_STR(t1pci_detect) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xadf42bd5, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x6c571396, __VMLINUX_SYMBOL_STR(avmcard_dma_alloc) },
	{ 0x1446dfdb, __VMLINUX_SYMBOL_STR(b1_alloc_card) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x61b15687, __VMLINUX_SYMBOL_STR(b1_free_card) },
	{ 0xf7d3c806, __VMLINUX_SYMBOL_STR(avmcard_dma_free) },
	{ 0x9bce482f, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x59d8223a, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe85501af, __VMLINUX_SYMBOL_STR(detach_capi_ctr) },
	{ 0x695cef4b, __VMLINUX_SYMBOL_STR(b1dma_reset) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1dma,b1";

MODULE_ALIAS("pci:v00001244d00001200sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EBC22941C17FA965CAE979D");
