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
	{ 0x5ca03fbc, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7535faa8, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_write) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0x71416b8f, __VMLINUX_SYMBOL_STR(ore_read) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaaa14361, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xa43403b6, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x5f233e27, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0xd8fee82c, __VMLINUX_SYMBOL_STR(ore_put_io_state) },
	{ 0x5f456bbd, __VMLINUX_SYMBOL_STR(nfs4_proc_getdeviceinfo) },
	{ 0xad188e4f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x257371ee, __VMLINUX_SYMBOL_STR(ore_write) },
	{ 0x45695339, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0x7aa79736, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0xaa9087c0, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x538cec2e, __VMLINUX_SYMBOL_STR(osduld_info_lookup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc0815d8c, __VMLINUX_SYMBOL_STR(ore_check_io) },
	{ 0x64cd9aff, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xda5bf7f2, __VMLINUX_SYMBOL_STR(xdr_init_decode) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0xa0a2e9c9, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x96ec6ba8, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x210674ae, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x28806871, __VMLINUX_SYMBOL_STR(ore_verify_layout) },
	{ 0x5ee2eee, __VMLINUX_SYMBOL_STR(nfs4_insert_deviceid_node) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x38347172, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xa4c4af77, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x16693157, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0xb2ef17e4, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5b88e81f, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x4fdf3646, __VMLINUX_SYMBOL_STR(ore_get_rw_state) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4d41ec01, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0x93ae4026, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe760ecf, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x30ff02f1, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x7ba440a3, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x14d8d795, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0xd34066c7, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libore,osd";


MODULE_INFO(srcversion, "3247B20882814058A18A3B5");
