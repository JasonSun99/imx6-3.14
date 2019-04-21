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
	{ 0x3b0a1f82, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3361939d, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xdd90a5c1, __VMLINUX_SYMBOL_STR(blk_queue_start_tag) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc6b0fde1, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x9863f14f, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0xed79cbc6, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0x7a84f04f, __VMLINUX_SYMBOL_STR(blk_queue_stack_limits) },
	{ 0x57a055ca, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0xcfd81e20, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x4d298015, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xe42ea568, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0xde2a52b, __VMLINUX_SYMBOL_STR(osd_execute_request) },
	{ 0x698135db, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0x72ccea9c, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xc17edb1, __VMLINUX_SYMBOL_STR(osd_sec_init_nosec_doall_caps) },
	{ 0xa4d142b3, __VMLINUX_SYMBOL_STR(osduld_path_lookup) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7b657827, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xdebf2da5, __VMLINUX_SYMBOL_STR(osd_req_flush_object) },
	{ 0xd290535d, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0xdce60e64, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0xe8c67898, __VMLINUX_SYMBOL_STR(blk_requeue_request) },
	{ 0x43df3755, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0x941faf9f, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0x599e912f, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0x4c01136d, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0xc5cd5f1a, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x18f9128a, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xa2b7dd2f, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xd8367d, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0x59f3827f, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0x352df7f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x9f1002ef, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xfec2bcd0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xa4c4af77, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xe9ad44ba, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x569fceb7, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,osd";


MODULE_INFO(srcversion, "CBF1DFF9C61C7A8C5A73439");
