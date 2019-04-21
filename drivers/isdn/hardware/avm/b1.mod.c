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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x8f699913, __VMLINUX_SYMBOL_STR(capilib_release) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xc5d14f4, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x2baa6586, __VMLINUX_SYMBOL_STR(capilib_new_ncci) },
	{ 0xa75226f7, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xaa165d27, __VMLINUX_SYMBOL_STR(capilib_release_appl) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x2b8eab1f, __VMLINUX_SYMBOL_STR(capilib_free_ncci) },
	{ 0x9b9e84e6, __VMLINUX_SYMBOL_STR(capi_ctr_handle_message) },
	{ 0x868b3665, __VMLINUX_SYMBOL_STR(capi_ctr_down) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xacc5e45, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x349c50d9, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xaaf11b11, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x438601c6, __VMLINUX_SYMBOL_STR(capi_ctr_resume_output) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaade168a, __VMLINUX_SYMBOL_STR(capi_ctr_ready) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x71e8d5ba, __VMLINUX_SYMBOL_STR(capilib_data_b3_req) },
	{ 0x78e2f2b5, __VMLINUX_SYMBOL_STR(capi_ctr_suspend_output) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bc24e9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x62e32d43, __VMLINUX_SYMBOL_STR(capilib_data_b3_conf) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi";


MODULE_INFO(srcversion, "6294B08B7FBF4C84D3F7FDF");
