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
	{ 0x93ea73d3, __VMLINUX_SYMBOL_STR(blk_mq_free_single_hw_queue) },
	{ 0xe33c09d9, __VMLINUX_SYMBOL_STR(blk_mq_alloc_single_hw_queue) },
	{ 0x3682a341, __VMLINUX_SYMBOL_STR(blk_mq_map_queue) },
	{ 0xe19479bd, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xbd4a5d05, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x33a8fd30, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0x32e76c80, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x8bcfc850, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0xd1e46e9c, __VMLINUX_SYMBOL_STR(blk_queue_alignment_offset) },
	{ 0x92061bb8, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x4c759c02, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x86e0c1a8, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xc6b0fde1, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x3b549267, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0x50f788ee, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x52731aeb, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xa310abcc, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x37a59a4b, __VMLINUX_SYMBOL_STR(blk_mq_init_commands) },
	{ 0xf5097ea3, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0x4d298015, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5b72009f, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa1fd3601, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x76620642, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x3c9d1211, __VMLINUX_SYMBOL_STR(string_get_size) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xdbe4280c, __VMLINUX_SYMBOL_STR(scsi_cmd_blk_ioctl) },
	{ 0xf27dadeb, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x9863f14f, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0xcc794a00, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x450b6f8b, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queue) },
	{ 0x531e8d20, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x3413bd7d, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x4945bce5, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x20df2681, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe9ad44ba, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x569fceb7, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x9f1002ef, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x72af6261, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queues) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x94a4a006, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0x9b66236a, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0x49df8bba, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x8ad679bf, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x67f3dedc, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7ed05a98, __VMLINUX_SYMBOL_STR(blk_mq_start_stopped_hw_queues) },
	{ 0x352df7f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xadf39cf4, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xec10854b, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0x181ef7cb, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0x50ccf05c, __VMLINUX_SYMBOL_STR(bio_map_kern) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x33c925a1, __VMLINUX_SYMBOL_STR(blk_mq_end_io_partial) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000002v*");

MODULE_INFO(srcversion, "88515C5E2DD74FE7F5CF36A");
