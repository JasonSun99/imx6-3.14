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
	{ 0xbfc0d13, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xb6f9510e, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xc5e43ab8, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x170e490c, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5de88715, __VMLINUX_SYMBOL_STR(nf_conntrack_tmpl_insert) },
	{ 0xfec2bcd0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x6018f02c, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xbb11ccaf, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfc94d40a, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0xf3ee20f2, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0xd8cad65a, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x818f3331, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "C62F25326E0B3D89565381E");
