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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xda1b6790, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
	{ 0xeb4efdce, __VMLINUX_SYMBOL_STR(target_fabric_configfs_free) },
	{ 0x49ccc1f9, __VMLINUX_SYMBOL_STR(target_fabric_configfs_deregister) },
	{ 0xe323c717, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0xbdfc6baa, __VMLINUX_SYMBOL_STR(target_fabric_configfs_register) },
	{ 0x5857b06b, __VMLINUX_SYMBOL_STR(target_fabric_configfs_init) },
	{ 0xa492fd21, __VMLINUX_SYMBOL_STR(ib_free_recv_mad) },
	{ 0xd83d1324, __VMLINUX_SYMBOL_STR(ib_post_send_mad) },
	{ 0x93355540, __VMLINUX_SYMBOL_STR(ib_create_send_mad) },
	{ 0xc2325cab, __VMLINUX_SYMBOL_STR(ib_create_ah_from_wc) },
	{ 0xcb881ff, __VMLINUX_SYMBOL_STR(ib_send_cm_drep) },
	{ 0x9953c58, __VMLINUX_SYMBOL_STR(ib_send_cm_rep) },
	{ 0x1e0eb582, __VMLINUX_SYMBOL_STR(transport_register_session) },
	{ 0x270670f4, __VMLINUX_SYMBOL_STR(transport_init_session) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x1031f1dc, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x5e7f1231, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x9c2a70f5, __VMLINUX_SYMBOL_STR(ib_create_qp) },
	{ 0x7a3aa7b1, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xd278f80c, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x568c5cf8, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x4eaaf037, __VMLINUX_SYMBOL_STR(target_submit_cmd) },
	{ 0x12ac1b1c, __VMLINUX_SYMBOL_STR(transport_send_check_condition_and_sense) },
	{ 0x7a1881a2, __VMLINUX_SYMBOL_STR(target_submit_tmr) },
	{ 0x550770db, __VMLINUX_SYMBOL_STR(ib_cm_notify) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xed56289f, __VMLINUX_SYMBOL_STR(ib_unregister_mad_agent) },
	{ 0xbec2a6a8, __VMLINUX_SYMBOL_STR(ib_send_cm_dreq) },
	{ 0xc879188d, __VMLINUX_SYMBOL_STR(ib_send_cm_rej) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xb2673334, __VMLINUX_SYMBOL_STR(transport_check_aborted_status) },
	{ 0xf21e0009, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0xd017f21c, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0x53c077ff, __VMLINUX_SYMBOL_STR(ib_destroy_srq) },
	{ 0x630bd1ae, __VMLINUX_SYMBOL_STR(ib_unregister_event_handler) },
	{ 0x7b2be713, __VMLINUX_SYMBOL_STR(ib_set_client_data) },
	{ 0x5ff494b9, __VMLINUX_SYMBOL_STR(ib_register_event_handler) },
	{ 0x7129e354, __VMLINUX_SYMBOL_STR(ib_cm_listen) },
	{ 0xaf6fa1a7, __VMLINUX_SYMBOL_STR(ib_create_cm_id) },
	{ 0x259d6cb7, __VMLINUX_SYMBOL_STR(ib_create_srq) },
	{ 0x66a6e2d6, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0xd6ed702b, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0xa1719c9e, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7127f802, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x5e7fe5f7, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x3f4551bb, __VMLINUX_SYMBOL_STR(core_tpg_add_initiator_node_acl) },
	{ 0xaa4a7797, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x4e830a3e, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0x4d6d642f, __VMLINUX_SYMBOL_STR(core_tpg_del_initiator_node_acl) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x770258c0, __VMLINUX_SYMBOL_STR(target_sess_cmd_list_set_waiting) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xa6ea7187, __VMLINUX_SYMBOL_STR(ib_destroy_cm_id) },
	{ 0xbbc592e5, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0x47f7ae9b, __VMLINUX_SYMBOL_STR(transport_deregister_session_configfs) },
	{ 0xad622354, __VMLINUX_SYMBOL_STR(target_wait_for_sess_cmds) },
	{ 0xfb8d9fd9, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0x5109397a, __VMLINUX_SYMBOL_STR(ib_destroy_qp) },
	{ 0xf57a0b7f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x2895e58a, __VMLINUX_SYMBOL_STR(ib_cm_init_qp_attr) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb778e526, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0x5fbe21a, __VMLINUX_SYMBOL_STR(ib_modify_qp) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd7db0843, __VMLINUX_SYMBOL_STR(ib_get_client_data) },
	{ 0x8fd83a7, __VMLINUX_SYMBOL_STR(ib_free_send_mad) },
	{ 0xd2e5ad4b, __VMLINUX_SYMBOL_STR(ib_destroy_ah) },
	{ 0x3fc32c39, __VMLINUX_SYMBOL_STR(ib_register_mad_agent) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x2a0832e7, __VMLINUX_SYMBOL_STR(ib_query_gid) },
	{ 0x2eddd741, __VMLINUX_SYMBOL_STR(ib_query_port) },
	{ 0x7268d572, __VMLINUX_SYMBOL_STR(ib_modify_port) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,target_core_mod,ib_mad,ib_cm";


MODULE_INFO(srcversion, "90D963A0D315EA2E21A1BAB");