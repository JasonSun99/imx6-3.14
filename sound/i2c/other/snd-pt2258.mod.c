#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc2ca9c8b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x8f40b363, __VMLINUX_SYMBOL_STR(snd_i2c_sendbytes) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4c074ab7, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x2533e214, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x79a8a914, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-i2c";


MODULE_INFO(srcversion, "B2D011741FE2D4518CEE89C");
