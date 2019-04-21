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
	{ 0xb0d904b7, __VMLINUX_SYMBOL_STR(raid6_empty_zero_page) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x776bc42c, __VMLINUX_SYMBOL_STR(dma_find_channel) },
	{ 0xcdf37e08, __VMLINUX_SYMBOL_STR(dmaengine_unmap_put) },
	{ 0x5c2a494f, __VMLINUX_SYMBOL_STR(async_tx_submit) },
	{ 0xa0ea3247, __VMLINUX_SYMBOL_STR(dmaengine_get_unmap_data) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x484b4b05, __VMLINUX_SYMBOL_STR(async_memcpy) },
	{ 0xadc17437, __VMLINUX_SYMBOL_STR(__async_tx_find_channel) },
	{ 0x753433cc, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0xb4ca1553, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0x21957e1, __VMLINUX_SYMBOL_STR(raid6_datap_recov) },
	{ 0x15fe0cd3, __VMLINUX_SYMBOL_STR(raid6_gfexp) },
	{ 0x5ba93f9d, __VMLINUX_SYMBOL_STR(raid6_gfinv) },
	{ 0xe611b375, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0xbd662f6, __VMLINUX_SYMBOL_STR(raid6_gfmul) },
	{ 0xce45a6f1, __VMLINUX_SYMBOL_STR(raid6_gfexi) },
	{ 0xf8a2742, __VMLINUX_SYMBOL_STR(raid6_2data_recov) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=raid6_pq,async_tx,async_memcpy,async_xor,async_pq";


MODULE_INFO(srcversion, "82BC39E400EB9E00E16E071");
