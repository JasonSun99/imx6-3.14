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
	{ 0xae10542f, __VMLINUX_SYMBOL_STR(blk_queue_merge_bvec) },
	{ 0xe1169144, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x881afe52, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2b9cc5cc, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x4c759c02, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xc85bb10f, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x9ac4db0a, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0x92cfac4c, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd2260e3, __VMLINUX_SYMBOL_STR(md_is_badblock) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x6685efef, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0x665f0bbe, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0x8c809a09, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x92061bb8, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x8cecd40, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x98b0a98f, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x82d7d6d6, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0x13dc8e98, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0xffb3227b, __VMLINUX_SYMBOL_STR(md_new_event) },
	{ 0xc5b9ea31, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf27dadeb, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xad188e4f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9332bb3a, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xebbd70eb, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0xb5ce3478, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0x9b979675, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x49349a98, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xaf7a5283, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x8993bf7, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xdae16ef0, __VMLINUX_SYMBOL_STR(md_do_sync) },
	{ 0x890460c1, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xb41cee13, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0xa51be736, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xcb23345d, __VMLINUX_SYMBOL_STR(blk_sync_queue) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xf2785fb7, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xadef8353, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0x8522d53f, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x10de3681, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x96ec6ba8, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x6a06d995, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x352df7f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xea6d8afd, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0x1063f6f2, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x264e5f79, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x364fc164, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0xf8d21ca7, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x49890112, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x19fa2512, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2b986e93, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0x600c68ea, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xde2f4035, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xce46e140, __VMLINUX_SYMBOL_STR(ktime_get_ts) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x92370456, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x7202377e, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0x23b88229, __VMLINUX_SYMBOL_STR(md_finish_reshape) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x965c77ca, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1b82fefa, __VMLINUX_SYMBOL_STR(md_unplug) },
	{ 0x7dfddb4a, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x93ae4026, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x85c834a9, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x12661db4, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xfe7f38a6, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x2b489f7e, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CFB8267A8BE703D522C53E1");
