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
	{ 0x99468910, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x1e2a1da5, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x1c11c0f6, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8f1c39a6, __VMLINUX_SYMBOL_STR(power_supply_powers) },
	{ 0xd7c6bd99, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0x86e0c1a8, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xfe68072c, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0xbbec8e99, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5527ff04, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0xc105c4ca, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x3062bc5, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5f8a2a28, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5532fb20, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5b130c00, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x5d40d24c, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0005g*v0000056Ap00000081");
MODULE_ALIAS("hid:b0005g*v0000056Ap000000BD");

MODULE_INFO(srcversion, "A3B65CC6872619DA447E280");
