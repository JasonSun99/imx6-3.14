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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xb47559e0, __VMLINUX_SYMBOL_STR(rc_map_dibusb_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2d9c2097, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0x61e31887, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0x39b3a7eb, __VMLINUX_SYMBOL_STR(dibusb_rc_query) },
	{ 0xa600413d, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xad7f4c12, __VMLINUX_SYMBOL_STR(dibusb_pid_filter) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x38252c1c, __VMLINUX_SYMBOL_STR(dibusb2_0_power_ctrl) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xfc79b2af, __VMLINUX_SYMBOL_STR(dibusb_power_ctrl) },
	{ 0x298d15ab, __VMLINUX_SYMBOL_STR(dibusb_streaming_ctrl) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xe9453466, __VMLINUX_SYMBOL_STR(dibusb2_0_streaming_ctrl) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1df5d7a8, __VMLINUX_SYMBOL_STR(dibusb_i2c_algo) },
	{ 0x4b0e0c52, __VMLINUX_SYMBOL_STR(dibusb_pid_filter_ctrl) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{        0, __VMLINUX_SYMBOL_STR(__symbol_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb-dibusb-common,dvb-usb";

MODULE_ALIAS("usb:v14AAp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185BpD000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185BpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v145Fp010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p0BB8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p0BB9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap17DEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap17DFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0FA0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0FA1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BB8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BB9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1025p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1025p005Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1822p3201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1822p3202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8107d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pA333d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pA334d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p701Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p701Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB2Ap17DEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9712BBB920611F5B9A01A9C");
