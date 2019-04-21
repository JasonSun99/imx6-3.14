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
	{ 0xeedde9b5, __VMLINUX_SYMBOL_STR(ata_sff_port_ops) },
	{ 0x17ff349b, __VMLINUX_SYMBOL_STR(ata_sff_data_xfer32) },
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
	{ 0x6360a1a2, __VMLINUX_SYMBOL_STR(ata_bmdma32_port_ops) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe8180a53, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x289c77ad, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xea418e0f, __VMLINUX_SYMBOL_STR(atapi_cmd_type) },
	{ 0xe329b057, __VMLINUX_SYMBOL_STR(ata_sff_postreset) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xb6aeb661, __VMLINUX_SYMBOL_STR(ata_id_c_string) },
	{ 0xf6e874f5, __VMLINUX_SYMBOL_STR(ata_timing_merge) },
	{ 0x215aa43b, __VMLINUX_SYMBOL_STR(ata_timing_compute) },
	{ 0x325e8bc3, __VMLINUX_SYMBOL_STR(ata_dev_pair) },
	{ 0x7f802513, __VMLINUX_SYMBOL_STR(ata_pci_sff_init_one) },
	{ 0xfa49965e, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0x76d3de27, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x8afbe492, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xe1b6885f, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x3cc246ab, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_clear_simplex) },
	{ 0xf675a277, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xdc0ae967, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010B9d00005228sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005229sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6421D39D02D81B70B834515");
