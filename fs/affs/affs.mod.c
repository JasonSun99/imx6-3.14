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
	{ 0xbaff3a71, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xda332ae8, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4be85a03, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x403fc315, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0x978b71d9, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0xae417eff, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0x70da95cf, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xaf365d02, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xa954a0d4, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x815b5dd4, __VMLINUX_SYMBOL_STR(match_octal) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0xb1b069d9, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x286104af, __VMLINUX_SYMBOL_STR(generic_file_aio_read) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xbd241e27, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0x8a06f177, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x73b57eb3, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xb83c2ad6, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x847f66b0, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0xc20c1fe5, __VMLINUX_SYMBOL_STR(generic_file_aio_write) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xbe51bdbb, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x131db64a, __VMLINUX_SYMBOL_STR(system_long_wq) },
	{ 0x842d5e2e, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x98b4f707, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x26721f20, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7634c7c1, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x7bef8114, __VMLINUX_SYMBOL_STR(write_inode_now) },
	{ 0x6abe4e61, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xc81da954, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x38ed28df, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e7c1a9f, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xa43ae3ad, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x4b13b0fb, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xc220a37f, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xa0a2e9c9, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xb12c766d, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xfe5d4bb2, __VMLINUX_SYMBOL_STR(sys_tz) },
	{ 0xd29cee84, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xa5c77cb9, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0x55f116bf, __VMLINUX_SYMBOL_STR(invalidate_inode_buffers) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x51c5640e, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x39cf8e1e, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x8d654dca, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0x3688d5b8, __VMLINUX_SYMBOL_STR(sync_blockdev) },
	{ 0x83d3c5f0, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x879059a3, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{        0, __VMLINUX_SYMBOL_STR(do_sync_read) },
	{ 0xf71a96dd, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xe0be217a, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x74ce05b8, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0xe96517fd, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x8c6223bb, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xcbd9831e, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x41814cb8, __VMLINUX_SYMBOL_STR(dirty_writeback_interval) },
	{ 0x96b6f4b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5ca572df, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x20960cce, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x91e53e7e, __VMLINUX_SYMBOL_STR(cont_write_begin) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x54c9cfe8, __VMLINUX_SYMBOL_STR(do_sync_write) },
	{ 0x707862ed, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x95df58dd, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x3cac78e5, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x93ae4026, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xcc6a7669, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x91f43178, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x67ed10ae, __VMLINUX_SYMBOL_STR(replace_mount_options) },
	{ 0x6ed655c8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x4de07144, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xeb531003, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x182d7165, __VMLINUX_SYMBOL_STR(__getblk) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x92adf089, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0x58d30958, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x4c37a1b3, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0x538b8d77, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xc0c4332c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x9f80f045, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x5dc010f0, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xbb98965f, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0x50d50611, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1D486C542F18268D452FBC1");
