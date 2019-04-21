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
	{ 0xbed9a4d9, __VMLINUX_SYMBOL_STR(tcf_em_unregister) },
	{ 0x35c29ba7, __VMLINUX_SYMBOL_STR(tcf_em_register) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x80e740a3, __VMLINUX_SYMBOL_STR(textsearch_prepare) },
	{ 0xda2feb87, __VMLINUX_SYMBOL_STR(skb_find_text) },
	{ 0xe640a6b1, __VMLINUX_SYMBOL_STR(textsearch_destroy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x731e8b91, __VMLINUX_SYMBOL_STR(nla_append) },
	{ 0x43eec4ae, __VMLINUX_SYMBOL_STR(nla_put_nohdr) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FD2314E3C43481CD536FB53");
