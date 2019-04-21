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
	{ 0xe077a5c6, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd7c74004, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x96d56915, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xbf360c82, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x63697bf6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x40652fd5, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xdd424d97, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa600413d, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x46b33c55, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x70385421, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "A5399C7AECEC55CB3FDED78");
