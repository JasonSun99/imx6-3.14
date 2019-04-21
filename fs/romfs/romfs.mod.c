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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x978b71d9, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x73b57eb3, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xed25f14d, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0xb83c2ad6, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x75cb3f24, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7634c7c1, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6abe4e61, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x38ed28df, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xdd27fa87, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x5a5f078, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0xa0a2e9c9, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xb12c766d, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xd29cee84, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x39cf8e1e, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xf71a96dd, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xe0be217a, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x96b6f4b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5ca572df, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x95df58dd, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xcc6a7669, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x6ed655c8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x854bb2b0, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x538b8d77, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xc0c4332c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xbb98965f, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "ECA4694F52F01A3D5DACE49");
