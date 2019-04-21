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
	{ 0x37b23353, __VMLINUX_SYMBOL_STR(sata_pmp_port_ops) },
	{ 0x271dc76b, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xc25705f3, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x29da07b8, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x63205de1, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x5991c6a4, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xd32fe193, __VMLINUX_SYMBOL_STR(ata_scsi_change_queue_depth) },
	{ 0x94a68723, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x69e9a2cb, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x603d418f, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x7aba0e98, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0xdfe67030, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0x32a31be, __VMLINUX_SYMBOL_STR(ata_link_abort) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x307e2874, __VMLINUX_SYMBOL_STR(sata_async_notification) },
	{ 0xfb457e73, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0x48ed577f, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0x412db8, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xf8f3a0fb, __VMLINUX_SYMBOL_STR(ata_ratelimit) },
	{ 0xa78cbd65, __VMLINUX_SYMBOL_STR(ata_qc_complete_multiple) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x30551e6, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x22f36ec3, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0xdc427b4b, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xc1280dcb, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x1f76d4cc, __VMLINUX_SYMBOL_STR(pcie_set_readrq) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x9b4f25a0, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0x2d2f52d3, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x99bb061f, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x76d3de27, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x45c48b49, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0x1ad1f2e7, __VMLINUX_SYMBOL_STR(_memcpy_fromio) },
	{ 0xc428068d, __VMLINUX_SYMBOL_STR(sata_deb_timing_long) },
	{ 0x406e7a21, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0x5703942, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0x11fd688a, __VMLINUX_SYMBOL_STR(ata_link_offline) },
	{ 0xfabc60b4, __VMLINUX_SYMBOL_STR(sata_link_debounce) },
	{ 0xed99474e, __VMLINUX_SYMBOL_STR(ata_link_online) },
	{ 0x98383fde, __VMLINUX_SYMBOL_STR(sata_set_spd) },
	{ 0xefaf6e34, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0x19034d1, __VMLINUX_SYMBOL_STR(sata_std_hardreset) },
	{ 0xe769f32c, __VMLINUX_SYMBOL_STR(sata_pmp_error_handler) },
	{ 0xe945e317, __VMLINUX_SYMBOL_STR(ata_eh_freeze_port) },
	{ 0x3f5a0f94, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4e09a161, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8afbe492, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xe1b6885f, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xce0b7d5c, __VMLINUX_SYMBOL_STR(ata_wait_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001095d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003132sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000242sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000244sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003531sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7797D7EB189CA5886BFFB10");
