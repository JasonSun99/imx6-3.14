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
	{ 0x978b71d9, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0x477bf19e, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0xae417eff, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0x70da95cf, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xbd241e27, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0x8a06f177, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x73b57eb3, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xb83c2ad6, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x842d5e2e, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7634c7c1, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x38ed28df, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x5a5f078, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xb12c766d, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xb2682405, __VMLINUX_SYMBOL_STR(utf8_to_utf32) },
	{ 0xd29cee84, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x83d3c5f0, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x9b1493f9, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0xf71a96dd, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xe0be217a, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xcbd9831e, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x96b6f4b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5ca572df, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x319aec92, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x95df58dd, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x3cac78e5, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xcc6a7669, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xfcc2a43c, __VMLINUX_SYMBOL_STR(utf32_to_utf8) },
	{ 0x6ed655c8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb8f5a918, __VMLINUX_SYMBOL_STR(kfree_put_link) },
	{ 0x538b8d77, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x9f80f045, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0xbb98965f, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "863A59FD26C5829C38F2519");
