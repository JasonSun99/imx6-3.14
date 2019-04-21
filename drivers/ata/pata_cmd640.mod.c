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
	{ 0xeedde9b5, __VMLINUX_SYMBOL_STR(ata_sff_port_ops) },
	{ 0xf73f9c58, __VMLINUX_SYMBOL_STR(ata_sff_data_xfer_noirq) },
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
	{ 0x553248d, __VMLINUX_SYMBOL_STR(ata_sff_qc_issue) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6e874f5, __VMLINUX_SYMBOL_STR(ata_timing_merge) },
	{ 0x215aa43b, __VMLINUX_SYMBOL_STR(ata_timing_compute) },
	{ 0x325e8bc3, __VMLINUX_SYMBOL_STR(ata_dev_pair) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7f802513, __VMLINUX_SYMBOL_STR(ata_pci_sff_init_one) },
	{ 0x76d3de27, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x8afbe492, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xe1b6885f, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001095d00000640sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F7FABB1D776D58763A7DA83");
