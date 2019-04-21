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
	{ 0x2494fb5a, __VMLINUX_SYMBOL_STR(rtl_cam_delete_one_entry) },
	{ 0x4660427a, __VMLINUX_SYMBOL_STR(rtl_fw_cb) },
	{ 0x46b36813, __VMLINUX_SYMBOL_STR(rtl_pci_probe) },
	{ 0x3936608e, __VMLINUX_SYMBOL_STR(rtl_cam_get_free_entry) },
	{ 0xaa113ed7, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_rfpath_switch) },
	{ 0x8fc2c0b2, __VMLINUX_SYMBOL_STR(_rtl92c_phy_fw_rf_serial_read) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x13a5ff64, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_txpower_level) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6faf6aa4, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_rsvdpagepkt) },
	{ 0xc6e91e86, __VMLINUX_SYMBOL_STR(rtl92c_dm_check_txpower_tracking) },
	{ 0x1fe714c6, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0xc2e3ba88, __VMLINUX_SYMBOL_STR(rtl92c_dm_watchdog) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x2e82d885, __VMLINUX_SYMBOL_STR(_rtl92c_phy_init_bb_rf_register_definition) },
	{ 0xf341281f, __VMLINUX_SYMBOL_STR(_rtl92c_phy_rf_serial_write) },
	{ 0x4c56cce0, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0xb933d12a, __VMLINUX_SYMBOL_STR(_rtl92c_phy_rf_serial_read) },
	{ 0x4b0d70aa, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_bw_mode) },
	{ 0x6e1ff1db, __VMLINUX_SYMBOL_STR(rtl92c_phy_lc_calibrate) },
	{ 0xb3314d48, __VMLINUX_SYMBOL_STR(_rtl92c_phy_calculate_bit_shift) },
	{ 0x84335ac4, __VMLINUX_SYMBOL_STR(rtl_efuse_shadow_map_update) },
	{ 0x79188a02, __VMLINUX_SYMBOL_STR(rtl_query_rxpwrpercentage) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x76316598, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3a5b5e5c, __VMLINUX_SYMBOL_STR(rtl_phy_scan_operation_backup) },
	{ 0x20b3a437, __VMLINUX_SYMBOL_STR(rtl92c_dm_init_edca_turbo) },
	{ 0x29e636db, __VMLINUX_SYMBOL_STR(rtl92c_phy_iq_calibrate) },
	{ 0x166ce0d5, __VMLINUX_SYMBOL_STR(rtl92c_dm_init) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf5e62682, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_bb_reg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x96cf674f, __VMLINUX_SYMBOL_STR(rtl_pci_resume) },
	{ 0x3c20b67f, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5f05287, __VMLINUX_SYMBOL_STR(rtl92c_firmware_selfreset) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x252c9fa, __VMLINUX_SYMBOL_STR(rtl92c_dm_rf_saving) },
	{ 0x307235e1, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_pwrmode_cmd) },
	{ 0x216cb99e, __VMLINUX_SYMBOL_STR(_rtl92c_phy_fw_rf_serial_write) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x97d27874, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x804fd1da, __VMLINUX_SYMBOL_STR(rtl_pci_suspend) },
	{ 0xc7b14e11, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0x7282efe1, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_joinbss_report_cmd) },
	{ 0x48eb76ff, __VMLINUX_SYMBOL_STR(rtl92c_download_fw) },
	{ 0xedb0e361, __VMLINUX_SYMBOL_STR(rtl_pci_disconnect) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xa4a666f4, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_io_cmd) },
	{ 0x1a776c90, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x121b91da, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0x85c2e071, __VMLINUX_SYMBOL_STR(rtl92c_phy_rf_config) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xea3a1b44, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0xf1a67657, __VMLINUX_SYMBOL_STR(rtl92c_set_p2p_ps_offload_cmd) },
	{ 0xc1689d1b, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0x535f6a39, __VMLINUX_SYMBOL_STR(rtl92ce_phy_set_rf_on) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x5af5d47e, __VMLINUX_SYMBOL_STR(rtl92c_phy_query_bb_reg) },
	{ 0x9099057b, __VMLINUX_SYMBOL_STR(_rtl92c_store_pwrIndex_diffrate_offset) },
	{ 0x8a01d61, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x965045b9, __VMLINUX_SYMBOL_STR(rtl_process_phyinfo) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xcbc294d9, __VMLINUX_SYMBOL_STR(efuse_read_1byte) },
	{ 0xdda7177e, __VMLINUX_SYMBOL_STR(_rtl92c_phy_bb8192c_config_parafile) },
	{ 0x58f028d, __VMLINUX_SYMBOL_STR(rtl92c_fill_h2c_cmd) },
	{ 0x1804b7da, __VMLINUX_SYMBOL_STR(rtl92c_phy_sw_chnl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl_pci,rtl8192c-common,mac80211";

MODULE_ALIAS("pci:v000010ECd00008191sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008178sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008177sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008176sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "577486CDF8772459D81B4AD");
