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
	{ 0x61ed383c, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x33788b6c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1e0a9fe, __VMLINUX_SYMBOL_STR(kobject_get) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd140268f, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x3fc32c39, __VMLINUX_SYMBOL_STR(ib_register_mad_agent) },
	{ 0xa492fd21, __VMLINUX_SYMBOL_STR(ib_free_recv_mad) },
	{ 0xf8762f1a, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x8a3caa24, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x88a6685e, __VMLINUX_SYMBOL_STR(kobject_set_name) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa62ad416, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xd0072011, __VMLINUX_SYMBOL_STR(ib_get_rmpp_segment) },
	{ 0xd2e5ad4b, __VMLINUX_SYMBOL_STR(ib_destroy_ah) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x8fd83a7, __VMLINUX_SYMBOL_STR(ib_free_send_mad) },
	{ 0x7b5d4b7a, __VMLINUX_SYMBOL_STR(ib_is_mad_class_rmpp) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe9bff861, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd7db0843, __VMLINUX_SYMBOL_STR(ib_get_client_data) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x17dd461c, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x5528ed4f, __VMLINUX_SYMBOL_STR(ib_init_ah_from_wc) },
	{ 0x7b2be713, __VMLINUX_SYMBOL_STR(ib_set_client_data) },
	{ 0x93355540, __VMLINUX_SYMBOL_STR(ib_create_send_mad) },
	{ 0xd83d1324, __VMLINUX_SYMBOL_STR(ib_post_send_mad) },
	{ 0x946d5d27, __VMLINUX_SYMBOL_STR(ib_response_mad) },
	{ 0x86e0c1a8, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xfe75043f, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xed56289f, __VMLINUX_SYMBOL_STR(ib_unregister_mad_agent) },
	{ 0xe323c717, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0x13fa16bd, __VMLINUX_SYMBOL_STR(ib_create_ah) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x1d44647f, __VMLINUX_SYMBOL_STR(class_create_file_ns) },
	{ 0xac217df9, __VMLINUX_SYMBOL_STR(rdma_node_get_transport) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x7268d572, __VMLINUX_SYMBOL_STR(ib_modify_port) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe6b8279c, __VMLINUX_SYMBOL_STR(kobject_init) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x3b0a1f82, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x636ace9f, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x6f077fcf, __VMLINUX_SYMBOL_STR(ib_get_mad_data_offset) },
	{ 0x3fcf31b0, __VMLINUX_SYMBOL_STR(show_class_attr_string) },
	{ 0xda1b6790, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_mad,ib_core";


MODULE_INFO(srcversion, "25C2BFA426412908D478BB0");
