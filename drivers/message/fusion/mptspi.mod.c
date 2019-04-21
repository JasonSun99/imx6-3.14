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
	{ 0xad1bbafe, __VMLINUX_SYMBOL_STR(mptscsih_shutdown) },
	{ 0xd386d88b, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xe931041e, __VMLINUX_SYMBOL_STR(mptscsih_host_attrs) },
	{ 0xe36e73b0, __VMLINUX_SYMBOL_STR(mptscsih_show_info) },
	{ 0x2afdefaa, __VMLINUX_SYMBOL_STR(mptscsih_bios_param) },
	{ 0x3952ba80, __VMLINUX_SYMBOL_STR(mptscsih_change_queue_depth) },
	{ 0x5c8f5f7a, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0x2475932c, __VMLINUX_SYMBOL_STR(mptscsih_bus_reset) },
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
	{ 0x86f40601, __VMLINUX_SYMBOL_STR(spi_release_transport) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x95c08fc, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0xfd611836, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0x766be74d, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0xb4bd28c2, __VMLINUX_SYMBOL_STR(spi_attach_transport) },
	{ 0xc5627dd5, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x505325c4, __VMLINUX_SYMBOL_STR(mpt_findImVolumes) },
	{ 0x68823f99, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0xeb4fbabb, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x8e60ed75, __VMLINUX_SYMBOL_STR(spi_display_xfer_agreement) },
	{ 0xa16b51c6, __VMLINUX_SYMBOL_STR(spi_dv_device) },
	{ 0xa5c570aa, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0xaee20cf5, __VMLINUX_SYMBOL_STR(mpt_HardResetHandler) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7c2b121b, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0xe7d95a19, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x2834f00f, __VMLINUX_SYMBOL_STR(mptscsih_IssueTaskMgmt) },
	{ 0x7211cd01, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9d521d67, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0x19051115, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x25360af0, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x42dd88ef, __VMLINUX_SYMBOL_STR(mptscsih_event_process) },
	{ 0x1db0169c, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5d5bc965, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0xc2bd4d69, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd2f0acec, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0xd64d7aa, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0xb5f60998, __VMLINUX_SYMBOL_STR(mptscsih_slave_destroy) },
	{ 0x4671943, __VMLINUX_SYMBOL_STR(mptscsih_raid_id_to_num) },
	{ 0xb58d6a5d, __VMLINUX_SYMBOL_STR(mptscsih_is_phys_disk) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd6195785, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x44dfdec6, __VMLINUX_SYMBOL_STR(scsi_device_lookup_by_target) },
	{ 0x73b075f4, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe21cc54f, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc8958421, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_spi";

MODULE_ALIAS("pci:v00001000d00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BDA6EA8137D586EBFEAB699");
