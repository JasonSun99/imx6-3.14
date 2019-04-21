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
	{ 0x915f097e, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0x65d0d964, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0xbd74071f, __VMLINUX_SYMBOL_STR(md_raid1_congested) },
	{ 0x2c2c3476, __VMLINUX_SYMBOL_STR(md_raid10_congested) },
	{ 0x3968765f, __VMLINUX_SYMBOL_STR(md_raid5_congested) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x96ec6ba8, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5892820d, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x93ae4026, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x7dfddb4a, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xad188e4f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x451033c0, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0xb4990cc1, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x6514202, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x58822a5b, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0x3567ca3, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0xb2f49b90, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7fa88772, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0xa662688e, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x518926d2, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0x12c31eba, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0xf4a0939d, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0xe98453d3, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x92370456, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb421edd4, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0x600c68ea, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x221e9a04, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x59aafbcb, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=raid1,raid10,raid456";


MODULE_INFO(srcversion, "9FA3892EAE8EEA81DEF3D92");
