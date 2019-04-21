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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc85bb10f, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xadf39cf4, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x181ef7cb, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x22fbe097, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x352df7f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x26d16cc8, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x57ce975, __VMLINUX_SYMBOL_STR(hex_dump_to_buffer) },
	{ 0x21c41896, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x50ccf05c, __VMLINUX_SYMBOL_STR(bio_map_kern) },
	{ 0xec10854b, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0x1c80331f, __VMLINUX_SYMBOL_STR(blk_end_request) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x65b12d4f, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0x99c24b02, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "787E418F3013480410ED215");
