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
	{ 0xa09195c7, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x1d7fb31f, __VMLINUX_SYMBOL_STR(st_sensors_set_dataready_irq) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0x2a49fe16, __VMLINUX_SYMBOL_STR(st_sensors_set_enable) },
	{ 0x69c37879, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_set_sampling_frequency) },
	{ 0x74d7047, __VMLINUX_SYMBOL_STR(st_sensors_trigger_handler) },
	{ 0xf27802df, __VMLINUX_SYMBOL_STR(st_sensors_deallocate_trigger) },
	{ 0xc018eb5a, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_sampling_frequency_avail) },
	{ 0x1483c0a7, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x50295abd, __VMLINUX_SYMBOL_STR(st_sensors_allocate_trigger) },
	{ 0xb31ee344, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xd10f2647, __VMLINUX_SYMBOL_STR(st_sensors_set_fullscale_by_gain) },
	{ 0x2676c801, __VMLINUX_SYMBOL_STR(st_sensors_check_device_support) },
	{ 0xb7f329f4, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x444afebe, __VMLINUX_SYMBOL_STR(st_sensors_init_sensor) },
	{ 0x5eea952b, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf793c27b, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_get_sampling_frequency) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc716378b, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_scale_avail) },
	{ 0xa8d0e6c8, __VMLINUX_SYMBOL_STR(st_sensors_set_axis_enable) },
	{ 0x299cd00, __VMLINUX_SYMBOL_STR(st_sensors_read_info_raw) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5b6bc806, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-triggered-buffer,st_sensors,industrialio";


MODULE_INFO(srcversion, "C56B6C20EF579AB1144A46D");
