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
	{ 0x554408fa, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x95c11c30, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf37a848f, __VMLINUX_SYMBOL_STR(st_magn_common_probe) },
	{ 0x62239ccc, __VMLINUX_SYMBOL_STR(st_sensors_spi_configure) },
	{ 0x70704e60, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc1ed1f7d, __VMLINUX_SYMBOL_STR(st_magn_common_remove) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=st_magn,st_sensors_spi,industrialio";

MODULE_ALIAS("spi:lsm303dlhc_magn");
MODULE_ALIAS("spi:lsm303dlm_magn");
MODULE_ALIAS("spi:lis3mdl");

MODULE_INFO(srcversion, "8BD040A42B49905EF6AAA0D");
