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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xa11e2ba5, __VMLINUX_SYMBOL_STR(rt2x00pci_resume) },
	{ 0x7264f103, __VMLINUX_SYMBOL_STR(rt2x00pci_suspend) },
	{ 0xb6517ef1, __VMLINUX_SYMBOL_STR(rt2x00pci_remove) },
	{ 0xd9345a9f, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x6647e637, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0xa76ec870, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0x834f22cb, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0xcaae6c32, __VMLINUX_SYMBOL_STR(rt2800_get_survey) },
	{ 0xe19d250d, __VMLINUX_SYMBOL_STR(rt2800_ampdu_action) },
	{ 0xefbd262a, __VMLINUX_SYMBOL_STR(rt2800_get_tsf) },
	{ 0x8bd066b8, __VMLINUX_SYMBOL_STR(rt2800_conf_tx) },
	{ 0x39c25baf, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_remove) },
	{ 0x81d89a40, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_add) },
	{ 0x875e2536, __VMLINUX_SYMBOL_STR(rt2800_set_rts_threshold) },
	{ 0xfb85a65b, __VMLINUX_SYMBOL_STR(rt2800_get_tkip_seq) },
	{ 0xc899d522, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x1b4f812b, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xb3331e3e, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0xd9cdf44f, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x3fc60df1, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xa2a602c6, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xee9b6622, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x6950529c, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x588dc244, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x63f1616b, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x70e8993e, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x37937498, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0xafbb65ab, __VMLINUX_SYMBOL_STR(rt2800mmio_get_txwi) },
	{ 0x9e6a52b8, __VMLINUX_SYMBOL_STR(rt2800mmio_init_registers) },
	{ 0x39626e8c, __VMLINUX_SYMBOL_STR(rt2x00mmio_regbusy_read) },
	{ 0x9047089d, __VMLINUX_SYMBOL_STR(rt2800_sta_remove) },
	{ 0xfc251d36, __VMLINUX_SYMBOL_STR(rt2800_sta_add) },
	{ 0x508a38d2, __VMLINUX_SYMBOL_STR(rt2800_config) },
	{ 0xccc1ec61, __VMLINUX_SYMBOL_STR(rt2800_config_ant) },
	{ 0x9a1de158, __VMLINUX_SYMBOL_STR(rt2800_config_erp) },
	{ 0xfed22e84, __VMLINUX_SYMBOL_STR(rt2800_config_intf) },
	{ 0x2ea65d1f, __VMLINUX_SYMBOL_STR(rt2800_config_filter) },
	{ 0x9491fd0a, __VMLINUX_SYMBOL_STR(rt2800_config_pairwise_key) },
	{ 0x61df794a, __VMLINUX_SYMBOL_STR(rt2800_config_shared_key) },
	{ 0x7185896b, __VMLINUX_SYMBOL_STR(rt2800mmio_fill_rxdone) },
	{ 0x9401ab31, __VMLINUX_SYMBOL_STR(rt2800_clear_beacon) },
	{ 0xa3c0321c, __VMLINUX_SYMBOL_STR(rt2800_write_beacon) },
	{ 0x30253f4b, __VMLINUX_SYMBOL_STR(rt2800_write_tx_data) },
	{ 0x61628402, __VMLINUX_SYMBOL_STR(rt2800mmio_write_tx_desc) },
	{ 0xbb2962a2, __VMLINUX_SYMBOL_STR(rt2x00mmio_flush_queue) },
	{ 0x8bce33ce, __VMLINUX_SYMBOL_STR(rt2800mmio_stop_queue) },
	{ 0x79e52c4c, __VMLINUX_SYMBOL_STR(rt2800mmio_kick_queue) },
	{ 0x11364ac7, __VMLINUX_SYMBOL_STR(rt2800mmio_start_queue) },
	{ 0xc253beef, __VMLINUX_SYMBOL_STR(rt2800_vco_calibration) },
	{ 0x2a52081e, __VMLINUX_SYMBOL_STR(rt2800_gain_calibration) },
	{ 0x50a9fd31, __VMLINUX_SYMBOL_STR(rt2800_link_tuner) },
	{ 0x944857ec, __VMLINUX_SYMBOL_STR(rt2800_reset_tuner) },
	{ 0xce97796a, __VMLINUX_SYMBOL_STR(rt2800_link_stats) },
	{ 0x594cd6ef, __VMLINUX_SYMBOL_STR(rt2800_rfkill_poll) },
	{ 0x87a5f0bd, __VMLINUX_SYMBOL_STR(rt2800mmio_clear_entry) },
	{ 0x5ab7c6d, __VMLINUX_SYMBOL_STR(rt2800mmio_get_entry_state) },
	{ 0xaf4e83f, __VMLINUX_SYMBOL_STR(rt2x00mmio_uninitialize) },
	{ 0xe512ab8b, __VMLINUX_SYMBOL_STR(rt2x00mmio_initialize) },
	{ 0xb5eaa10, __VMLINUX_SYMBOL_STR(rt2800_load_firmware) },
	{ 0xd423032a, __VMLINUX_SYMBOL_STR(rt2800_check_firmware) },
	{ 0xcfddc594, __VMLINUX_SYMBOL_STR(rt2800_probe_hw) },
	{ 0xc6a1455e, __VMLINUX_SYMBOL_STR(rt2800mmio_autowake_tasklet) },
	{ 0x92c0bcd1, __VMLINUX_SYMBOL_STR(rt2800mmio_rxdone_tasklet) },
	{ 0x2505789d, __VMLINUX_SYMBOL_STR(rt2800mmio_tbtt_tasklet) },
	{ 0xfad1430, __VMLINUX_SYMBOL_STR(rt2800mmio_pretbtt_tasklet) },
	{ 0xe28f94c7, __VMLINUX_SYMBOL_STR(rt2800mmio_txstatus_tasklet) },
	{ 0x5fa4db64, __VMLINUX_SYMBOL_STR(rt2800mmio_interrupt) },
	{ 0x2491ab1c, __VMLINUX_SYMBOL_STR(rt2800mmio_queue_init) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x4b7a2c90, __VMLINUX_SYMBOL_STR(rt2800mmio_enable_radio) },
	{ 0xeedb3881, __VMLINUX_SYMBOL_STR(rt2800mmio_toggle_irq) },
	{ 0x407a1745, __VMLINUX_SYMBOL_STR(rt2800_mcu_request) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbc32caa6, __VMLINUX_SYMBOL_STR(rt2800_read_eeprom_efuse) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0x38f0e4c2, __VMLINUX_SYMBOL_STR(rt2800_efuse_detect) },
	{ 0xa9242a9a, __VMLINUX_SYMBOL_STR(rt2x00pci_probe) },
	{ 0x23679939, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x1ad1f2e7, __VMLINUX_SYMBOL_STR(_memcpy_fromio) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00pci,rt2x00lib,rt2800lib,rt2800mmio,rt2x00mmio,eeprom_93cx6";

MODULE_ALIAS("pci:v00001814d00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000781sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007708sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007728sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007738sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007748sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007768sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001462d0000891Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A3Bd00001059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003593sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000359Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3C7746DD6C1FC7D7AEE619C");
