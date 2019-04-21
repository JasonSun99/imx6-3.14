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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe077a5c6, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x554408fa, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xd7c74004, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x95c11c30, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x561e4b77, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc73eb09f, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xd7fef2ed, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xeca4d6c5, __VMLINUX_SYMBOL_STR(irq_domain_simple_ops) },
	{ 0x6cc78c5c, __VMLINUX_SYMBOL_STR(set_irq_flags) },
	{ 0x7522f3ba, __VMLINUX_SYMBOL_STR(irq_modify_status) },
	{ 0x92f8ee69, __VMLINUX_SYMBOL_STR(irq_set_chip) },
	{ 0x20a789ac, __VMLINUX_SYMBOL_STR(irq_set_chip_data) },
	{ 0xa9d878d5, __VMLINUX_SYMBOL_STR(irq_to_desc) },
	{ 0x6e54a6a2, __VMLINUX_SYMBOL_STR(irq_create_mapping) },
	{ 0xe4e57eb0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x5bc74ee0, __VMLINUX_SYMBOL_STR(__irq_domain_add) },
	{ 0x3c392bcf, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0x43632d7d, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3a2f9167, __VMLINUX_SYMBOL_STR(irq_domain_remove) },
	{ 0x2c7db649, __VMLINUX_SYMBOL_STR(irq_dispose_mapping) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x549525ef, __VMLINUX_SYMBOL_STR(handle_nested_irq) },
	{ 0x19d278ad, __VMLINUX_SYMBOL_STR(irq_find_mapping) },
	{ 0xd5bf17f3, __VMLINUX_SYMBOL_STR(gpio_lock_as_irq) },
	{ 0x3fc0d8cd, __VMLINUX_SYMBOL_STR(gpio_unlock_as_irq) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xeec7c36a, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0x1730a2ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x6692c09a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xfebf6c6d, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x8505b593, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcf371e10, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:mcp23s08");
MODULE_ALIAS("spi:mcp23s17");
MODULE_ALIAS("i2c:mcp23008");
MODULE_ALIAS("i2c:mcp23017");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017*");

MODULE_INFO(srcversion, "1A8B4C50F2C02AA603D2F71");
