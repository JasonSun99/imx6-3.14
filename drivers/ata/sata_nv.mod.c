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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x29da07b8, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x63205de1, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x5991c6a4, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0x94a68723, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x603d418f, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x7aba0e98, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x45c48b49, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0xee1bdcea, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0x271dc76b, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xc25705f3, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xa9f90e18, __VMLINUX_SYMBOL_STR(ata_bmdma_qc_prep) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4e09a161, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x696d5184, __VMLINUX_SYMBOL_STR(ata_bmdma_port_start) },
	{ 0x22f36ec3, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0x76620642, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x8005b533, __VMLINUX_SYMBOL_STR(ata_pci_sff_activate_host) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x99bb061f, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xdc427b4b, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x5ffb6131, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_prepare_host) },
	{ 0x76d3de27, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xcccfb2fa, __VMLINUX_SYMBOL_STR(sata_deb_timing_hotplug) },
	{ 0x4fdc945d, __VMLINUX_SYMBOL_STR(sata_deb_timing_normal) },
	{ 0xfe27089a, __VMLINUX_SYMBOL_STR(sata_link_hardreset) },
	{ 0xefaf6e34, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0xf6b0f018, __VMLINUX_SYMBOL_STR(sata_link_resume) },
	{ 0x9342df8b, __VMLINUX_SYMBOL_STR(ata_bmdma_post_internal_cmd) },
	{ 0xb9af4850, __VMLINUX_SYMBOL_STR(ata_sff_tf_read) },
	{ 0xe733bb67, __VMLINUX_SYMBOL_STR(ata_bmdma_irq_clear) },
	{ 0xdfe67030, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0x13410437, __VMLINUX_SYMBOL_STR(__ata_ehi_push_desc) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa2f4c0ac, __VMLINUX_SYMBOL_STR(ata_bmdma_qc_issue) },
	{ 0x9a9269db, __VMLINUX_SYMBOL_STR(ata_bmdma_error_handler) },
	{ 0xa78cbd65, __VMLINUX_SYMBOL_STR(ata_qc_complete_multiple) },
	{ 0xfb457e73, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0x3891f0fc, __VMLINUX_SYMBOL_STR(sata_scr_write) },
	{ 0x8e5b6f41, __VMLINUX_SYMBOL_STR(sata_scr_read) },
	{ 0x48ed577f, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0x412db8, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xf0ca3a4b, __VMLINUX_SYMBOL_STR(ata_sff_check_status) },
	{ 0xc6320d68, __VMLINUX_SYMBOL_STR(ata_bmdma_port_intr) },
	{ 0x6edb9b22, __VMLINUX_SYMBOL_STR(ata_bmdma_stop) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa310abcc, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0xc111cece, __VMLINUX_SYMBOL_STR(blk_queue_segment_boundary) },
	{ 0x52731aeb, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5703942, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0x289c77ad, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0xd32fe193, __VMLINUX_SYMBOL_STR(ata_scsi_change_queue_depth) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xb6aeb661, __VMLINUX_SYMBOL_STR(ata_id_c_string) },
	{ 0x69e9a2cb, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x8afbe492, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xe1b6885f, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xff7a179, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xd53d0790, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010DEd0000008Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000266sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000267sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F1F1C10A8E21455FDDB0EEB");
