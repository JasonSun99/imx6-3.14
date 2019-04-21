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
	{ 0xd13cc487, __VMLINUX_SYMBOL_STR(crypto_unregister_alg) },
	{ 0x84804ef9, __VMLINUX_SYMBOL_STR(crypto_register_alg) },
	{ 0xcbc5d521, __VMLINUX_SYMBOL_STR(lz4_compress) },
	{ 0x7b1ade38, __VMLINUX_SYMBOL_STR(lz4_decompress) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lz4_compress,lz4_decompress";


MODULE_INFO(srcversion, "CA8B650C7F447A623D01324");
