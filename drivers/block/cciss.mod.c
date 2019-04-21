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
	{ 0x10982385, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xacc5e45, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xa6bc24e9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xf5e8c586, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xf57a0b7f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x5e7f1231, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x336552bc, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0xd48cba88, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xff7a179, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xd53d0790, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xb3b3c4f4, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xf24e21b4, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x7d76f138, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x22f36ec3, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2a303d4d, __VMLINUX_SYMBOL_STR(check_signature) },
	{ 0xda4e6977, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
	{ 0x392509e2, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xe3d6d6a9, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x501762a7, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x341a3841, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x186df290, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x9e1fc606, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0xc5cd5f1a, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xe7d95a19, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x7211cd01, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x19051115, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x738f7c36, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x308cbec9, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0xf808c981, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xb0964120, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x229931c8, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xcbc535c, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x7b15c2ec, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0xcfc4eac2, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xedae3d10, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x3a65ed9f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x961e7358, __VMLINUX_SYMBOL_STR(blk_complete_request) },
	{ 0xa06aa245, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x81f3afb, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xdbe4280c, __VMLINUX_SYMBOL_STR(scsi_cmd_blk_ioctl) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc2e587d1, __VMLINUX_SYMBOL_STR(reset_devices) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xca1da3b1, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc2bd4d69, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x72ea7b2d, __VMLINUX_SYMBOL_STR(scsi_device_type) },
	{ 0x4d298015, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x57f1623f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xae602c05, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x9f1002ef, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xe9ad44ba, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x6b3adfe1, __VMLINUX_SYMBOL_STR(blk_stop_queue) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x3413bd7d, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x813c29d3, __VMLINUX_SYMBOL_STR(blk_start_request) },
	{ 0x8ebde1a1, __VMLINUX_SYMBOL_STR(blk_peek_request) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x569fceb7, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xc6b0fde1, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x32e76c80, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x5488db38, __VMLINUX_SYMBOL_STR(blk_queue_softirq_done) },
	{ 0x50f788ee, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xa310abcc, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x52731aeb, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xcfd81e20, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x349c50d9, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x4c272a74, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9334593c, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x1031f1dc, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x860e1312, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x37f2eb37, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x66121959, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00000E11d0000B060sv00000E11sd00004070bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B178sv00000E11sd00004080bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B178sv00000E11sd00004082bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B178sv00000E11sd00004083bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd00004091bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Abc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Bbc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Cbc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Dbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003220sv0000103Csd00003225bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003230sv0000103Csd00003223bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003230sv0000103Csd00003234bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003230sv0000103Csd00003235bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003211bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003212bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003213bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003214bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003215bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003230sv0000103Csd00003237bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003230sv0000103Csd0000323Dbc*sc*i*");

MODULE_INFO(srcversion, "CE4D31D44865BB969E41F74");
