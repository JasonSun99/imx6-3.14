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
	{ 0xb01a8eab, __VMLINUX_SYMBOL_STR(ata_pio_need_iordy) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x7d76f138, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x186df290, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xaa1a3e63, __VMLINUX_SYMBOL_STR(ata_sff_prereset) },
	{ 0xaa1e66ba, __VMLINUX_SYMBOL_STR(pci_test_config_bits) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xfa49965e, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0xdc427b4b, __VMLINUX_SYMBOL_STR(ata_print_version) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001055d00009130sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D3CED45206903C7589D568F");
