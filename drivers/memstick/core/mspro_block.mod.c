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
	{ 0x5d891a64, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x5f7a2bda, __VMLINUX_SYMBOL_STR(memstick_unregister_driver) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xea37da81, __VMLINUX_SYMBOL_STR(memstick_register_driver) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xa2b7dd2f, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0x670daa5b, __VMLINUX_SYMBOL_STR(blk_dump_rq_flags) },
	{ 0x1163f0a7, __VMLINUX_SYMBOL_STR(blk_max_low_pfn) },
	{ 0xc6b0fde1, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x32e76c80, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3b549267, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0xa310abcc, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x50f788ee, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x52731aeb, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xed79cbc6, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0xcfd81e20, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x4d298015, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xf74dae0f, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xadaec9e7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x85ed056, __VMLINUX_SYMBOL_STR(memstick_set_rw_addr) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x6bad9301, __VMLINUX_SYMBOL_STR(memstick_init_req_sg) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x2bf11294, __VMLINUX_SYMBOL_STR(__blk_end_request) },
	{ 0x81f3afb, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x45eeed29, __VMLINUX_SYMBOL_STR(__blk_end_request_cur) },
	{ 0x3413bd7d, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x18f9128a, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x88a0e44e, __VMLINUX_SYMBOL_STR(memstick_new_req) },
	{ 0x1b7c50bd, __VMLINUX_SYMBOL_STR(memstick_init_req) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xb2b7c4e1, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x569fceb7, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x9f1002ef, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xe9ad44ba, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xdf401846, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6b3adfe1, __VMLINUX_SYMBOL_STR(blk_stop_queue) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9e1fc606, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=memstick";


MODULE_INFO(srcversion, "7A3AABBF025CB7BB813BBF1");
