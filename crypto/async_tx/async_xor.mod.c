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
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xcdf37e08, __VMLINUX_SYMBOL_STR(dmaengine_unmap_put) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5c2a494f, __VMLINUX_SYMBOL_STR(async_tx_submit) },
	{ 0x5b6c00e6, __VMLINUX_SYMBOL_STR(xor_blocks) },
	{ 0xa0ea3247, __VMLINUX_SYMBOL_STR(dmaengine_get_unmap_data) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7505bdef, __VMLINUX_SYMBOL_STR(memchr_inv) },
	{ 0xadc17437, __VMLINUX_SYMBOL_STR(__async_tx_find_channel) },
	{ 0xb4ca1553, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_tx,xor";


MODULE_INFO(srcversion, "FA615A56B431CEF07DF5A08");
