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
	{ 0x49ccc1f9, __VMLINUX_SYMBOL_STR(target_fabric_configfs_deregister) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xbaff3a71, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xeb4efdce, __VMLINUX_SYMBOL_STR(target_fabric_configfs_free) },
	{ 0xbdfc6baa, __VMLINUX_SYMBOL_STR(target_fabric_configfs_register) },
	{ 0x5857b06b, __VMLINUX_SYMBOL_STR(target_fabric_configfs_init) },
	{ 0xed4f5879, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x336552bc, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x4f0d1e84, __VMLINUX_SYMBOL_STR(__root_device_register) },
	{ 0x96b6f4b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xf808c981, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xb0964120, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x308cbec9, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x5e7fe5f7, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0xe088ba40, __VMLINUX_SYMBOL_STR(transport_free_session) },
	{ 0x941ae4a1, __VMLINUX_SYMBOL_STR(__transport_register_session) },
	{ 0xcd1060dd, __VMLINUX_SYMBOL_STR(core_tpg_check_initiator_node_acl) },
	{ 0x270670f4, __VMLINUX_SYMBOL_STR(transport_init_session) },
	{ 0xbbc592e5, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa532c30d, __VMLINUX_SYMBOL_STR(blk_queue_free_tags) },
	{ 0xea9a1414, __VMLINUX_SYMBOL_STR(iscsi_get_fabric_proto_ident) },
	{ 0x20cf682e, __VMLINUX_SYMBOL_STR(sas_get_fabric_proto_ident) },
	{ 0xb3469f2e, __VMLINUX_SYMBOL_STR(fc_get_fabric_proto_ident) },
	{ 0x66003fc6, __VMLINUX_SYMBOL_STR(iscsi_get_pr_transport_id) },
	{ 0xfed2cb53, __VMLINUX_SYMBOL_STR(sas_get_pr_transport_id) },
	{ 0x143ea031, __VMLINUX_SYMBOL_STR(fc_get_pr_transport_id) },
	{ 0x23c0660a, __VMLINUX_SYMBOL_STR(iscsi_get_pr_transport_id_len) },
	{ 0x43b01393, __VMLINUX_SYMBOL_STR(sas_get_pr_transport_id_len) },
	{ 0x4e6d8e1b, __VMLINUX_SYMBOL_STR(fc_get_pr_transport_id_len) },
	{ 0xdd6a0ed5, __VMLINUX_SYMBOL_STR(iscsi_parse_pr_out_transport_id) },
	{ 0xcff8ae00, __VMLINUX_SYMBOL_STR(sas_parse_pr_out_transport_id) },
	{ 0x19498df0, __VMLINUX_SYMBOL_STR(fc_parse_pr_out_transport_id) },
	{ 0xd278f80c, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc4e8faba, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x37f2eb37, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xe6fc8c1d, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x7127f802, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x738f7c36, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7211cd01, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x19051115, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xd6195785, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x64532c57, __VMLINUX_SYMBOL_STR(target_submit_cmd_map_sgls) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x5208f66d, __VMLINUX_SYMBOL_STR(transport_generic_handle_tmr) },
	{ 0x42a8b068, __VMLINUX_SYMBOL_STR(transport_lookup_tmr_lun) },
	{ 0xb27b0446, __VMLINUX_SYMBOL_STR(core_tmr_alloc_req) },
	{ 0x474f322d, __VMLINUX_SYMBOL_STR(transport_init_se_cmd) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x568c5cf8, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49daed98, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0x57a055ca, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0xc8f01ab, __VMLINUX_SYMBOL_STR(scsi_adjust_queue_depth) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcfc4eac2, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xedae3d10, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xe6b56fe5, __VMLINUX_SYMBOL_STR(root_device_unregister) },
	{ 0xf5e8c586, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x554408fa, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "6639DB198E39E7BD6EB5857");
