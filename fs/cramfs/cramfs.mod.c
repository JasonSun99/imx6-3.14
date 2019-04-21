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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x77ecac9f, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0x70da95cf, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8a06f177, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x73b57eb3, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xed25f14d, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0xb83c2ad6, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x842d5e2e, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7634c7c1, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6abe4e61, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5a5f078, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x8b2a2519, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0xa0a2e9c9, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x881039d0, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x39cf8e1e, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x83d3c5f0, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xf71a96dd, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xe0be217a, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x5ca572df, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4211c3c1, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0xc7309ee2, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3ed63055, __VMLINUX_SYMBOL_STR(zlib_inflateReset) },
	{ 0x93ae4026, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xcc6a7669, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x6ed655c8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x854bb2b0, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x538b8d77, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xc0c4332c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xbb98965f, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5515C04195BEF769CCC70AF");
