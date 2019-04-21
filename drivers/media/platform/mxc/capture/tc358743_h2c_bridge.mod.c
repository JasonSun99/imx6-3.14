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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xdd424d97, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x3062bc5, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xd25f48f6, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0x7f9f2867, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2a7d274, __VMLINUX_SYMBOL_STR(mipi_csi2_reset) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe077a5c6, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x9a1d344c, __VMLINUX_SYMBOL_STR(mipi_csi2_set_datatype) },
	{ 0xb857a8c7, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xa600413d, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa12d929d, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f920dd3, __VMLINUX_SYMBOL_STR(v4l2_int_device_register) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x368382e2, __VMLINUX_SYMBOL_STR(of_get_named_gpiod_flags) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xeb08106d, __VMLINUX_SYMBOL_STR(mipi_csi2_enable) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x158ebced, __VMLINUX_SYMBOL_STR(v4l2_int_device_unregister) },
	{ 0x3676c236, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xa1fd3601, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0xd7c74004, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x86e0c1a8, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5e40e768, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x248a85a9, __VMLINUX_SYMBOL_STR(mipi_csi2_dphy_status) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc329a245, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x38b6b4ac, __VMLINUX_SYMBOL_STR(mipi_csi2_disable) },
	{ 0x96b44692, __VMLINUX_SYMBOL_STR(mipi_csi2_set_lanes) },
	{ 0xee914bb9, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x688922ce, __VMLINUX_SYMBOL_STR(mipi_csi2_get_status) },
	{ 0xbaa28923, __VMLINUX_SYMBOL_STR(mipi_csi2_get_info) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5a7524b5, __VMLINUX_SYMBOL_STR(mipi_csi2_get_error1) },
	{ 0x687934e9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x1c6c7389, __VMLINUX_SYMBOL_STR(regulator_enable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=v4l2-int-device";

MODULE_ALIAS("i2c:tc358743_mipi");

MODULE_INFO(srcversion, "B6A89CAD708DD878A63539E");
