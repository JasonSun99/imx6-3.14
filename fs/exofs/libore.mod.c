#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc2ca9c8b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc85bb10f, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf1deabf2, __VMLINUX_SYMBOL_STR(div64_u64) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf54bd49b, __VMLINUX_SYMBOL_STR(lcm) },
	{ 0xd290535d, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0xe42ea568, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0xad188e4f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x25c6467e, __VMLINUX_SYMBOL_STR(osd_req_remove_object) },
	{ 0x1087bb08, __VMLINUX_SYMBOL_STR(osd_req_read_sg) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x1746a1f2, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x72ccea9c, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0xa5702489, __VMLINUX_SYMBOL_STR(osd_req_write_kern) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x43df3755, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0x698135db, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0x96ec6ba8, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x352df7f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x38347172, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x753433cc, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0x599e912f, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0xd8367d, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0xdce60e64, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0xaf833cda, __VMLINUX_SYMBOL_STR(osd_req_create_object) },
	{ 0x59f3827f, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0x4e1192b8, __VMLINUX_SYMBOL_STR(osd_req_set_attributes) },
	{ 0x4c01136d, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0x6d115760, __VMLINUX_SYMBOL_STR(osd_req_add_set_attr_list) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x941faf9f, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x65b12d4f, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xc0c4332c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,async_xor";


MODULE_INFO(srcversion, "29BC430F61EFD35BAADA516");
