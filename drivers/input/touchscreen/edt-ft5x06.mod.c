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
	{ 0xe077a5c6, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd7c74004, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x595dc97d, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x32e29225, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0x43632d7d, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xa12d929d, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x368382e2, __VMLINUX_SYMBOL_STR(of_get_named_gpiod_flags) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x687934e9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7b6c5218, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xadaec9e7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xe4e57eb0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x324356d6, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x5b130c00, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x4e830a3e, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0x3676c236, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xbb5c284b, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xada77f31, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0x94c6b866, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x5532fb20, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb2b7c4e1, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa600413d, __VMLINUX_SYMBOL_STR(i2c_transfer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406*");
MODULE_ALIAS("i2c:edt-ft5x06");

MODULE_INFO(srcversion, "FE58C789147AADFF6FE9394");
