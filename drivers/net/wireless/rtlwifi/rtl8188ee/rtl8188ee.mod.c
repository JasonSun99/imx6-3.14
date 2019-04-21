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
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1fe714c6, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4c56cce0, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x84335ac4, __VMLINUX_SYMBOL_STR(rtl_efuse_shadow_map_update) },
	{ 0x79188a02, __VMLINUX_SYMBOL_STR(rtl_query_rxpwrpercentage) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x76316598, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x207fbb70, __VMLINUX_SYMBOL_STR(rtl_evm_db_to_percentage) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3a5b5e5c, __VMLINUX_SYMBOL_STR(rtl_phy_scan_operation_backup) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x96cf674f, __VMLINUX_SYMBOL_STR(rtl_pci_resume) },
	{ 0x3c20b67f, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x8213255e, __VMLINUX_SYMBOL_STR(rtl_signal_scale_mapping) },
	{ 0x97d27874, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x804fd1da, __VMLINUX_SYMBOL_STR(rtl_pci_suspend) },
	{ 0xc7b14e11, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0xedb0e361, __VMLINUX_SYMBOL_STR(rtl_pci_disconnect) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1a776c90, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x121b91da, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xea3a1b44, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0xc1689d1b, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x8a01d61, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x965045b9, __VMLINUX_SYMBOL_STR(rtl_process_phyinfo) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xcbc294d9, __VMLINUX_SYMBOL_STR(efuse_read_1byte) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl_pci,mac80211";

MODULE_ALIAS("pci:v000010ECd00008179sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4D0248920A8ABAB530716AA");
