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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5bce44c5, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe4c184c0, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x58de3f5d, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0xc5ecc17a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0xbf360c82, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xcb59da52, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0xc85566c6, __VMLINUX_SYMBOL_STR(gspca_coarse_grained_expo_autogain) },
	{ 0x5532fb20, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xe1df198b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x5f0e647, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0x63697bf6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v041Ep4028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2460d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2461d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2463d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2464d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2468d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2470d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2471d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2472d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2474d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2476d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v145Fp013Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001pF115d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "885BB1120E41B637D9A5AE4");