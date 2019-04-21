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
	{ 0xee1bdcea, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0xeedde9b5, __VMLINUX_SYMBOL_STR(ata_sff_port_ops) },
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
	{ 0xee1068d0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcbaae858, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x58b796f6, __VMLINUX_SYMBOL_STR(ata_sff_queue_pio_task) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0xa2f4c0ac, __VMLINUX_SYMBOL_STR(ata_bmdma_qc_issue) },
	{ 0xefaf6e34, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xcfbd3026, __VMLINUX_SYMBOL_STR(ata_sff_softreset) },
	{ 0x19034d1, __VMLINUX_SYMBOL_STR(sata_std_hardreset) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x22f36ec3, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0xa9ef20d9, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0xc7e16496, __VMLINUX_SYMBOL_STR(pci_try_set_mwi) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x3f5a0f94, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x2d2f52d3, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x99bb061f, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x76d3de27, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xe1b6885f, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0x11fd688a, __VMLINUX_SYMBOL_STR(ata_link_offline) },
	{ 0x307e2874, __VMLINUX_SYMBOL_STR(sata_async_notification) },
	{ 0xdfe67030, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0xa5d40157, __VMLINUX_SYMBOL_STR(sata_scr_write_flush) },
	{ 0xc6320d68, __VMLINUX_SYMBOL_STR(ata_bmdma_port_intr) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x57674fd7, __VMLINUX_SYMBOL_STR(__sw_hweight16) },
	{ 0x32a31be, __VMLINUX_SYMBOL_STR(ata_link_abort) },
	{ 0xfb457e73, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0x48ed577f, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0xa78cbd65, __VMLINUX_SYMBOL_STR(ata_qc_complete_multiple) },
	{ 0x76620642, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xc5bc1f56, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xdc427b4b, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xc1280dcb, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7930d225, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x7f9f2867, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xcd07916b, __VMLINUX_SYMBOL_STR(phy_power_on) },
	{ 0xf96056d0, __VMLINUX_SYMBOL_STR(devm_phy_optional_get) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc329a245, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x1e6964e8, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x6a5d3888, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x9b4f25a0, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0x561e4b77, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xa7947bc, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x93aa2edf, __VMLINUX_SYMBOL_STR(dmam_pool_create) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xee3496c3, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xcccfb2fa, __VMLINUX_SYMBOL_STR(sata_deb_timing_hotplug) },
	{ 0x4fdc945d, __VMLINUX_SYMBOL_STR(sata_deb_timing_normal) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8e5b6f41, __VMLINUX_SYMBOL_STR(sata_scr_read) },
	{ 0xfe27089a, __VMLINUX_SYMBOL_STR(sata_link_hardreset) },
	{ 0xf54c51a2, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0x5703942, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0x289c77ad, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0xe769f32c, __VMLINUX_SYMBOL_STR(sata_pmp_error_handler) },
	{ 0x412db8, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xe48cd8d4, __VMLINUX_SYMBOL_STR(ata_eh_analyze_ncq_error) },
	{ 0x836bc64e, __VMLINUX_SYMBOL_STR(ata_sff_dma_pause) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xc2ec11d3, __VMLINUX_SYMBOL_STR(phy_power_off) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x19384649, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xbc219a96, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xfa86bffb, __VMLINUX_SYMBOL_STR(ata_host_detach) },
	{ 0x4a644ad, __VMLINUX_SYMBOL_STR(ata_host_suspend) },
	{ 0x8afbe492, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmarvell,armada-370-sata*");
MODULE_ALIAS("of:N*T*Cmarvell,orion-sata*");
MODULE_ALIAS("pci:v000011ABd00005040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001742sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000241sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000243sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00007042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AA7796693CB2F8A68021536");
