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
	{ 0xbaff3a71, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2caecc39, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7e8485f4, __VMLINUX_SYMBOL_STR(ib_fmr_pool_map_phys) },
	{ 0xf21e0009, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0xa5e193, __VMLINUX_SYMBOL_STR(ib_alloc_fast_reg_mr) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x772c235a, __VMLINUX_SYMBOL_STR(iscsi_change_queue_depth) },
	{ 0xf9f40c85, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x5520577f, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0x8b01d489, __VMLINUX_SYMBOL_STR(ib_free_fast_reg_page_list) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x9862a55c, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0xd7f17678, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0x98b0bdce, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x37eb9be9, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x96e5129b, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0xc32b59ff, __VMLINUX_SYMBOL_STR(ib_destroy_fmr_pool) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1b6adc1, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x289e4b7, __VMLINUX_SYMBOL_STR(iscsi_lookup_endpoint) },
	{ 0xc883c41f, __VMLINUX_SYMBOL_STR(rdma_connect) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1746a1f2, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xe21cc54f, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd6ed702b, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x66a6e2d6, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0xa1719c9e, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf50eb4fc, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x410ee120, __VMLINUX_SYMBOL_STR(rdma_destroy_qp) },
	{ 0x9dd82df2, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x513c9c56, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0xa8a6bc29, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x9b8f1065, __VMLINUX_SYMBOL_STR(iscsi_conn_teardown) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xb41eae44, __VMLINUX_SYMBOL_STR(iscsi_put_task) },
	{ 0xd8a148ba, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0xdad5dd7b, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0xe1c34157, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x11246ad3, __VMLINUX_SYMBOL_STR(iscsi_destroy_endpoint) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x2fa46fa4, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0xfb8d9fd9, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xf7c544bd, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0x389064a9, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x630bd1ae, __VMLINUX_SYMBOL_STR(ib_unregister_event_handler) },
	{ 0xd683ef45, __VMLINUX_SYMBOL_STR(rdma_resolve_route) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5ff494b9, __VMLINUX_SYMBOL_STR(ib_register_event_handler) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xfeb365f5, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x4bebf92f, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0xcd3019d3, __VMLINUX_SYMBOL_STR(iscsi_prep_data_out_pdu) },
	{ 0x60d9cba9, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0x4c143a65, __VMLINUX_SYMBOL_STR(iscsi_complete_pdu) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3d1ce0a2, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x96b6f4b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xd017f21c, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x829115f9, __VMLINUX_SYMBOL_STR(iscsi_create_endpoint) },
	{ 0x86eaed87, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x60474d63, __VMLINUX_SYMBOL_STR(ib_create_fmr_pool) },
	{ 0x2d22f960, __VMLINUX_SYMBOL_STR(rdma_resolve_addr) },
	{ 0x2af1deb4, __VMLINUX_SYMBOL_STR(ib_alloc_fast_reg_page_list) },
	{ 0x44d49a4b, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xcbb0fe0f, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0x3c725632, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0xc4bda25a, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x7a3aa7b1, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xee15f65e, __VMLINUX_SYMBOL_STR(ib_fmr_pool_unmap) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x9adb9ee0, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xc6bc469d, __VMLINUX_SYMBOL_STR(iscsi_conn_setup) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,ib_core,scsi_transport_iscsi,rdma_cm";


MODULE_INFO(srcversion, "03207C5C7F61DEA902DD965");
