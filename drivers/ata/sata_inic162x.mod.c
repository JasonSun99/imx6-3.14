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
	{ 0xec783456, __VMLINUX_SYMBOL_STR(sata_port_ops) },
	{ 0x271dc76b, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xc25705f3, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x29da07b8, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x63205de1, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x5991c6a4, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0x94a68723, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x69e9a2cb, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x603d418f, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x7aba0e98, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x412db8, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0x13410437, __VMLINUX_SYMBOL_STR(__ata_ehi_push_desc) },
	{ 0x5703942, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0xdfe67030, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0xfb457e73, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0x48ed577f, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0x29755f0c, __VMLINUX_SYMBOL_STR(ata_qc_complete) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdc427b4b, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xc1280dcb, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xc4aac332, __VMLINUX_SYMBOL_STR(pci_set_dma_max_seg_size) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x3f5a0f94, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0x2d2f52d3, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x99bb061f, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x76d3de27, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x9b4f25a0, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0xc3c95150, __VMLINUX_SYMBOL_STR(dev_alert) },
	{ 0x4e09a161, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xea418e0f, __VMLINUX_SYMBOL_STR(atapi_cmd_type) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x4fdc945d, __VMLINUX_SYMBOL_STR(sata_deb_timing_normal) },
	{ 0xcccfb2fa, __VMLINUX_SYMBOL_STR(sata_deb_timing_hotplug) },
	{ 0xefaf6e34, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0x31bb5284, __VMLINUX_SYMBOL_STR(ata_wait_after_reset) },
	{ 0xed99474e, __VMLINUX_SYMBOL_STR(ata_link_online) },
	{ 0xf6b0f018, __VMLINUX_SYMBOL_STR(sata_link_resume) },
	{ 0x406e7a21, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0x602559bf, __VMLINUX_SYMBOL_STR(ata_std_error_handler) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8afbe492, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xe1b6885f, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001101d00001622sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "91153C3838BE1520584F407");
