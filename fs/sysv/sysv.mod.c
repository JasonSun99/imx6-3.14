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
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xeed2c3fb, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x403fc315, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0x978b71d9, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0x70da95cf, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xaf365d02, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x69b15200, __VMLINUX_SYMBOL_STR(block_write_begin) },
	{ 0xa43403b6, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x25820c64, __VMLINUX_SYMBOL_STR(fs_overflowuid) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x883eb085, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xb1b069d9, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0x286104af, __VMLINUX_SYMBOL_STR(generic_file_aio_read) },
	{ 0x10004f54, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xbd241e27, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0x8a06f177, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x73b57eb3, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xb83c2ad6, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x847f66b0, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0xc20c1fe5, __VMLINUX_SYMBOL_STR(generic_file_aio_write) },
	{ 0xbe51bdbb, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x842d5e2e, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x98b4f707, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x26721f20, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7634c7c1, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6abe4e61, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xc81da954, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x38ed28df, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xa43ae3ad, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x57b027e7, __VMLINUX_SYMBOL_STR(page_symlink) },
	{ 0x4b13b0fb, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xc220a37f, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0xa0a2e9c9, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xb12c766d, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xd29cee84, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xa5c77cb9, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0x55f116bf, __VMLINUX_SYMBOL_STR(invalidate_inode_buffers) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x51c5640e, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x39cf8e1e, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x8d654dca, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0x589617b8, __VMLINUX_SYMBOL_STR(block_write_end) },
	{ 0x83d3c5f0, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x879059a3, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{        0, __VMLINUX_SYMBOL_STR(do_sync_read) },
	{ 0xf71a96dd, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xe0be217a, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xe96517fd, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x8c6223bb, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x96b6f4b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5ca572df, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x20960cce, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xc7309ee2, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x30e17331, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x54c9cfe8, __VMLINUX_SYMBOL_STR(do_sync_write) },
	{ 0x707862ed, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xbd791c90, __VMLINUX_SYMBOL_STR(block_truncate_page) },
	{ 0x95df58dd, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x3cac78e5, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x93ae4026, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xc77d8fae, __VMLINUX_SYMBOL_STR(__bforget) },
	{ 0xcc6a7669, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x1398a6db, __VMLINUX_SYMBOL_STR(__block_write_begin) },
	{ 0x91f43178, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x6ed655c8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xf7b56372, __VMLINUX_SYMBOL_STR(write_one_page) },
	{ 0x854bb2b0, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x4de07144, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xeb531003, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x182d7165, __VMLINUX_SYMBOL_STR(__getblk) },
	{ 0x58d30958, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x4c37a1b3, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0x538b8d77, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x9f80f045, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0xbb98965f, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0x176145a0, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0x9888dccc, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0x50d50611, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
	{ 0xdf929370, __VMLINUX_SYMBOL_STR(fs_overflowgid) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F932AD08B220AF111FF1D5F");
