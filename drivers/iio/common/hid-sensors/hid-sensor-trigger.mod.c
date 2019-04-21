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
	{ 0xabbce39, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x76e3ad7c, __VMLINUX_SYMBOL_STR(iio_trigger_alloc) },
	{ 0x295f3626, __VMLINUX_SYMBOL_STR(sensor_hub_device_open) },
	{ 0x10ff6b09, __VMLINUX_SYMBOL_STR(sensor_hub_device_close) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5198633a, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0x6243877e, __VMLINUX_SYMBOL_STR(sensor_hub_set_feature) },
	{ 0x6703f64a, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x1e700719, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x8fe09b32, __VMLINUX_SYMBOL_STR(iio_trigger_free) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,hid-sensor-hub";


MODULE_INFO(srcversion, "4BA643AFB54788C770F7DFD");
