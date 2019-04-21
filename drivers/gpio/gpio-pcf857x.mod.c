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
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8a30199a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0xdd424d97, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3c392bcf, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe4e57eb0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x5bc74ee0, __VMLINUX_SYMBOL_STR(__irq_domain_add) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x8f2e7547, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x7ceaf0d5, __VMLINUX_SYMBOL_STR(generic_handle_irq) },
	{ 0x19d278ad, __VMLINUX_SYMBOL_STR(irq_find_mapping) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6e54a6a2, __VMLINUX_SYMBOL_STR(irq_create_mapping) },
	{ 0x6cc78c5c, __VMLINUX_SYMBOL_STR(set_irq_flags) },
	{ 0xb5a24098, __VMLINUX_SYMBOL_STR(irq_set_chip_and_handler_name) },
	{ 0x22c16ecb, __VMLINUX_SYMBOL_STR(dummy_irq_chip) },
	{ 0xe68d8de9, __VMLINUX_SYMBOL_STR(handle_level_irq) },
	{ 0x6a747c61, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xcf371e10, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x3a2f9167, __VMLINUX_SYMBOL_STR(irq_domain_remove) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,pcf8574*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574a*");
MODULE_ALIAS("of:N*T*Cnxp,pca8574*");
MODULE_ALIAS("of:N*T*Cnxp,pca9670*");
MODULE_ALIAS("of:N*T*Cnxp,pca9672*");
MODULE_ALIAS("of:N*T*Cnxp,pca9674*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8575*");
MODULE_ALIAS("of:N*T*Cnxp,pca8575*");
MODULE_ALIAS("of:N*T*Cnxp,pca9671*");
MODULE_ALIAS("of:N*T*Cnxp,pca9673*");
MODULE_ALIAS("of:N*T*Cnxp,pca9675*");
MODULE_ALIAS("of:N*T*Cmaxim,max7328*");
MODULE_ALIAS("of:N*T*Cmaxim,max7329*");
MODULE_ALIAS("of:N*T*Cti,tca9554*");
MODULE_ALIAS("i2c:pcf8574");
MODULE_ALIAS("i2c:pcf8574a");
MODULE_ALIAS("i2c:pca8574");
MODULE_ALIAS("i2c:pca9670");
MODULE_ALIAS("i2c:pca9672");
MODULE_ALIAS("i2c:pca9674");
MODULE_ALIAS("i2c:pcf8575");
MODULE_ALIAS("i2c:pca8575");
MODULE_ALIAS("i2c:pca9671");
MODULE_ALIAS("i2c:pca9673");
MODULE_ALIAS("i2c:pca9675");
MODULE_ALIAS("i2c:max7328");
MODULE_ALIAS("i2c:max7329");
MODULE_ALIAS("i2c:tca9554");

MODULE_INFO(srcversion, "DD67D6AA54C785B08EA278C");
