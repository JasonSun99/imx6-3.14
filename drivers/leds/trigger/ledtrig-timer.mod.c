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
	{ 0xe1398347, __VMLINUX_SYMBOL_STR(led_trigger_unregister) },
	{ 0x67a65aa5, __VMLINUX_SYMBOL_STR(led_trigger_register) },
	{ 0x86e0c1a8, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4b325e96, __VMLINUX_SYMBOL_STR(led_blink_set) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x87bc9249, __VMLINUX_SYMBOL_STR(led_set_brightness) },
	{ 0x3062bc5, __VMLINUX_SYMBOL_STR(device_remove_file) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C283CC7CEB7C31E388A59A0");
