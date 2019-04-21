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
	{ 0x815a6107, __VMLINUX_SYMBOL_STR(ata_cable_unknown) },
	{ 0xd3665eb5, __VMLINUX_SYMBOL_STR(ata_pci_device_resume) },
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
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7d76f138, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x3cc246ab, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_clear_simplex) },
	{ 0xa9ef20d9, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0x76d3de27, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xd53d0790, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xfa49965e, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0x186df290, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x40af0dec, __VMLINUX_SYMBOL_STR(ata_xfer_mode2mask) },
	{ 0x43f56e82, __VMLINUX_SYMBOL_STR(ata_xfer_mode2shift) },
	{ 0x707ff1bb, __VMLINUX_SYMBOL_STR(ata_xfer_mask2mode) },
	{ 0x289c77ad, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0xc48b7ccf, __VMLINUX_SYMBOL_STR(ata_mode_string) },
	{ 0xf9ca3160, __VMLINUX_SYMBOL_STR(ata_id_xfermask) },
	{ 0xdd01b9b2, __VMLINUX_SYMBOL_STR(ata_dev_next) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001042d00003020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009412d00006565sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d0000886Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d0000673Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00003388d00008013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000561sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001045d0000C558sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016CAd00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d*sv*sd*bc01sc01i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc01i*");

MODULE_INFO(srcversion, "31299D553C1274E39FAADC4");
