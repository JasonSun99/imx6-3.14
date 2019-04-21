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
	{ 0x872afa71, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0xd35008c2, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0x8a06f177, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xcd7d3739, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0x409cf9dd, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3d49dab7, __VMLINUX_SYMBOL_STR(nft_validate_input_register) },
	{ 0x49772327, __VMLINUX_SYMBOL_STR(nft_validate_data_load) },
	{ 0xfda3c99, __VMLINUX_SYMBOL_STR(nft_validate_output_register) },
	{ 0x1daa0889, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";


MODULE_INFO(srcversion, "D3ED776D7F64B7F46FE8D48");