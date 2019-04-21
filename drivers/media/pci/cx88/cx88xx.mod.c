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
	{ 0x74cdf4dd, __VMLINUX_SYMBOL_STR(videobuf_to_dma) },
	{ 0xdd424d97, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xadf42bd5, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa1df927a, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1730a2ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xeab61090, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf2109e8b, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xccbfe1a2, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0xd8c30bc1, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x22f1eb58, __VMLINUX_SYMBOL_STR(tveeprom_hauppauge_analog) },
	{ 0x8309d10a, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x7840b42c, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xa600413d, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x46b33c55, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x514c2133, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7c5b6f2, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x24423106, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x4c40e9ba, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x9e8261e3, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xd1aa7a49, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x3b0bb73d, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xa2beaaec, __VMLINUX_SYMBOL_STR(videobuf_dma_unmap) },
	{ 0x87dc2105, __VMLINUX_SYMBOL_STR(btcx_riscmem_free) },
	{ 0x10f353e9, __VMLINUX_SYMBOL_STR(rc_keydown_notimeout) },
	{ 0xae3c74b5, __VMLINUX_SYMBOL_STR(tveeprom_read) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x56b03dd5, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x25fa6e5d, __VMLINUX_SYMBOL_STR(btcx_riscmem_alloc) },
	{ 0x276c633, __VMLINUX_SYMBOL_STR(rc_keyup) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x23c33db9, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9fea4390, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x94e1823c, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0x9bce482f, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x70b29770, __VMLINUX_SYMBOL_STR(v4l2_ctrl_grab) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x8f2e7547, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xdc14eda7, __VMLINUX_SYMBOL_STR(pci_pci_problems) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xd32307c1, __VMLINUX_SYMBOL_STR(videobuf_waiton) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xfc3bd35, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x63697bf6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xa9a2016, __VMLINUX_SYMBOL_STR(videobuf_dma_free) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x987424f6, __VMLINUX_SYMBOL_STR(i2c_bit_add_bus) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xe5a8ff6a, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x7383352, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xf3251e7b, __VMLINUX_SYMBOL_STR(v4l2_norm_to_name) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-dma-sg,tveeprom,btcx-risc";


MODULE_INFO(srcversion, "99B8D49B33D0097F70BD057");
