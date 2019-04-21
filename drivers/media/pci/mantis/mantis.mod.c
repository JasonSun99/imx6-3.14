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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfba96ab1, __VMLINUX_SYMBOL_STR(mantis_stream_control) },
	{ 0xdf3af889, __VMLINUX_SYMBOL_STR(mantis_i2c_exit) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xebb95f73, __VMLINUX_SYMBOL_STR(mantis_gpio_set_bits) },
	{ 0xa600413d, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x32b13f94, __VMLINUX_SYMBOL_STR(mantis_dvb_init) },
	{ 0xafe58858, __VMLINUX_SYMBOL_STR(mantis_i2c_init) },
	{ 0xece03c32, __VMLINUX_SYMBOL_STR(mantis_pci_exit) },
	{ 0xa586cdf6, __VMLINUX_SYMBOL_STR(mantis_uart_exit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x59490e04, __VMLINUX_SYMBOL_STR(mantis_get_mac) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xc92bcf88, __VMLINUX_SYMBOL_STR(mantis_dma_init) },
	{ 0xb9f4bf59, __VMLINUX_SYMBOL_STR(mantis_dma_exit) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb7af7830, __VMLINUX_SYMBOL_STR(mantis_pci_init) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x5593f41e, __VMLINUX_SYMBOL_STR(mantis_frontend_power) },
	{ 0xc66efbcb, __VMLINUX_SYMBOL_STR(mantis_frontend_soft_reset) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{        0, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x8373b142, __VMLINUX_SYMBOL_STR(mantis_uart_init) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x426e4f45, __VMLINUX_SYMBOL_STR(mantis_dvb_exit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mantis_core";

MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000014bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000031bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv0000153Bsd00001179bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000043bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv0000153Bsd00001178bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000024bc*sc*i*");

MODULE_INFO(srcversion, "39739780EDB73D395951E4A");
