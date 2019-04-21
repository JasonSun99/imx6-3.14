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
	{ 0xf73f9c58, __VMLINUX_SYMBOL_STR(ata_sff_data_xfer_noirq) },
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
	{ 0x289c77ad, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb6aeb661, __VMLINUX_SYMBOL_STR(ata_id_c_string) },
	{ 0xf6e874f5, __VMLINUX_SYMBOL_STR(ata_timing_merge) },
	{ 0x215aa43b, __VMLINUX_SYMBOL_STR(ata_timing_compute) },
	{ 0x325e8bc3, __VMLINUX_SYMBOL_STR(ata_dev_pair) },
	{ 0xaa1a3e63, __VMLINUX_SYMBOL_STR(ata_sff_prereset) },
	{ 0xaa1e66ba, __VMLINUX_SYMBOL_STR(pci_test_config_bits) },
	{ 0xa7d8258d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x696d5184, __VMLINUX_SYMBOL_STR(ata_bmdma_port_start) },
	{ 0x19d6199f, __VMLINUX_SYMBOL_STR(ata_dummy_port_info) },
	{ 0xdc427b4b, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xfa49965e, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0xf675a277, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xe8180a53, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x76d3de27, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8afbe492, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xe1b6885f, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xff7a179, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd53d0790, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001106d00000415sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000571sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000581sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00001571sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003164sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d0000C409sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "692525307A790A083362BA0");
