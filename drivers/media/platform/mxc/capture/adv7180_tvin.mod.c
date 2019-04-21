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
	{ 0x19384649, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd25f48f6, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0x7f9f2867, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x1730a2ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe077a5c6, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb857a8c7, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x23cb7151, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0x6692c09a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xbc219a96, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x135c3012, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa12d929d, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x1012d26c, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f920dd3, __VMLINUX_SYMBOL_STR(v4l2_int_device_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x368382e2, __VMLINUX_SYMBOL_STR(of_get_named_gpiod_flags) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x158ebced, __VMLINUX_SYMBOL_STR(v4l2_int_device_unregister) },
	{ 0x3676c236, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xd7c74004, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x5e40e768, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xc329a245, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xee914bb9, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xef3edfbd, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9730c462, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1c6c7389, __VMLINUX_SYMBOL_STR(regulator_enable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=v4l2-int-device";

MODULE_ALIAS("i2c:adv7180");

MODULE_INFO(srcversion, "D5F8F2A679777985C04C0A7");
