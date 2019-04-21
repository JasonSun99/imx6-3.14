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
	{ 0xee83a4f3, __VMLINUX_SYMBOL_STR(cast_s4) },
	{ 0x8aa6fb7, __VMLINUX_SYMBOL_STR(cast_s1) },
	{ 0xe39dd4b4, __VMLINUX_SYMBOL_STR(cast_s2) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x84804ef9, __VMLINUX_SYMBOL_STR(crypto_register_alg) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc5fbf8a, __VMLINUX_SYMBOL_STR(cast_s3) },
	{ 0xd13cc487, __VMLINUX_SYMBOL_STR(crypto_unregister_alg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cast_common";


MODULE_INFO(srcversion, "EEBA26B446C27673A96F48E");