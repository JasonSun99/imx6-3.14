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
	{ 0xc40cb75f, __VMLINUX_SYMBOL_STR(target_configure_unmap_from_queue) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x462a2e75, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x628b122b, __VMLINUX_SYMBOL_STR(sbc_dif_verify_read) },
	{ 0xecc23145, __VMLINUX_SYMBOL_STR(sbc_dif_verify_write) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x31181a1f, __VMLINUX_SYMBOL_STR(kernel_write) },
	{ 0x2e84abe, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2623d337, __VMLINUX_SYMBOL_STR(vfs_readv) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{        0, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x50081608, __VMLINUX_SYMBOL_STR(vfs_writev) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x6abe4e61, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x39cf8e1e, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdbb21a02, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x8bdc74d7, __VMLINUX_SYMBOL_STR(sbc_get_write_same_sectors) },
	{ 0xcf685aaf, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x87f4b405, __VMLINUX_SYMBOL_STR(target_to_linux_sector) },
	{ 0xf441ea65, __VMLINUX_SYMBOL_STR(sbc_execute_unmap) },
	{ 0x8abc58a0, __VMLINUX_SYMBOL_STR(sbc_parse_cdb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x626b4608, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{        0, __VMLINUX_SYMBOL_STR(filp_close) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "1B158AD8FCF43B3D25A0DA6");
