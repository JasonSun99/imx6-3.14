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
	{ 0xee1068d0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xcbaae858, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0xe029c5fa, __VMLINUX_SYMBOL_STR(sensor_hub_register_callback) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1483c0a7, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xa02b2420, __VMLINUX_SYMBOL_STR(hid_sensor_setup_trigger) },
	{ 0x5b6bc806, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0x7fdf8a37, __VMLINUX_SYMBOL_STR(sensor_hub_input_get_attribute_info) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x37b0c49f, __VMLINUX_SYMBOL_STR(hid_sensor_parse_common_attributes) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x70704e60, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xba0747f9, __VMLINUX_SYMBOL_STR(hid_sensor_write_raw_hyst_value) },
	{ 0x6927da53, __VMLINUX_SYMBOL_STR(hid_sensor_write_samp_freq_value) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x28ec3aa4, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0xca265f15, __VMLINUX_SYMBOL_STR(sensor_hub_input_attr_get_raw_value) },
	{ 0xc65e5e59, __VMLINUX_SYMBOL_STR(hid_sensor_read_samp_freq_value) },
	{ 0xc29c13ca, __VMLINUX_SYMBOL_STR(hid_sensor_read_raw_hyst_value) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa09195c7, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x3d2c4697, __VMLINUX_SYMBOL_STR(hid_sensor_remove_trigger) },
	{ 0xb31ee344, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x1522d4ba, __VMLINUX_SYMBOL_STR(sensor_hub_remove_callback) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,hid-sensor-hub,hid-sensor-trigger,industrialio-triggered-buffer,hid-sensor-iio-common";

MODULE_ALIAS("platform:HID-SENSOR-200041");

MODULE_INFO(srcversion, "2DE3B3B533AB864B2FE2AAE");
