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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5f7da6ea, __VMLINUX_SYMBOL_STR(ib_find_cached_gid) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xe3a57ebe, __VMLINUX_SYMBOL_STR(rdma_port_get_link_layer) },
	{ 0xa0fcab6d, __VMLINUX_SYMBOL_STR(ib_find_pkey) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x3fc32c39, __VMLINUX_SYMBOL_STR(ib_register_mad_agent) },
	{ 0xa492fd21, __VMLINUX_SYMBOL_STR(ib_free_recv_mad) },
	{ 0x520b2638, __VMLINUX_SYMBOL_STR(ib_pack) },
	{ 0xd2e5ad4b, __VMLINUX_SYMBOL_STR(ib_destroy_ah) },
	{ 0x8fd83a7, __VMLINUX_SYMBOL_STR(ib_free_send_mad) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5d891a64, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd7db0843, __VMLINUX_SYMBOL_STR(ib_get_client_data) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x2eddd741, __VMLINUX_SYMBOL_STR(ib_query_port) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0xf74dae0f, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x7b2be713, __VMLINUX_SYMBOL_STR(ib_set_client_data) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x93355540, __VMLINUX_SYMBOL_STR(ib_create_send_mad) },
	{ 0xd83d1324, __VMLINUX_SYMBOL_STR(ib_post_send_mad) },
	{ 0xdf401846, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xed56289f, __VMLINUX_SYMBOL_STR(ib_unregister_mad_agent) },
	{ 0xe323c717, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0x13fa16bd, __VMLINUX_SYMBOL_STR(ib_create_ah) },
	{ 0x630bd1ae, __VMLINUX_SYMBOL_STR(ib_unregister_event_handler) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf1806da9, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x5ff494b9, __VMLINUX_SYMBOL_STR(ib_register_event_handler) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xccb3b5c0, __VMLINUX_SYMBOL_STR(ib_cancel_mad) },
	{ 0xac217df9, __VMLINUX_SYMBOL_STR(rdma_node_get_transport) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb1a312e1, __VMLINUX_SYMBOL_STR(ib_unpack) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xdbd019c4, __VMLINUX_SYMBOL_STR(ib_wq) },
	{ 0xda1b6790, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,ib_mad";


MODULE_INFO(srcversion, "B1DAF2938B4719EDDD2E455");
