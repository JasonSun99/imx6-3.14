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
	{ 0x8f38f5d5, __VMLINUX_SYMBOL_STR(ahci_ops) },
	{ 0xc25705f3, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0xcbbba035, __VMLINUX_SYMBOL_STR(ahci_sdev_attrs) },
	{ 0xf947577b, __VMLINUX_SYMBOL_STR(ahci_shost_attrs) },
	{ 0x63205de1, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x5991c6a4, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xd32fe193, __VMLINUX_SYMBOL_STR(ata_scsi_change_queue_depth) },
	{ 0x94a68723, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x69e9a2cb, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x603d418f, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x7aba0e98, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x5eacba1f, __VMLINUX_SYMBOL_STR(ahci_interrupt) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xea50dad3, __VMLINUX_SYMBOL_STR(ahci_ignore_sss) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x22f36ec3, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0xa9ef20d9, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0xdc427b4b, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xc1280dcb, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xc99aed50, __VMLINUX_SYMBOL_STR(ahci_print_info) },
	{ 0x186df290, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x20a16dfa, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0x3f5a0f94, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0x9b4f25a0, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0x335e201d, __VMLINUX_SYMBOL_STR(ahci_set_em_messages) },
	{ 0x49b4a2c8, __VMLINUX_SYMBOL_STR(ahci_save_initial_config) },
	{ 0x2d2f52d3, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0xc38f04b6, __VMLINUX_SYMBOL_STR(pcim_iomap_regions_request_all) },
	{ 0x76d3de27, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc9b3e9f9, __VMLINUX_SYMBOL_STR(ahci_port_resume) },
	{ 0x4e09a161, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x4fc79ad4, __VMLINUX_SYMBOL_STR(ahci_fill_cmd_slot) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x271dc76b, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x719608a4, __VMLINUX_SYMBOL_STR(ahci_init_controller) },
	{ 0xe1e93c6, __VMLINUX_SYMBOL_STR(ahci_reset_controller) },
	{ 0x8afbe492, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xe1b6885f, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001191d0000000Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D164BB5CE2252EE2CFE1896");
