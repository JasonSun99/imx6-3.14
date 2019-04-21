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
	{ 0x96ec6ba8, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x93ae4026, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xad188e4f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x96b8c28b, __VMLINUX_SYMBOL_STR(async_raid6_datap_recov) },
	{ 0x753433cc, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xaf2ddc54, __VMLINUX_SYMBOL_STR(async_syndrome_val) },
	{ 0xa33aca8, __VMLINUX_SYMBOL_STR(async_raid6_2data_recov) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xe611b375, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7a188791, __VMLINUX_SYMBOL_STR(prandom_bytes) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_raid6_recov,async_xor,async_pq";


MODULE_INFO(srcversion, "5174923DCE463F7E550C54A");
