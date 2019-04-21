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
	{ 0x77ccac06, __VMLINUX_SYMBOL_STR(sbc_get_device_type) },
	{ 0x54657be1, __VMLINUX_SYMBOL_STR(transport_subsystem_release) },
	{ 0x5e3784cf, __VMLINUX_SYMBOL_STR(transport_subsystem_register) },
	{ 0xa887e742, __VMLINUX_SYMBOL_STR(bioset_integrity_create) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc40cb75f, __VMLINUX_SYMBOL_STR(target_configure_unmap_from_queue) },
	{ 0x2a975155, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0xb3dfd7ec, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x7c168233, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0x87899deb, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x462a2e75, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf8d21ca7, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x487f43b3, __VMLINUX_SYMBOL_STR(bio_integrity_add_page) },
	{ 0x47176930, __VMLINUX_SYMBOL_STR(bio_integrity_alloc) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x8993bf7, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x881afe52, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x8788a065, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc85bb10f, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x352df7f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xdbb21a02, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x8bdc74d7, __VMLINUX_SYMBOL_STR(sbc_get_write_same_sectors) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcf685aaf, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x87f4b405, __VMLINUX_SYMBOL_STR(target_to_linux_sector) },
	{ 0xf441ea65, __VMLINUX_SYMBOL_STR(sbc_execute_unmap) },
	{ 0x8abc58a0, __VMLINUX_SYMBOL_STR(sbc_parse_cdb) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "115338095B2701A37ADDDEE");
