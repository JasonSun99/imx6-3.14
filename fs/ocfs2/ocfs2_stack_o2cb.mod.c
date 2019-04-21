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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2fded42f, __VMLINUX_SYMBOL_STR(dlmunlock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7a1211f8, __VMLINUX_SYMBOL_STR(dlm_setup_eviction_cb) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x1b89c6ee, __VMLINUX_SYMBOL_STR(o2hb_fill_node_map) },
	{ 0xc387d2df, __VMLINUX_SYMBOL_STR(dlm_register_eviction_cb) },
	{ 0xda550cf, __VMLINUX_SYMBOL_STR(dlm_register_domain) },
	{ 0x1e31f529, __VMLINUX_SYMBOL_STR(dlm_unregister_domain) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbfd7d7a2, __VMLINUX_SYMBOL_STR(o2hb_global_heartbeat_active) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xd8fa57a6, __VMLINUX_SYMBOL_STR(dlm_unregister_eviction_cb) },
	{ 0x6487891, __VMLINUX_SYMBOL_STR(ocfs2_stack_glue_unregister) },
	{ 0xd859ac8c, __VMLINUX_SYMBOL_STR(o2net_fill_node_map) },
	{ 0x869dfbad, __VMLINUX_SYMBOL_STR(ocfs2_stack_glue_register) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8d9183a5, __VMLINUX_SYMBOL_STR(dlmlock) },
	{ 0x1cb231d0, __VMLINUX_SYMBOL_STR(mlog_not_bits) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa82a8645, __VMLINUX_SYMBOL_STR(o2nm_this_node) },
	{ 0x687f6251, __VMLINUX_SYMBOL_STR(mlog_and_bits) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x5cb48f8, __VMLINUX_SYMBOL_STR(dlm_print_one_lock) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ocfs2_dlm,ocfs2_nodemanager,ocfs2_stackglue";


MODULE_INFO(srcversion, "43045F2DACD9A20A68D4A2D");
