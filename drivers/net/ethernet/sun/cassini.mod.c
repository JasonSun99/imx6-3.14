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
	{ 0xb9d5ccb7, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x99d52924, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xff7a179, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xd53d0790, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x32e8f353, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1955875e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x341a3841, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x57aa2713, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xc7e16496, __VMLINUX_SYMBOL_STR(pci_try_set_mwi) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xe3d6d6a9, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xe45a7d04, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x7b15c2ec, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xa78b8230, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xe6f46c85, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xd23f3588, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x751c7d2c, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xa8f088d9, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x8522d53f, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x7d76f138, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x186df290, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xea056cbd, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0x3f2da077, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xfa223de7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xf19e9355, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x61facbab, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa0a47022, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x1746a1f2, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xc01b5934, __VMLINUX_SYMBOL_STR(netdev_printk) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9ffbceb1, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x809a5cb6, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xecfac99d, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x6b5d93d7, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x96ec6ba8, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xad188e4f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x38347172, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x62bd7e64, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xf24e21b4, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000108Ed0000ABBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000100Bd00000035sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8C25924A28C25B9699560D6");
