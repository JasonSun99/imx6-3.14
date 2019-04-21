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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3255608, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x77ecac9f, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0x978b71d9, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0x477bf19e, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0xae417eff, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0x70da95cf, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xfa558afe, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0xa43403b6, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x26d91272, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x4e830a3e, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0x8a06f177, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x73b57eb3, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xed25f14d, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0xb83c2ad6, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xad188e4f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x842d5e2e, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x981756bb, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd160bf43, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd173f03a, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x6abe4e61, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x38ed28df, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e7c1a9f, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xdd27fa87, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x5a5f078, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xa0a2e9c9, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xb12c766d, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x96ec6ba8, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x881039d0, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0xd29cee84, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x38347172, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x39cf8e1e, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x83d3c5f0, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x9b1493f9, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0xf71a96dd, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xe0be217a, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xcbd9831e, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x96b6f4b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5ca572df, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4211c3c1, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x20960cce, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x319aec92, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x417927a, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x95df58dd, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x93ae4026, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xcc6a7669, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x94a81043, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0x6ed655c8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x854bb2b0, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x182d7165, __VMLINUX_SYMBOL_STR(__getblk) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xc0c4332c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x9f80f045, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B20841FB504D1C00079F15A");
