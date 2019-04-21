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
	{ 0x61b7b126, __VMLINUX_SYMBOL_STR(simple_strtoull) },
	{ 0xcf685aaf, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbaff3a71, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x7f72bc7d, __VMLINUX_SYMBOL_STR(address_space_init_once) },
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x881afe52, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xda332ae8, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xeed2c3fb, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x3255608, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x2b8c46d1, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x978b71d9, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0xc85bb10f, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x77028abb, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x70da95cf, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xaf365d02, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x46d08d8d, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x576ac725, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xa954a0d4, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0xfa558afe, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x80efa291, __VMLINUX_SYMBOL_STR(find_get_pages_contig) },
	{ 0x45d0036f, __VMLINUX_SYMBOL_STR(bdev_read_only) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x95cff196, __VMLINUX_SYMBOL_STR(block_invalidatepage) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0x46434907, __VMLINUX_SYMBOL_STR(block_is_partially_uptodate) },
	{ 0x69b15200, __VMLINUX_SYMBOL_STR(block_write_begin) },
	{ 0xd0d009b6, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x9a5ea4a8, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x16bc622f, __VMLINUX_SYMBOL_STR(blkdev_issue_flush) },
	{ 0xa43403b6, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x16713d7d, __VMLINUX_SYMBOL_STR(touch_buffer) },
	{ 0x6906ed3f, __VMLINUX_SYMBOL_STR(downgrade_write) },
	{ 0x41495e5a, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x883eb085, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xb1b069d9, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb783829, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x240ea21c, __VMLINUX_SYMBOL_STR(deactivate_locked_super) },
	{ 0xbdac1eb7, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x286104af, __VMLINUX_SYMBOL_STR(generic_file_aio_read) },
	{ 0x1033ac04, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x7d3312e4, __VMLINUX_SYMBOL_STR(generic_file_remap_pages) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x10004f54, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xf5fdf091, __VMLINUX_SYMBOL_STR(d_find_alias) },
	{ 0x8a06f177, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xb83c2ad6, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xc9f73d56, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x847f66b0, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0x219f4ae5, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0xc20c1fe5, __VMLINUX_SYMBOL_STR(generic_file_aio_write) },
	{ 0x5e7f1231, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2880f3f6, __VMLINUX_SYMBOL_STR(insert_inode_locked4) },
	{ 0xbe51bdbb, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x114c7607, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd6d8d604, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0x842d5e2e, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x37407acc, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0x1746a1f2, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x981756bb, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x26721f20, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x350c354e, __VMLINUX_SYMBOL_STR(__block_page_mkwrite) },
	{ 0xd160bf43, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{        0, __VMLINUX_SYMBOL_STR(inode_add_bytes) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9e8261e3, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd173f03a, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8993bf7, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xdb1846c6, __VMLINUX_SYMBOL_STR(sget) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x6abe4e61, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x45e73f67, __VMLINUX_SYMBOL_STR(__sync_dirty_buffer) },
	{ 0xc81da954, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x2a975155, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x38ed28df, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e7c1a9f, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xbe9500fa, __VMLINUX_SYMBOL_STR(file_update_time) },
	{ 0x7627a4a, __VMLINUX_SYMBOL_STR(bio_get_nr_vecs) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0xa43ae3ad, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x57b027e7, __VMLINUX_SYMBOL_STR(page_symlink) },
	{ 0x4b13b0fb, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xc220a37f, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x8b2a2519, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0xa0a2e9c9, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x4a913f5b, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x251b888a, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x8522d53f, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xb12c766d, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x5d5b5a16, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0x352df7f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x7c18a149, __VMLINUX_SYMBOL_STR(ilookup5) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xd29cee84, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xa5c77cb9, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0x7aa47227, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0x8788a065, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x87899deb, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x4d0d163d, __VMLINUX_SYMBOL_STR(copy_page) },
	{ 0x54434d6, __VMLINUX_SYMBOL_STR(radix_tree_tag_set) },
	{ 0xb3ea005d, __VMLINUX_SYMBOL_STR(wait_for_stable_page) },
	{ 0x39cf8e1e, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xf8d21ca7, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x1706f8b2, __VMLINUX_SYMBOL_STR(inode_sub_bytes) },
	{ 0x589617b8, __VMLINUX_SYMBOL_STR(block_write_end) },
	{ 0xe48df9b9, __VMLINUX_SYMBOL_STR(create_empty_buffers) },
	{ 0x83d3c5f0, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xd20d02b7, __VMLINUX_SYMBOL_STR(pagevec_lookup_tag) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x879059a3, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0x3c91cdf2, __VMLINUX_SYMBOL_STR(__breadahead) },
	{ 0xfdfc0b3b, __VMLINUX_SYMBOL_STR(fiemap_fill_next_extent) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{        0, __VMLINUX_SYMBOL_STR(do_sync_read) },
	{ 0xf71a96dd, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x89f32053, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0xe0be217a, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x1031f1dc, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xf78941b1, __VMLINUX_SYMBOL_STR(shrink_dcache_parent) },
	{ 0x9645a5a2, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0x8c6223bb, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x7b36143c, __VMLINUX_SYMBOL_STR(submit_bh) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5642793a, __VMLINUX_SYMBOL_STR(radix_tree_tag_clear) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x96b6f4b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5ca572df, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc9ee2dc9, __VMLINUX_SYMBOL_STR(__pagevec_release) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x8c0925a8, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x8f2c5bec, __VMLINUX_SYMBOL_STR(default_backing_dev_info) },
	{ 0x20960cce, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xc7309ee2, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x41568c0f, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2_range) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc20daf98, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0x6205c943, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0x54c9cfe8, __VMLINUX_SYMBOL_STR(do_sync_write) },
	{ 0xa9b08873, __VMLINUX_SYMBOL_STR(pagevec_lookup) },
	{ 0x707862ed, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbd8b4bdf, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x417927a, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xccd5683e, __VMLINUX_SYMBOL_STR(end_buffer_read_sync) },
	{ 0x9754ec10, __VMLINUX_SYMBOL_STR(radix_tree_preload) },
	{ 0xa6ee67d3, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0xbd791c90, __VMLINUX_SYMBOL_STR(block_truncate_page) },
	{ 0x95df58dd, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xbb75660d, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0x3cac78e5, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x93ae4026, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xcc6a7669, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xdbca6fe0, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1398a6db, __VMLINUX_SYMBOL_STR(__block_write_begin) },
	{ 0x91f43178, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x6ed655c8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x854bb2b0, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x871c0a7e, __VMLINUX_SYMBOL_STR(fiemap_check_flags) },
	{ 0x4de07144, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xeb531003, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x182d7165, __VMLINUX_SYMBOL_STR(__getblk) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xcc74083a, __VMLINUX_SYMBOL_STR(empty_aops) },
	{ 0xf202c5cb, __VMLINUX_SYMBOL_STR(radix_tree_insert) },
	{ 0x58d30958, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x4c37a1b3, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0x538b8d77, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x5509c81e, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xc0c4332c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x5dc010f0, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0x9888dccc, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0x50d50611, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "27D2BFA1D3E2BF3BC17A5B9");
