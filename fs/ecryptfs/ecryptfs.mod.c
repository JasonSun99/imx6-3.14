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
	{ 0x59715c6d, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0xa596888b, __VMLINUX_SYMBOL_STR(request_key) },
	{ 0x61ed383c, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xbaff3a71, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x31181a1f, __VMLINUX_SYMBOL_STR(kernel_write) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf6ec1436, __VMLINUX_SYMBOL_STR(fsstack_copy_inode_size) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x922da7fe, __VMLINUX_SYMBOL_STR(set_anon_super) },
	{ 0x77028abb, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x70da95cf, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xaf365d02, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x82872c7d, __VMLINUX_SYMBOL_STR(mntget) },
	{ 0x883d4f19, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xfa558afe, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x36970565, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x144f8da, __VMLINUX_SYMBOL_STR(key_type_user) },
	{ 0x463dcfd7, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x754d5d9f, __VMLINUX_SYMBOL_STR(vfs_link) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x883eb085, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x994e322, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb783829, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x240ea21c, __VMLINUX_SYMBOL_STR(deactivate_locked_super) },
	{ 0xbdac1eb7, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x286104af, __VMLINUX_SYMBOL_STR(generic_file_aio_read) },
	{ 0x1033ac04, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x7c04c596, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0x8a06f177, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xbb8ae572, __VMLINUX_SYMBOL_STR(vfs_mknod) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x67b7a2b4, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0xb83c2ad6, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xc9f73d56, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0xc617302a, __VMLINUX_SYMBOL_STR(vfs_symlink) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc20c1fe5, __VMLINUX_SYMBOL_STR(generic_file_aio_write) },
	{ 0xb2b7c4e1, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xad188e4f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x5e7f1231, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xbe51bdbb, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x34f04bb6, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x6362d6b4, __VMLINUX_SYMBOL_STR(vfs_rmdir) },
	{ 0x5fa42ebb, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0x4f291944, __VMLINUX_SYMBOL_STR(key_validate) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2e84abe, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0x1746a1f2, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe5996ba5, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x676ae2ca, __VMLINUX_SYMBOL_STR(crypto_alloc_ablkcipher) },
	{ 0x26721f20, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x75cb3f24, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x9e8261e3, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf57a0b7f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x7634c7c1, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0xadaec9e7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xdb1846c6, __VMLINUX_SYMBOL_STR(sget) },
	{ 0x6abe4e61, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xbf8ba54a, __VMLINUX_SYMBOL_STR(vprintk) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xe616f6dc, __VMLINUX_SYMBOL_STR(wait_on_sync_kiocb) },
	{ 0x66f34acf, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x38ed28df, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0xa0a2e9c9, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x4a913f5b, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x251b888a, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x3c34b874, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x96ec6ba8, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xd2e5a457, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0xd29cee84, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x63ee6f51, __VMLINUX_SYMBOL_STR(atomic_dec_and_mutex_lock) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x38347172, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x51c5640e, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x27fb1e07, __VMLINUX_SYMBOL_STR(key_type_encrypted) },
	{ 0x39cf8e1e, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xc737a30f, __VMLINUX_SYMBOL_STR(fs_kobj) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{        0, __VMLINUX_SYMBOL_STR(do_sync_read) },
	{ 0xf71a96dd, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x311bf2dd, __VMLINUX_SYMBOL_STR(bdi_setup_and_register) },
	{ 0xb88cd215, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xe96517fd, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xe107f1fd, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xf758af4, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0x1031f1dc, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x8c6223bb, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x582eff05, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0xb0742bb3, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0x96b6f4b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5ca572df, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xb49545ac, __VMLINUX_SYMBOL_STR(fsstack_copy_attr_all) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x20960cce, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xc7309ee2, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x54c9cfe8, __VMLINUX_SYMBOL_STR(do_sync_write) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x6ebc5149, __VMLINUX_SYMBOL_STR(param_ops_long) },
	{ 0x3cac78e5, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x93ae4026, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xcc6a7669, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2ed64122, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0xfc1693d, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0x6ed655c8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x854bb2b0, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb8f5a918, __VMLINUX_SYMBOL_STR(kfree_put_link) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xeb531003, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x42bc397c, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xdd387c4e, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x2339b6df, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0xc5c7094f, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x92adf089, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x4ac041fc, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0x9ea3aebc, __VMLINUX_SYMBOL_STR(vfs_setxattr) },
	{ 0x58d30958, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x538b8d77, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xc0c4332c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x5dc010f0, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x176145a0, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x50d50611, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=encrypted-keys";


MODULE_INFO(srcversion, "6456AC3EABB49B12E22BFBA");
