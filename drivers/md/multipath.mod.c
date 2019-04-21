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
	{ 0xc5b9ea31, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xfe7f38a6, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x49349a98, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x54e4ca3c, __VMLINUX_SYMBOL_STR(__bio_clone_fast) },
	{ 0x258ee121, __VMLINUX_SYMBOL_STR(bio_init) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x600c68ea, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x7dfddb4a, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xf2785fb7, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8c809a09, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x6a06d995, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x9ac4db0a, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0x6a037cf1, __VMLINUX_SYMBOL_STR(mempool_kfree) },
	{ 0xa05c03df, __VMLINUX_SYMBOL_STR(mempool_kmalloc) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x19fa2512, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x9b979675, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8b1a37e3, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xcb23345d, __VMLINUX_SYMBOL_STR(blk_sync_queue) },
	{ 0x7202377e, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x10de3681, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc111cece, __VMLINUX_SYMBOL_STR(blk_queue_segment_boundary) },
	{ 0xa310abcc, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x890460c1, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x12661db4, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xf8d21ca7, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4347E6D0A160E9A51689C49");
