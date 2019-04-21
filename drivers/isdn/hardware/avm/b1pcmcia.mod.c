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
	{ 0x492db3ec, __VMLINUX_SYMBOL_STR(b1ctl_proc_fops) },
	{ 0x217db965, __VMLINUX_SYMBOL_STR(attach_capi_ctr) },
	{ 0xfa10fee4, __VMLINUX_SYMBOL_STR(b1_interrupt) },
	{ 0xe7818c35, __VMLINUX_SYMBOL_STR(b1_send_message) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x9f823278, __VMLINUX_SYMBOL_STR(register_capi_driver) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3dac19f3, __VMLINUX_SYMBOL_STR(b1_release_appl) },
	{ 0x1ba9748c, __VMLINUX_SYMBOL_STR(b1_reset_ctr) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4403fcf, __VMLINUX_SYMBOL_STR(unregister_capi_driver) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x61b15687, __VMLINUX_SYMBOL_STR(b1_free_card) },
	{ 0x9999d37a, __VMLINUX_SYMBOL_STR(b1_load_firmware) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x8a7b72d1, __VMLINUX_SYMBOL_STR(b1_register_appl) },
	{ 0xdfd28376, __VMLINUX_SYMBOL_STR(b1_detect) },
	{ 0xb27193ba, __VMLINUX_SYMBOL_STR(b1_getrevision) },
	{ 0xe85501af, __VMLINUX_SYMBOL_STR(detach_capi_ctr) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1446dfdb, __VMLINUX_SYMBOL_STR(b1_alloc_card) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=b1,kernelcapi";


MODULE_INFO(srcversion, "B4F84DA6F82D3BDCE3190B1");
