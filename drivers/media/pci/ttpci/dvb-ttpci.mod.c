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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x344908d4, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_free) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x3656cb10, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_init) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x6bb29dcc, __VMLINUX_SYMBOL_STR(saa7146_vfree_destroy_pgtable) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1ca42c10, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x6e43336d, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x780ce7ff, __VMLINUX_SYMBOL_STR(saa7146_vmalloc_build_pgtable) },
	{ 0xf826deb0, __VMLINUX_SYMBOL_STR(dvb_filter_pes2ts) },
	{ 0x74a5a698, __VMLINUX_SYMBOL_STR(dvb_filter_pes2ts_init) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x849ff420, __VMLINUX_SYMBOL_STR(saa7146_setgpio) },
	{ 0xf6563eda, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xa600413d, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x883ca7bf, __VMLINUX_SYMBOL_STR(dvb_register_device) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x629f9d31, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_read_user) },
	{ 0x3a65ed9f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xf0427541, __VMLINUX_SYMBOL_STR(proc_set_size) },
	{ 0x341369a3, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x28118cb6, __VMLINUX_SYMBOL_STR(__get_user_1) },
	{ 0x605bae82, __VMLINUX_SYMBOL_STR(saa7146_stop_preview) },
	{ 0x42ae73fd, __VMLINUX_SYMBOL_STR(saa7146_set_hps_source_and_sync) },
	{ 0x24428be5, __VMLINUX_SYMBOL_STR(strncpy_from_user) },
	{ 0xc4d2f2f7, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x5e7f1231, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcbc67b56, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x72180695, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_flush_spinlock_wakeup) },
	{ 0x64648430, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x56841923, __VMLINUX_SYMBOL_STR(ttpci_eeprom_parse_mac) },
	{ 0x5532fb20, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe69fa98d, __VMLINUX_SYMBOL_STR(saa7146_register_device) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9c19040b, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_write) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x75cb3f24, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xec73ff5c, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x5ab2090c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf57a0b7f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x58920729, __VMLINUX_SYMBOL_STR(saa7146_unregister_device) },
	{ 0xf218d25a, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x1056fa58, __VMLINUX_SYMBOL_STR(dvb_generic_release) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x561ea89b, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x4c3a2aec, __VMLINUX_SYMBOL_STR(dvb_unregister_device) },
	{ 0xfc49ef27, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x86bb805f, __VMLINUX_SYMBOL_STR(saa7146_start_preview) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xf48116c6, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_read) },
	{ 0x23c33db9, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xaf26729c, __VMLINUX_SYMBOL_STR(saa7146_register_extension) },
	{ 0x52ab6bfe, __VMLINUX_SYMBOL_STR(dvb_generic_ioctl) },
	{ 0x9673864f, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_packets) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x7b6c5218, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x54896e45, __VMLINUX_SYMBOL_STR(dvb_generic_open) },
	{ 0x8557ee5e, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xdc094c39, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_avail) },
	{ 0x1031f1dc, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x88faae87, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x53832a5d, __VMLINUX_SYMBOL_STR(saa7146_vv_release) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xb3b3c4f4, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xdb1a8bd4, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_empty) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x75e777ab, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x80e3832d, __VMLINUX_SYMBOL_STR(dvb_filter_get_ac3info) },
	{ 0x9b180044, __VMLINUX_SYMBOL_STR(saa7146_i2c_adapter_prepare) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{        0, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe139c851, __VMLINUX_SYMBOL_STR(saa7146_wait_for_debi_done) },
	{ 0x9f390af0, __VMLINUX_SYMBOL_STR(saa7146_vv_init) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x32e8f353, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xcfa25984, __VMLINUX_SYMBOL_STR(saa7146_unregister_extension) },
	{ 0xc299480b, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x630a5ebc, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7146,saa7146_vv,ttpci-eeprom";

MODULE_ALIAS("pci:v00001131d00007146sv0000110Asd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000004bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000006bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000000Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000000Ebc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001002bc*sc*i*");

MODULE_INFO(srcversion, "6F8D604B10959FBEC2CBEC8");
