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
	{ 0xd73c17c, __VMLINUX_SYMBOL_STR(mlx4_get_parav_qkey) },
	{ 0x61ed383c, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9b9e8eb2, __VMLINUX_SYMBOL_STR(mlx4_mr_enable) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1e0a9fe, __VMLINUX_SYMBOL_STR(kobject_get) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xaf6bcbb6, __VMLINUX_SYMBOL_STR(mlx4_counter_alloc) },
	{ 0xdd66fdce, __VMLINUX_SYMBOL_STR(mlx4_pd_free) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x5ea1a1d6, __VMLINUX_SYMBOL_STR(mlx4_srq_alloc) },
	{ 0xf7dc35ee, __VMLINUX_SYMBOL_STR(mlx4_qp_reserve_range) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x5ea08c79, __VMLINUX_SYMBOL_STR(mlx4_srq_free) },
	{ 0x2093cabf, __VMLINUX_SYMBOL_STR(mlx4_qp_alloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4160fc7d, __VMLINUX_SYMBOL_STR(mlx4_INIT_PORT) },
	{ 0xf21e0009, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xae3a69eb, __VMLINUX_SYMBOL_STR(mlx4_sync_pkey_table) },
	{ 0xe3a57ebe, __VMLINUX_SYMBOL_STR(rdma_port_get_link_layer) },
	{ 0x672a4f2c, __VMLINUX_SYMBOL_STR(mlx4_hw_rule_sz) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x24e0c2aa, __VMLINUX_SYMBOL_STR(mlx4_srq_lookup) },
	{ 0xf05d4b0, __VMLINUX_SYMBOL_STR(mlx4_fmr_free) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x3fc32c39, __VMLINUX_SYMBOL_STR(ib_register_mad_agent) },
	{ 0xcf0a7e0, __VMLINUX_SYMBOL_STR(mlx4_register_interface) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x5109397a, __VMLINUX_SYMBOL_STR(ib_destroy_qp) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xd20372bf, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0xac390091, __VMLINUX_SYMBOL_STR(dev_base_lock) },
	{ 0xdb395ea6, __VMLINUX_SYMBOL_STR(mlx4_db_alloc) },
	{ 0x1551dc51, __VMLINUX_SYMBOL_STR(bitmap_find_free_region) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb0da3031, __VMLINUX_SYMBOL_STR(mlx4_mw_free) },
	{ 0xeecc7019, __VMLINUX_SYMBOL_STR(mlx4_gen_pkey_eqe) },
	{ 0x64d922bb, __VMLINUX_SYMBOL_STR(mlx4_cq_modify) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdf6d152c, __VMLINUX_SYMBOL_STR(mlx4_buf_free) },
	{ 0x18fa9c55, __VMLINUX_SYMBOL_STR(in_dev_finish_destroy) },
	{ 0xb2b7c4e1, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xaf4dc93, __VMLINUX_SYMBOL_STR(mlx4_cq_resize) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x9c1c59fc, __VMLINUX_SYMBOL_STR(ib_get_cached_gid) },
	{ 0x7fe32873, __VMLINUX_SYMBOL_STR(rb_replace_node) },
	{ 0xd2e5ad4b, __VMLINUX_SYMBOL_STR(ib_destroy_ah) },
	{ 0x5fbe21a, __VMLINUX_SYMBOL_STR(ib_modify_qp) },
	{ 0x7a44b75a, __VMLINUX_SYMBOL_STR(mlx4_qp_free) },
	{ 0x34f04bb6, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x176fdac4, __VMLINUX_SYMBOL_STR(ib_alloc_device) },
	{ 0x8fd83a7, __VMLINUX_SYMBOL_STR(ib_free_send_mad) },
	{ 0x4fb26459, __VMLINUX_SYMBOL_STR(mlx4_srq_arm) },
	{ 0xfd4aec81, __VMLINUX_SYMBOL_STR(ib_dealloc_device) },
	{ 0xbfce4cc9, __VMLINUX_SYMBOL_STR(mlx4_qp_remove) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9c2a70f5, __VMLINUX_SYMBOL_STR(ib_create_qp) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0x46b9ddf3, __VMLINUX_SYMBOL_STR(mlx4_mw_enable) },
	{ 0x5ed3c388, __VMLINUX_SYMBOL_STR(mlx4_mtt_init) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xb49b90b6, __VMLINUX_SYMBOL_STR(mlx4_mw_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd6ed702b, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xfd53e249, __VMLINUX_SYMBOL_STR(mlx4_assign_eq) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x890dc2ed, __VMLINUX_SYMBOL_STR(idr_alloc_cyclic) },
	{ 0x66a6e2d6, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x776d136c, __VMLINUX_SYMBOL_STR(mlx4_qp_modify) },
	{ 0xadaec9e7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4b6e178e, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0xe12ed7e3, __VMLINUX_SYMBOL_STR(mlx4_buf_alloc) },
	{ 0x69cd3a00, __VMLINUX_SYMBOL_STR(mlx4_fmr_alloc) },
	{ 0x322ff75f, __VMLINUX_SYMBOL_STR(mlx4_xrcd_alloc) },
	{ 0x57b8a6df, __VMLINUX_SYMBOL_STR(mlx4_mr_free) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xd95c059e, __VMLINUX_SYMBOL_STR(mlx4_gen_guid_change_eqe) },
	{ 0x2eddd741, __VMLINUX_SYMBOL_STR(ib_query_port) },
	{ 0xe2ee9829, __VMLINUX_SYMBOL_STR(mlx4_uar_alloc) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0xdcf517c3, __VMLINUX_SYMBOL_STR(ib_umem_get) },
	{ 0x961f83ab, __VMLINUX_SYMBOL_STR(mlx4_map_sw_to_hw_steering_mode) },
	{ 0x41e94ff4, __VMLINUX_SYMBOL_STR(mlx4_map_phys_fmr) },
	{ 0xa16f8ffe, __VMLINUX_SYMBOL_STR(mlx4_gen_port_state_change_eqe) },
	{ 0x1ed7727, __VMLINUX_SYMBOL_STR(mlx4_counter_free) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xeba96848, __VMLINUX_SYMBOL_STR(mlx4_FLOW_STEERING_IB_UC_QP_RANGE) },
	{ 0x3da243e5, __VMLINUX_SYMBOL_STR(mlx4_alloc_cmd_mailbox) },
	{ 0xe106d934, __VMLINUX_SYMBOL_STR(ib_get_cached_pkey) },
	{ 0x5ef0cb31, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xc1fd547b, __VMLINUX_SYMBOL_STR(mlx4_CLOSE_PORT) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xde1111f3, __VMLINUX_SYMBOL_STR(mlx4_cq_free) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xfc150956, __VMLINUX_SYMBOL_STR(ib_ud_header_init) },
	{ 0xde9e1b2c, __VMLINUX_SYMBOL_STR(ib_sa_unregister_client) },
	{ 0xfb8d9fd9, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0x37599c2, __VMLINUX_SYMBOL_STR(vlan_dev_real_dev) },
	{ 0xb9558f16, __VMLINUX_SYMBOL_STR(mlx4_is_slave_active) },
	{ 0x17d45d1d, __VMLINUX_SYMBOL_STR(ib_dispatch_event) },
	{ 0x93355540, __VMLINUX_SYMBOL_STR(ib_create_send_mad) },
	{ 0xd83d1324, __VMLINUX_SYMBOL_STR(ib_post_send_mad) },
	{ 0xdf401846, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x86e0c1a8, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xed56289f, __VMLINUX_SYMBOL_STR(ib_unregister_mad_agent) },
	{ 0xda0d50ec, __VMLINUX_SYMBOL_STR(ib_sa_cancel_query) },
	{ 0x334e50ed, __VMLINUX_SYMBOL_STR(mlx4_find_cached_mac) },
	{ 0x13fa16bd, __VMLINUX_SYMBOL_STR(ib_create_ah) },
	{ 0xb8cb4466, __VMLINUX_SYMBOL_STR(ib_sa_guid_info_rec_query) },
	{ 0x2e24e28d, __VMLINUX_SYMBOL_STR(set_and_calc_slave_port_state) },
	{ 0x3903cbec, __VMLINUX_SYMBOL_STR(mlx4_multicast_attach) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe1c842a2, __VMLINUX_SYMBOL_STR(mlx4_mr_alloc) },
	{ 0xf1806da9, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x77998a46, __VMLINUX_SYMBOL_STR(ib_umem_page_count) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x86d3aa2a, __VMLINUX_SYMBOL_STR(mlx4_get_slave_port_state) },
	{ 0x1e90621e, __VMLINUX_SYMBOL_STR(mlx4_db_free) },
	{ 0x24bd081f, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0x10879a59, __VMLINUX_SYMBOL_STR(__mlx4_cmd) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x8db82517, __VMLINUX_SYMBOL_STR(mlx4_qp_query) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x95b7052e, __VMLINUX_SYMBOL_STR(mlx4_xrcd_free) },
	{ 0x69fd3127, __VMLINUX_SYMBOL_STR(ib_register_device) },
	{ 0x671eef8f, __VMLINUX_SYMBOL_STR(mlx4_uar_free) },
	{ 0xc59ad169, __VMLINUX_SYMBOL_STR(mlx4_mtt_cleanup) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x8251bcc3, __VMLINUX_SYMBOL_STR(bitmap_release_region) },
	{ 0x7f9685a6, __VMLINUX_SYMBOL_STR(mlx4_free_cmd_mailbox) },
	{ 0x95fcdd40, __VMLINUX_SYMBOL_STR(ib_find_cached_pkey) },
	{ 0xb7cd0604, __VMLINUX_SYMBOL_STR(ib_unregister_device) },
	{ 0x651f4a17, __VMLINUX_SYMBOL_STR(mlx4_SYNC_TPT) },
	{ 0xf09d494f, __VMLINUX_SYMBOL_STR(mlx4_get_protocol_dev) },
	{ 0xbcb2088b, __VMLINUX_SYMBOL_STR(mlx4_cq_alloc) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xc4bff9cf, __VMLINUX_SYMBOL_STR(mlx4_qp_release_range) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xbcf2f892, __VMLINUX_SYMBOL_STR(mlx4_release_eq) },
	{ 0xd017f21c, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0x9e227299, __VMLINUX_SYMBOL_STR(mlx4_srq_query) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x32e5dee2, __VMLINUX_SYMBOL_STR(in6_dev_finish_destroy) },
	{ 0x84c582b5, __VMLINUX_SYMBOL_STR(mlx4_put_slave_node_guid) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x78614dce, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0x9e7aad54, __VMLINUX_SYMBOL_STR(ib_sa_register_client) },
	{ 0x6e030e26, __VMLINUX_SYMBOL_STR(ib_modify_qp_is_ok) },
	{ 0xf84b34dd, __VMLINUX_SYMBOL_STR(mlx4_fmr_enable) },
	{ 0x870bf928, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2ed6e386, __VMLINUX_SYMBOL_STR(ib_ud_header_pack) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0x7a3aa7b1, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x5b65863e, __VMLINUX_SYMBOL_STR(mlx4_multicast_detach) },
	{ 0x8f5d2c3f, __VMLINUX_SYMBOL_STR(ib_query_ah) },
	{ 0xd7f8120a, __VMLINUX_SYMBOL_STR(mlx4_pd_alloc) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd55bb60a, __VMLINUX_SYMBOL_STR(mlx4_gen_slaves_port_mgt_ev) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfcadd4b5, __VMLINUX_SYMBOL_STR(mlx4_write_mtt) },
	{ 0x6e35cf66, __VMLINUX_SYMBOL_STR(mlx4_unregister_interface) },
	{ 0xaabafdc4, __VMLINUX_SYMBOL_STR(mlx4_fmr_unmap) },
	{ 0x4cb16ddc, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0xa77a369d, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x66e7a542, __VMLINUX_SYMBOL_STR(mlx4_map_sw_to_hw_steering_id) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x715303ae, __VMLINUX_SYMBOL_STR(ib_umem_release) },
	{ 0xa2141d3d, __VMLINUX_SYMBOL_STR(mlx4_buf_write_mtt) },
	{ 0xf6869d55, __VMLINUX_SYMBOL_STR(mlx4_find_cached_vlan) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mlx4_core,ib_core,ib_mad,ib_sa";


MODULE_INFO(srcversion, "799088FAF9637B48D1E6F02");
