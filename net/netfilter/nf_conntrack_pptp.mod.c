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
	{ 0x9eb48c24, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xf13f4ca1, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x754acc6, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_add) },
	{ 0x8f54aade, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3fb7b851, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0xbde58d33, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_flush) },
	{ 0xdcc6aefd, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x5f98060c, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0xcf24002a, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x24ed03d0, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xc5107eda, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x3e747e5e, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_destroy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x26ec25db, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1a4e4a2c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xaa78d571, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_proto_gre";


MODULE_INFO(srcversion, "7B04C43E8A232D7CDB2CC89");