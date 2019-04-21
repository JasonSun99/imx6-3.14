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
	{ 0xf85d4e7, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe4e57eb0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x86e0c1a8, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xb857a8c7, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xa70d4db9, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0xadaec9e7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1c6c7389, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x5e40e768, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xb2b7c4e1, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x3062bc5, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6a747c61, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0x9fea4390, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x6692c09a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1730a2ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:adm1032");
MODULE_ALIAS("i2c:adt7461");
MODULE_ALIAS("i2c:adt7461a");
MODULE_ALIAS("i2c:g781");
MODULE_ALIAS("i2c:lm90");
MODULE_ALIAS("i2c:lm86");
MODULE_ALIAS("i2c:lm89");
MODULE_ALIAS("i2c:lm99");
MODULE_ALIAS("i2c:max6646");
MODULE_ALIAS("i2c:max6647");
MODULE_ALIAS("i2c:max6649");
MODULE_ALIAS("i2c:max6657");
MODULE_ALIAS("i2c:max6658");
MODULE_ALIAS("i2c:max6659");
MODULE_ALIAS("i2c:max6680");
MODULE_ALIAS("i2c:max6681");
MODULE_ALIAS("i2c:max6695");
MODULE_ALIAS("i2c:max6696");
MODULE_ALIAS("i2c:nct1008");
MODULE_ALIAS("i2c:w83l771");
MODULE_ALIAS("i2c:sa56004");
MODULE_ALIAS("i2c:tmp451");

MODULE_INFO(srcversion, "E5069981340BA69BE4914C4");
