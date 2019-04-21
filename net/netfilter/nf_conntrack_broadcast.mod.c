#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc2ca9c8b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xee72a0be, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xcf24002a, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x24ed03d0, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xc5107eda, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "022D2C4A2DED1E7F5F3D730");
