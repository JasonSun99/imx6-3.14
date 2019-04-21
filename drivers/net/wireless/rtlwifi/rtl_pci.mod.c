#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc2ca9c8b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xffc6c11a, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x74cb5161, __VMLINUX_SYMBOL_STR(rtl_swlps_beacon) },
	{ 0x6e490026, __VMLINUX_SYMBOL_STR(rtl_deinit_deferred_work) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x642ad8c, __VMLINUX_SYMBOL_STR(rtl_deinit_core) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xc8cbcc4e, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x5e55c2b0, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x7b15c2ec, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x33aa3570, __VMLINUX_SYMBOL_STR(read_efuse_byte) },
	{ 0xb2b7c4e1, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xcd7e80d6, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2d882d91, __VMLINUX_SYMBOL_STR(rtl_global_var) },
	{ 0xe6f46c85, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xadaec9e7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x63d29382, __VMLINUX_SYMBOL_STR(rtl_init_core) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca568de8, __VMLINUX_SYMBOL_STR(rtl_action_proc) },
	{ 0x5dc6f8ef, __VMLINUX_SYMBOL_STR(rtl_dbgp_flag_init) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xf8ff6add, __VMLINUX_SYMBOL_STR(rtl_lps_change_work_callback) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x7b1190b6, __VMLINUX_SYMBOL_STR(rtl_init_rx_config) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x3b99b8aa, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x241dedc1, __VMLINUX_SYMBOL_STR(rtl_tid_to_ac) },
	{ 0x186df290, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xd53d0790, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x384b88, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0xe1137845, __VMLINUX_SYMBOL_STR(rtl_ops) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x90f06735, __VMLINUX_SYMBOL_STR(rtl_deinit_rfkill) },
	{ 0x68d543d4, __VMLINUX_SYMBOL_STR(rtl_p2p_info) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x717b2687, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xff12fca9, __VMLINUX_SYMBOL_STR(rtl_attribute_group) },
	{ 0x5f98afeb, __VMLINUX_SYMBOL_STR(rtl_recognize_peer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe3d6d6a9, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xf99fb62b, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x6b2bb051, __VMLINUX_SYMBOL_STR(rtl_init_rfkill) },
	{ 0x4e035b74, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xd6bcce70, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x57aa2713, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1eaeb705, __VMLINUX_SYMBOL_STR(rtl_tx_mgmt_proc) },
	{ 0xd782644d, __VMLINUX_SYMBOL_STR(rtl_beacon_statistic) },
	{ 0xb1a64b7, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi";


MODULE_INFO(srcversion, "B07D1002FC86501951333AE");
