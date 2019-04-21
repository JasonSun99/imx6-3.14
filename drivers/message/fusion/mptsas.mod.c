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
	{ 0xc8958421, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0xd386d88b, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xe931041e, __VMLINUX_SYMBOL_STR(mptscsih_host_attrs) },
	{ 0xe36e73b0, __VMLINUX_SYMBOL_STR(mptscsih_show_info) },
	{ 0x2afdefaa, __VMLINUX_SYMBOL_STR(mptscsih_bios_param) },
	{ 0x3952ba80, __VMLINUX_SYMBOL_STR(mptscsih_change_queue_depth) },
	{ 0xb5f60998, __VMLINUX_SYMBOL_STR(mptscsih_slave_destroy) },
	{ 0x5c8f5f7a, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0x29f5b192, __VMLINUX_SYMBOL_STR(mptscsih_dev_reset) },
	{ 0x921ad8a7, __VMLINUX_SYMBOL_STR(mptscsih_abort) },
	{ 0x60ad2c1e, __VMLINUX_SYMBOL_STR(mptscsih_info) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xfb16ffba, __VMLINUX_SYMBOL_STR(mptscsih_scandv_complete) },
	{ 0x8bde7aac, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_complete) },
	{ 0xedb2e9b1, __VMLINUX_SYMBOL_STR(mptscsih_io_done) },
	{ 0xda8c5ad7, __VMLINUX_SYMBOL_STR(sas_release_transport) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x95c08fc, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0xfd611836, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0x766be74d, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x73be263e, __VMLINUX_SYMBOL_STR(sas_attach_transport) },
	{ 0x49daed98, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0x8190ada9, __VMLINUX_SYMBOL_STR(mpt_GetIocState) },
	{ 0x560fd7b6, __VMLINUX_SYMBOL_STR(mptscsih_get_scsi_lookup) },
	{ 0x9bcdcc9b, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg1) },
	{ 0x826c3708, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_get_num_paths) },
	{ 0xb0964120, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x505325c4, __VMLINUX_SYMBOL_STR(mpt_findImVolumes) },
	{ 0x6bdf3b18, __VMLINUX_SYMBOL_STR(mptscsih_flush_running_cmds) },
	{ 0x1d29798a, __VMLINUX_SYMBOL_STR(mptbase_sas_persist_operation) },
	{ 0x7211cd01, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x19051115, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x25360af0, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x738f7c36, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0xf808c981, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x308cbec9, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x68823f99, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0xe304147c, __VMLINUX_SYMBOL_STR(sas_read_port_mode_page) },
	{ 0xea10212a, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x879845a0, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_response_code) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb88174ab, __VMLINUX_SYMBOL_STR(starget_for_each_device) },
	{ 0x4f2c33c7, __VMLINUX_SYMBOL_STR(mpt_clear_taskmgmt_in_progress_flag) },
	{ 0x45489074, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame_hi_pri) },
	{ 0x267d5c93, __VMLINUX_SYMBOL_STR(mpt_set_taskmgmt_in_progress_flag) },
	{ 0x7c2b121b, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x81c46a31, __VMLINUX_SYMBOL_STR(scsi_device_set_state) },
	{ 0xe5569154, __VMLINUX_SYMBOL_STR(device_reprobe) },
	{ 0x1f2429e5, __VMLINUX_SYMBOL_STR(sas_port_delete) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x627b051b, __VMLINUX_SYMBOL_STR(mpt_detach) },
	{ 0x9d521d67, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0x10b7aa82, __VMLINUX_SYMBOL_STR(sas_remove_host) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x647f89c5, __VMLINUX_SYMBOL_STR(sas_expander_alloc) },
	{ 0x9324549, __VMLINUX_SYMBOL_STR(scsi_is_sas_rphy) },
	{ 0xd12b154e, __VMLINUX_SYMBOL_STR(sas_port_mark_backlink) },
	{ 0x8f2afc0d, __VMLINUX_SYMBOL_STR(sas_port_add) },
	{ 0xce734b29, __VMLINUX_SYMBOL_STR(sas_port_alloc_num) },
	{ 0xcbcd255d, __VMLINUX_SYMBOL_STR(sas_phy_free) },
	{ 0xeafeb1e5, __VMLINUX_SYMBOL_STR(sas_phy_add) },
	{ 0xa6707bf1, __VMLINUX_SYMBOL_STR(sas_phy_alloc) },
	{ 0x55a277e5, __VMLINUX_SYMBOL_STR(sas_port_add_phy) },
	{ 0xdb86eca8, __VMLINUX_SYMBOL_STR(mpt_Soft_Hard_ResetHandler) },
	{ 0xa5c570aa, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xd2f0acec, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0xd64d7aa, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0x5ab2090c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x4fe60ad4, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg0) },
	{ 0x9008015a, __VMLINUX_SYMBOL_STR(sas_rphy_free) },
	{ 0x85c4a705, __VMLINUX_SYMBOL_STR(sas_rphy_add) },
	{ 0xe30a859f, __VMLINUX_SYMBOL_STR(sas_end_device_alloc) },
	{ 0x7dae9cb2, __VMLINUX_SYMBOL_STR(sas_port_delete_phy) },
	{ 0x1db0169c, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0x5d5bc965, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0xc2bd4d69, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeb4fbabb, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x73b075f4, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0x4671943, __VMLINUX_SYMBOL_STR(mptscsih_raid_id_to_num) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb58d6a5d, __VMLINUX_SYMBOL_STR(mptscsih_is_phys_disk) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd6195785, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xe21cc54f, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_sas";

MODULE_ALIAS("pci:v00001000d00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000059sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "56DBBDADE2CD351E7007BA4");
