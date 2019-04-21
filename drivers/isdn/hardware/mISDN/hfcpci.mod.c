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
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x62262fdd, __VMLINUX_SYMBOL_STR(recv_Dchannel) },
	{ 0xaef6c518, __VMLINUX_SYMBOL_STR(get_next_dframe) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9267b50d, __VMLINUX_SYMBOL_STR(mISDN_unregister_device) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x167d2e41, __VMLINUX_SYMBOL_STR(driver_for_each_device) },
	{ 0xfafc9124, __VMLINUX_SYMBOL_STR(queue_ch_frame) },
	{ 0xdbf7f1bd, __VMLINUX_SYMBOL_STR(dchannel_senddata) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xaaf11b11, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x54ed38aa, __VMLINUX_SYMBOL_STR(bchannel_get_rxbuf) },
	{ 0xc59e0cbb, __VMLINUX_SYMBOL_STR(recv_Bchannel) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xbfaf9cbb, __VMLINUX_SYMBOL_STR(create_l1) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x7b657827, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x52737465, __VMLINUX_SYMBOL_STR(bchannel_senddata) },
	{ 0x588886a6, __VMLINUX_SYMBOL_STR(l1_event) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xe0d27574, __VMLINUX_SYMBOL_STR(get_next_bframe) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfec2bcd0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x56f59ace, __VMLINUX_SYMBOL_STR(mISDN_ctrl_bchannel) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7bd94bb9, __VMLINUX_SYMBOL_STR(mISDN_clear_bchannel) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcfb3500f, __VMLINUX_SYMBOL_STR(mISDN_freedchannel) },
	{ 0xfd889345, __VMLINUX_SYMBOL_STR(mISDN_freebchannel) },
	{ 0xb8cf5fc9, __VMLINUX_SYMBOL_STR(mISDN_register_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xff7a179, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd388bd46, __VMLINUX_SYMBOL_STR(mISDN_initbchannel) },
	{ 0x2891c495, __VMLINUX_SYMBOL_STR(mISDN_initdchannel) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x7d76f138, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mISDN_core";

MODULE_ALIAS("pci:v00001397d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d00002BD1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001043d00000675sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001051d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B0d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000071sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000073sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000182Dd00003069sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "69E109B90B248B25A6C1593");
