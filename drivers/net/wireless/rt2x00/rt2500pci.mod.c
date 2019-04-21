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
	{ 0xa11e2ba5, __VMLINUX_SYMBOL_STR(rt2x00pci_resume) },
	{ 0x7264f103, __VMLINUX_SYMBOL_STR(rt2x00pci_suspend) },
	{ 0xb6517ef1, __VMLINUX_SYMBOL_STR(rt2x00pci_remove) },
	{ 0xd9345a9f, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x6647e637, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0xbb86cced, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x4e8226e6, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0xa76ec870, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0x834f22cb, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x77ef95d2, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xc899d522, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x1b4f812b, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xb3331e3e, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x3fc60df1, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xa2a602c6, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xee9b6622, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x6950529c, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x588dc244, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x63f1616b, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x70e8993e, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x37937498, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0xbb2962a2, __VMLINUX_SYMBOL_STR(rt2x00mmio_flush_queue) },
	{ 0xaf4e83f, __VMLINUX_SYMBOL_STR(rt2x00mmio_uninitialize) },
	{ 0xe512ab8b, __VMLINUX_SYMBOL_STR(rt2x00mmio_initialize) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x58dfc391, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0xe85a31eb, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone) },
	{ 0x9deb127a, __VMLINUX_SYMBOL_STR(rt2x00lib_beacondone) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x74a3c9df, __VMLINUX_SYMBOL_STR(rt2x00mmio_rxdone) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa10d5621, __VMLINUX_SYMBOL_STR(rt2x00queue_map_txskb) },
	{ 0x23679939, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x39626e8c, __VMLINUX_SYMBOL_STR(rt2x00mmio_regbusy_read) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa9242a9a, __VMLINUX_SYMBOL_STR(rt2x00pci_probe) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00pci,rt2x00lib,rt2x00mmio,eeprom_93cx6";

MODULE_ALIAS("pci:v00001814d00000201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "659C877BFFF6A5D95A7B6FE");
