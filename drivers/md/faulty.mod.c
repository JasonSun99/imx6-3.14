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
	{ 0xf2785fb7, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x6685efef, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0x6a06d995, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x352df7f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x19fa2512, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x890460c1, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8b1a37e3, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3FBE015750103C863A65FA0");
