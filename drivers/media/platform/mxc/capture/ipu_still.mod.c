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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5ee70011, __VMLINUX_SYMBOL_STR(ipu_init_channel_buffer) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9ccd80a7, __VMLINUX_SYMBOL_STR(ipu_enable_channel) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc69680be, __VMLINUX_SYMBOL_STR(ipu_disable_csi) },
	{ 0xa760a605, __VMLINUX_SYMBOL_STR(ipu_clear_irq) },
	{ 0xa369696, __VMLINUX_SYMBOL_STR(ipu_channel_request) },
	{ 0x715d4d9a, __VMLINUX_SYMBOL_STR(ipu_free_irq) },
	{ 0x1ab58a53, __VMLINUX_SYMBOL_STR(ipu_channel_disable) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1ffc532e, __VMLINUX_SYMBOL_STR(ipu_enable_csi) },
	{ 0xb4fe225d, __VMLINUX_SYMBOL_STR(ipu_select_buffer) },
	{ 0xde4e4647, __VMLINUX_SYMBOL_STR(ipu_channel_free) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x9fd60c37, __VMLINUX_SYMBOL_STR(ipu_request_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "61C45362668D5FF49320ED6");
