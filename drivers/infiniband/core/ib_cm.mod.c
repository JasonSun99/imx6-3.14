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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5f7da6ea, __VMLINUX_SYMBOL_STR(ib_find_cached_gid) },
	{ 0xc2325cab, __VMLINUX_SYMBOL_STR(ib_create_ah_from_wc) },
	{ 0xb625a260, __VMLINUX_SYMBOL_STR(ib_modify_mad) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97ec1ff, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x3fc32c39, __VMLINUX_SYMBOL_STR(ib_register_mad_agent) },
	{ 0xa492fd21, __VMLINUX_SYMBOL_STR(ib_free_recv_mad) },
	{ 0xd05763c4, __VMLINUX_SYMBOL_STR(ib_init_ah_from_path) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9c1c59fc, __VMLINUX_SYMBOL_STR(ib_get_cached_gid) },
	{ 0xd2e5ad4b, __VMLINUX_SYMBOL_STR(ib_destroy_ah) },
	{ 0xceed7f85, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x8fd83a7, __VMLINUX_SYMBOL_STR(ib_free_send_mad) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x5d891a64, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x890dc2ed, __VMLINUX_SYMBOL_STR(idr_alloc_cyclic) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa1719c9e, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa6bf801d, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x4b6e178e, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0xd7db0843, __VMLINUX_SYMBOL_STR(ib_get_client_data) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x17dd461c, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x5528ed4f, __VMLINUX_SYMBOL_STR(ib_init_ah_from_wc) },
	{ 0x3361939d, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x7b2be713, __VMLINUX_SYMBOL_STR(ib_set_client_data) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x93355540, __VMLINUX_SYMBOL_STR(ib_create_send_mad) },
	{ 0xd83d1324, __VMLINUX_SYMBOL_STR(ib_post_send_mad) },
	{ 0xdf401846, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xed56289f, __VMLINUX_SYMBOL_STR(ib_unregister_mad_agent) },
	{ 0xe323c717, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0x13fa16bd, __VMLINUX_SYMBOL_STR(ib_create_ah) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe1f0ab3a, __VMLINUX_SYMBOL_STR(_raw_read_lock_irqsave) },
	{ 0xf1806da9, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x95fcdd40, __VMLINUX_SYMBOL_STR(ib_find_cached_pkey) },
	{ 0x9cba3c37, __VMLINUX_SYMBOL_STR(_raw_read_unlock_irqrestore) },
	{ 0xccb3b5c0, __VMLINUX_SYMBOL_STR(ib_cancel_mad) },
	{ 0xac217df9, __VMLINUX_SYMBOL_STR(rdma_node_get_transport) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x7268d572, __VMLINUX_SYMBOL_STR(ib_modify_port) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe6fc8c1d, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xa77a369d, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0xda1b6790, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,ib_mad,ib_sa";


MODULE_INFO(srcversion, "5702FEF84394B4F444EFE8D");
