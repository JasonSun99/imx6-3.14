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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2b9cc5cc, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0xc85bb10f, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x9ac4db0a, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0x92cfac4c, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd2260e3, __VMLINUX_SYMBOL_STR(md_is_badblock) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x6685efef, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x665f0bbe, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0x8c809a09, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x8cecd40, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x98b0a98f, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x82d7d6d6, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0x13dc8e98, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0xc5b9ea31, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf27dadeb, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xad188e4f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x9332bb3a, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xebbd70eb, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0xb5ce3478, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0x9b979675, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8993bf7, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x6abe4e61, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x890460c1, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xb41cee13, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xf2785fb7, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xf4818498, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0xadef8353, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0x10de3681, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0x96ec6ba8, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x6a06d995, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x352df7f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xea6d8afd, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0x4c3b55d1, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x1063f6f2, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x38347172, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x264e5f79, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x364fc164, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0x39cf8e1e, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xf8d21ca7, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x49890112, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0x93f6435b, __VMLINUX_SYMBOL_STR(md_allow_write) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x19fa2512, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x600c68ea, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xde2f4035, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x92370456, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x7202377e, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0x61656482, __VMLINUX_SYMBOL_STR(bio_alloc_pages) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x965c77ca, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x7dfddb4a, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x93ae4026, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x2537bf43, __VMLINUX_SYMBOL_STR(bio_copy_data) },
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


MODULE_INFO(srcversion, "3EC4FAF961362990BEE0C08");
