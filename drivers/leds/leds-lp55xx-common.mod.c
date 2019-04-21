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
	{ 0x19384649, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7f9f2867, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x1730a2ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1c11c0f6, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x6692c09a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xbc219a96, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa12d929d, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xad1f1e60, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xb2b7c4e1, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x368382e2, __VMLINUX_SYMBOL_STR(of_get_named_gpiod_flags) },
	{ 0xadaec9e7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71930ed3, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x97d27874, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x3676c236, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdbd0e20, __VMLINUX_SYMBOL_STR(of_property_read_u8_array) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x3d41904f, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0xc329a245, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x260cf8f8, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xee914bb9, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x5f8a2a28, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x687934e9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x32e8f353, __VMLINUX_SYMBOL_STR(release_firmware) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "279720593347FDABEEAF23D");
