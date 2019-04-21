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
	{ 0x6dea2701, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x23fd9d1, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x8a7ae2a0, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x9ca2c3a9, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x14b3ae2a, __VMLINUX_SYMBOL_STR(crypto_alloc_instance) },
	{ 0xe20aecaf, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0xaecd340, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xe107f1fd, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xcd0238b4, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0xab632720, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x23dc0d49, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DD880603B96197DFA6955E8");
