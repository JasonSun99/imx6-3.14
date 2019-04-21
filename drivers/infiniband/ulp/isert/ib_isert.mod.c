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
	{ 0xab7a2612, __VMLINUX_SYMBOL_STR(iscsit_unregister_transport) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xdf3e5e62, __VMLINUX_SYMBOL_STR(iscsit_register_transport) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xf19e9355, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x115f4f51, __VMLINUX_SYMBOL_STR(rdma_accept) },
	{ 0xf7c544bd, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0x66a6e2d6, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0xd6ed702b, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x33fe96b, __VMLINUX_SYMBOL_STR(rdma_reject) },
	{ 0x7a3aa7b1, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xa1719c9e, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd8484a8b, __VMLINUX_SYMBOL_STR(rdma_listen) },
	{ 0x706da06b, __VMLINUX_SYMBOL_STR(rdma_bind_addr) },
	{ 0x2fa46fa4, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0x97ed86fc, __VMLINUX_SYMBOL_STR(iscsit_build_task_mgt_rsp) },
	{ 0x3b51263d, __VMLINUX_SYMBOL_STR(iscsit_build_reject) },
	{ 0x38d3cf33, __VMLINUX_SYMBOL_STR(iscsit_build_logout_rsp) },
	{ 0x9c995ccd, __VMLINUX_SYMBOL_STR(iscsit_build_text_rsp) },
	{ 0x9533548d, __VMLINUX_SYMBOL_STR(iscsit_build_rsp_pdu) },
	{ 0xf3af4ecc, __VMLINUX_SYMBOL_STR(iscsit_build_nopin_rsp) },
	{ 0xb966bb27, __VMLINUX_SYMBOL_STR(rdma_notify) },
	{ 0xbd9587d, __VMLINUX_SYMBOL_STR(iscsit_cause_connection_reinstatement) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xad622354, __VMLINUX_SYMBOL_STR(target_wait_for_sess_cmds) },
	{ 0x770258c0, __VMLINUX_SYMBOL_STR(target_sess_cmd_list_set_waiting) },
	{ 0x24d5e4e9, __VMLINUX_SYMBOL_STR(iscsit_process_nop_out) },
	{ 0xa4d7ea3c, __VMLINUX_SYMBOL_STR(iscsit_setup_nop_out) },
	{ 0x4b81d1b9, __VMLINUX_SYMBOL_STR(iscsit_process_text_cmd) },
	{ 0xd0bacd8f, __VMLINUX_SYMBOL_STR(iscsit_setup_text_cmd) },
	{ 0x832dda0f, __VMLINUX_SYMBOL_STR(iscsit_set_unsoliticed_dataout) },
	{ 0xa6dbebec, __VMLINUX_SYMBOL_STR(iscsit_sequence_cmd) },
	{ 0xb794e985, __VMLINUX_SYMBOL_STR(iscsit_process_scsi_cmd) },
	{ 0xafec28b, __VMLINUX_SYMBOL_STR(iscsit_setup_scsi_cmd) },
	{ 0xdabd871e, __VMLINUX_SYMBOL_STR(iscsit_handle_task_mgt_cmd) },
	{ 0x21cfe4f3, __VMLINUX_SYMBOL_STR(iscsit_check_dataout_payload) },
	{ 0x8371daff, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x5af34f12, __VMLINUX_SYMBOL_STR(iscsit_check_dataout_hdr) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xad3cb83d, __VMLINUX_SYMBOL_STR(iscsit_handle_logout_cmd) },
	{ 0x60d9cba9, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x538e44fb, __VMLINUX_SYMBOL_STR(iscsit_allocate_cmd) },
	{ 0xd278f80c, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x450f9899, __VMLINUX_SYMBOL_STR(iscsit_tmr_post_handler) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x65478b74, __VMLINUX_SYMBOL_STR(iscsit_logout_post_handler) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xf21e0009, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x5109397a, __VMLINUX_SYMBOL_STR(ib_destroy_qp) },
	{ 0xfb8d9fd9, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x37eb9be9, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa5e193, __VMLINUX_SYMBOL_STR(ib_alloc_fast_reg_mr) },
	{ 0x2af1deb4, __VMLINUX_SYMBOL_STR(ib_alloc_fast_reg_page_list) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xd017f21c, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0x8b01d489, __VMLINUX_SYMBOL_STR(ib_free_fast_reg_page_list) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb778e526, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0x568c5cf8, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x88446aec, __VMLINUX_SYMBOL_STR(iscsit_release_cmd) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x972bcb03, __VMLINUX_SYMBOL_STR(iscsit_stop_dataout_timer) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=iscsi_target_mod,rdma_cm,ib_core,target_core_mod";


MODULE_INFO(srcversion, "47B6572DD62C9080DC5C01C");
