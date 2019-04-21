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
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xba0e52f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x2e023c7b, __VMLINUX_SYMBOL_STR(flexcop_device_initialize) },
	{ 0x8a60eee3, __VMLINUX_SYMBOL_STR(flexcop_device_kfree) },
	{ 0x2595d82f, __VMLINUX_SYMBOL_STR(flexcop_sram_ctrl) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe6c5e8fd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x2c8cffdd, __VMLINUX_SYMBOL_STR(flexcop_device_kmalloc) },
	{ 0x92881b76, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x903bdc12, __VMLINUX_SYMBOL_STR(flexcop_sram_set_dest) },
	{ 0xb0ac06a3, __VMLINUX_SYMBOL_STR(flexcop_pass_dmx_packets) },
	{ 0xd2bed9f9, __VMLINUX_SYMBOL_STR(flexcop_wan_set_speed) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8896f044, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x8d3ca47a, __VMLINUX_SYMBOL_STR(flexcop_device_exit) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=b2c2-flexcop";

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DB2087B036660CCF1B98B58");
