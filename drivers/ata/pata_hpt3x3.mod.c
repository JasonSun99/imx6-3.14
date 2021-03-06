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
	{ 0xee1bdcea, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0x88c6ba00, __VMLINUX_SYMBOL_STR(ata_cable_40wire) },
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
	{ 0xe818b32b, __VMLINUX_SYMBOL_STR(ata_bmdma_interrupt) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xa9ef20d9, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0xdc427b4b, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xc1280dcb, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x3f5a0f94, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0x73a48b4a, __VMLINUX_SYMBOL_STR(ata_sff_std_ports) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x2d2f52d3, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x99bb061f, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x76d3de27, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x9b4f25a0, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0x8afbe492, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xe1b6885f, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x186df290, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x7d76f138, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xff7a179, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xd53d0790, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001103d00000003sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8DFE26DDF7A29699E56A3AC");
