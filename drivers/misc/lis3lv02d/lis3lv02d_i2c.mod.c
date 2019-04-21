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
	{ 0xf3c6a295, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x3582fabd, __VMLINUX_SYMBOL_STR(lis3lv02d_init_device) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xdae9e82a, __VMLINUX_SYMBOL_STR(regulator_bulk_get) },
	{ 0x1c9bc26f, __VMLINUX_SYMBOL_STR(lis3lv02d_init_dt) },
	{ 0xd7fef2ed, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xa6fc447c, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0xbd8a6b81, __VMLINUX_SYMBOL_STR(lis3_dev) },
	{ 0x2dfe76d5, __VMLINUX_SYMBOL_STR(regulator_bulk_free) },
	{ 0x92d8899f, __VMLINUX_SYMBOL_STR(lis3lv02d_remove_fs) },
	{ 0xb252d9c, __VMLINUX_SYMBOL_STR(lis3lv02d_joystick_disable) },
	{ 0x1296314b, __VMLINUX_SYMBOL_STR(lis3lv02d_poweroff) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x53eb03fd, __VMLINUX_SYMBOL_STR(lis3lv02d_poweron) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf1d27356, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0x1730a2ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6692c09a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lis3lv02d";

MODULE_ALIAS("i2c:lis3lv02d");
MODULE_ALIAS("i2c:lis331dlh");
MODULE_ALIAS("of:N*T*Cst,lis3lv02d*");

MODULE_INFO(srcversion, "78D807E65153EC7FC720FC6");
