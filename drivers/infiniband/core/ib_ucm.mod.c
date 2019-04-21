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
	{ 0x33788b6c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x1446fb4a, __VMLINUX_SYMBOL_STR(class_remove_file_ns) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc879188d, __VMLINUX_SYMBOL_STR(ib_send_cm_rej) },
	{ 0xd140268f, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xc57b2e05, __VMLINUX_SYMBOL_STR(ib_send_cm_req) },
	{ 0xbec2a6a8, __VMLINUX_SYMBOL_STR(ib_send_cm_dreq) },
	{ 0xd37e5b9c, __VMLINUX_SYMBOL_STR(ib_send_cm_rtu) },
	{ 0xf8762f1a, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x88a6685e, __VMLINUX_SYMBOL_STR(kobject_set_name) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x2569d757, __VMLINUX_SYMBOL_STR(ib_copy_path_rec_to_user) },
	{ 0xe350f2aa, __VMLINUX_SYMBOL_STR(ib_copy_path_rec_from_user) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa62ad416, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x701334f7, __VMLINUX_SYMBOL_STR(ib_send_cm_mra) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xcb881ff, __VMLINUX_SYMBOL_STR(ib_send_cm_drep) },
	{ 0x2895e58a, __VMLINUX_SYMBOL_STR(ib_cm_init_qp_attr) },
	{ 0x5d891a64, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xc4e8faba, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd7db0843, __VMLINUX_SYMBOL_STR(ib_get_client_data) },
	{ 0x7971c00e, __VMLINUX_SYMBOL_STR(ib_copy_qp_attr_to_user) },
	{ 0x9953c58, __VMLINUX_SYMBOL_STR(ib_send_cm_rep) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf74dae0f, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x7b2be713, __VMLINUX_SYMBOL_STR(ib_set_client_data) },
	{ 0xaf6fa1a7, __VMLINUX_SYMBOL_STR(ib_create_cm_id) },
	{ 0xdf401846, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x86e0c1a8, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xfe75043f, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xe323c717, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf1806da9, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x550770db, __VMLINUX_SYMBOL_STR(ib_cm_notify) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x1d44647f, __VMLINUX_SYMBOL_STR(class_create_file_ns) },
	{ 0xac217df9, __VMLINUX_SYMBOL_STR(rdma_node_get_transport) },
	{ 0xa6ea7187, __VMLINUX_SYMBOL_STR(ib_destroy_cm_id) },
	{ 0xf73c6ca, __VMLINUX_SYMBOL_STR(ib_send_cm_apr) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x7129e354, __VMLINUX_SYMBOL_STR(ib_cm_listen) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xe6fc8c1d, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x5dcbb67f, __VMLINUX_SYMBOL_STR(ib_send_cm_lap) },
	{ 0x163f28d4, __VMLINUX_SYMBOL_STR(cm_class) },
	{ 0x37f2eb37, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x76445fc1, __VMLINUX_SYMBOL_STR(ib_send_cm_sidr_rep) },
	{ 0x3fcf31b0, __VMLINUX_SYMBOL_STR(show_class_attr_string) },
	{ 0xda1b6790, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xa48a64c7, __VMLINUX_SYMBOL_STR(ib_send_cm_sidr_req) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_cm,ib_uverbs,ib_core";


MODULE_INFO(srcversion, "85C2AADCC75BB19A4FC02FF");
