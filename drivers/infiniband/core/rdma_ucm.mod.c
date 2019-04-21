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
	{ 0x3062bc5, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xd16c9d3f, __VMLINUX_SYMBOL_STR(rdma_get_service_id) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0xe3a57ebe, __VMLINUX_SYMBOL_STR(rdma_port_get_link_layer) },
	{ 0x7740a914, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xf8762f1a, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xb7d1534a, __VMLINUX_SYMBOL_STR(rdma_join_multicast) },
	{ 0x115f4f51, __VMLINUX_SYMBOL_STR(rdma_accept) },
	{ 0x2569d757, __VMLINUX_SYMBOL_STR(ib_copy_path_rec_to_user) },
	{ 0x37eb9be9, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x52a6ce77, __VMLINUX_SYMBOL_STR(ib_copy_ah_attr_to_user) },
	{ 0x623d183c, __VMLINUX_SYMBOL_STR(rdma_init_qp_attr) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa62ad416, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xc883c41f, __VMLINUX_SYMBOL_STR(rdma_connect) },
	{ 0x2cec6212, __VMLINUX_SYMBOL_STR(rdma_set_reuseaddr) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xddc330e7, __VMLINUX_SYMBOL_STR(ib_sa_pack_path) },
	{ 0xddca91a9, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5d891a64, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd8484a8b, __VMLINUX_SYMBOL_STR(rdma_listen) },
	{ 0x7971c00e, __VMLINUX_SYMBOL_STR(ib_copy_qp_attr_to_user) },
	{ 0x56c4e5e5, __VMLINUX_SYMBOL_STR(rdma_set_afonly) },
	{ 0xb966bb27, __VMLINUX_SYMBOL_STR(rdma_notify) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9b5863d7, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xf74dae0f, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x5ef0cb31, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x3c34b874, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x2fa46fa4, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0xdf401846, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x86e0c1a8, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x706da06b, __VMLINUX_SYMBOL_STR(rdma_bind_addr) },
	{ 0xd683ef45, __VMLINUX_SYMBOL_STR(rdma_resolve_route) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf1806da9, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x60d9cba9, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0xac217df9, __VMLINUX_SYMBOL_STR(rdma_node_get_transport) },
	{ 0x33fe96b, __VMLINUX_SYMBOL_STR(rdma_reject) },
	{ 0x1c3c0ad3, __VMLINUX_SYMBOL_STR(rdma_addr_size) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x50c2f71a, __VMLINUX_SYMBOL_STR(rdma_set_service_type) },
	{ 0x2d22f960, __VMLINUX_SYMBOL_STR(rdma_resolve_addr) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x22f07253, __VMLINUX_SYMBOL_STR(ib_sa_unpack_path) },
	{ 0xc049d3ef, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x73d004e8, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x3637b133, __VMLINUX_SYMBOL_STR(rdma_set_ib_paths) },
	{ 0x4b816ab2, __VMLINUX_SYMBOL_STR(rdma_leave_multicast) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rdma_cm,ib_core,ib_uverbs,ib_sa,ib_addr";


MODULE_INFO(srcversion, "B0E7C74AA51FA468292521F");
