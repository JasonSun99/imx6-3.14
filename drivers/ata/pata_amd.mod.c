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
	{ 0x815a6107, __VMLINUX_SYMBOL_STR(ata_cable_unknown) },
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
	{ 0xee1bdcea, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0x5246eddb, __VMLINUX_SYMBOL_STR(ata_cable_ignore) },
	{ 0x6360a1a2, __VMLINUX_SYMBOL_STR(ata_bmdma32_port_ops) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xd53d0790, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xdc427b4b, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xfa49965e, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0x76d3de27, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xdd01b9b2, __VMLINUX_SYMBOL_STR(ata_dev_next) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf6e874f5, __VMLINUX_SYMBOL_STR(ata_timing_merge) },
	{ 0x215aa43b, __VMLINUX_SYMBOL_STR(ata_timing_compute) },
	{ 0x325e8bc3, __VMLINUX_SYMBOL_STR(ata_dev_pair) },
	{ 0x5703942, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0x743a165e, __VMLINUX_SYMBOL_STR(ata_pack_xfermask) },
	{ 0xaa1a3e63, __VMLINUX_SYMBOL_STR(ata_sff_prereset) },
	{ 0xaa1e66ba, __VMLINUX_SYMBOL_STR(pci_test_config_bits) },
	{ 0xff7a179, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x3cc246ab, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_clear_simplex) },
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

MODULE_ALIAS("pci:v00001022d00007401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007409sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007441sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007469sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000035sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000265sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000036Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000448sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000056Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000759sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000209Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "79B46DCC1D4E260923F02C1");
