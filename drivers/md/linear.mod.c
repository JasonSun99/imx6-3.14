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
	{ 0x9ac4db0a, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0x881afe52, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xf8d21ca7, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xa51be736, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xe1169144, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x6a06d995, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x49349a98, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xf2785fb7, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x12661db4, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xae10542f, __VMLINUX_SYMBOL_STR(blk_queue_merge_bvec) },
	{ 0x8b1a37e3, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0xcb23345d, __VMLINUX_SYMBOL_STR(blk_sync_queue) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xf27dadeb, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x19fa2512, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x890460c1, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FC8C60A66E75FD161280493");
