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
	{ 0xc992a504, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xeed2c3fb, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x403fc315, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0xaf365d02, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x9d41503e, __VMLINUX_SYMBOL_STR(fat_flush_inodes) },
	{ 0x10004f54, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x73b57eb3, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x3bef4571, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0xee182d51, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0xffd4c450, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0x825a2db0, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0x4f24e8b9, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0xd7f3d36f, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0x366328e0, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x38ed28df, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x4b13b0fb, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x7d900128, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0xb12c766d, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xe0be217a, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0xba234732, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0x5ca572df, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x7ca3fd8f, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0x417927a, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xb70a32ae, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0xb2ea5da7, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0x4b645da4, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0x6ed655c8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x159bc8a3, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0x9780537c, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0x538b8d77, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x5dc010f0, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8F7AADEA0FD8C97BB3543D8");
