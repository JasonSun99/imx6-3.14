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
	{ 0x54657be1, __VMLINUX_SYMBOL_STR(transport_subsystem_release) },
	{ 0x5e3784cf, __VMLINUX_SYMBOL_STR(transport_subsystem_register) },
	{ 0x72ea7b2d, __VMLINUX_SYMBOL_STR(scsi_device_type) },
	{ 0x2a975155, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0xb630252e, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x7dbada9d, __VMLINUX_SYMBOL_STR(transport_set_vpd_ident_type) },
	{ 0x85aa880c, __VMLINUX_SYMBOL_STR(transport_set_vpd_assoc) },
	{ 0xf01621c7, __VMLINUX_SYMBOL_STR(transport_set_vpd_proto_id) },
	{ 0x2de3b18, __VMLINUX_SYMBOL_STR(transport_set_vpd_ident) },
	{ 0xfd95129a, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd09c56f0, __VMLINUX_SYMBOL_STR(scsi_host_lookup) },
	{ 0xf808c981, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x87899deb, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xcfc4eac2, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xb0d692a5, __VMLINUX_SYMBOL_STR(transport_kunmap_data_sg) },
	{ 0xc06370b9, __VMLINUX_SYMBOL_STR(transport_kmap_data_sg) },
	{ 0x21c41896, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0xdbb21a02, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x352df7f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0x22fbe097, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x181ef7cb, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0x6a06d995, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x99c24b02, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0xc85bb10f, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x65b12d4f, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x5f2c72d8, __VMLINUX_SYMBOL_STR(spc_emulate_report_luns) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "9AA664F56A4C3AF720871C9");
