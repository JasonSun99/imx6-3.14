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
	{ 0xe4c184c0, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x58de3f5d, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0xbf360c82, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xcb59da52, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe6c5e8fd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5f0e647, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0x63697bf6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v040Ap0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep400Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0890d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p300Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp7333d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BDp0404d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp0800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v084Dp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2899p012Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0630d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D7A733C2E73F78FAFFB28F6");