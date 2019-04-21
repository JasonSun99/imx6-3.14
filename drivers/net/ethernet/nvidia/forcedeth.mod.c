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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb9d5ccb7, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x254f7f0, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x897c8e51, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1955875e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x8142f04, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe3d6d6a9, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe45a7d04, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xff7a179, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xa8f088d9, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb513f829, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x61facbab, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x9ffbceb1, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0xf916cc7e, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x23b03d17, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0x751c7d2c, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x18bd76a4, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0xecfac99d, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2ccdcfc4, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xf6f9addd, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x59db68c6, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xa78b8230, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x7b15c2ec, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0xd23f3588, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x1f36cc81, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x23c1fee, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xfa223de7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0xea056cbd, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x2be0f12d, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x229931c8, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xcbc535c, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x22f36ec3, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xda4e6977, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa381944f, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x809a5cb6, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010DEd000001C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000066sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000008Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000038sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000268sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000269sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000373sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000450sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000451sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000452sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000453sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000760sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000761sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000762sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000763sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000D7Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "41D8644A1B39D4F3919AC67");
