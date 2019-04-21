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
	{ 0x58db1259, __VMLINUX_SYMBOL_STR(irlmp_data_request) },
	{ 0x5dc1ea7f, __VMLINUX_SYMBOL_STR(irlmp_open_lsap) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4c272a74, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x33cbe2c6, __VMLINUX_SYMBOL_STR(proc_irda) },
	{ 0x9923789b, __VMLINUX_SYMBOL_STR(irttp_close_tsap) },
	{ 0x77b36ce8, __VMLINUX_SYMBOL_STR(irlmp_close_lsap) },
	{ 0x16053804, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x83dfbf5b, __VMLINUX_SYMBOL_STR(irttp_connect_request) },
	{ 0x3a65ed9f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x76157be3, __VMLINUX_SYMBOL_STR(irttp_data_request) },
	{ 0x6611e5a3, __VMLINUX_SYMBOL_STR(irlmp_connect_response) },
	{ 0xacc5e45, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x599b7a8a, __VMLINUX_SYMBOL_STR(irlmp_disconnect_request) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1d284028, __VMLINUX_SYMBOL_STR(irttp_disconnect_request) },
	{ 0x8a44dd5e, __VMLINUX_SYMBOL_STR(hashbin_new) },
	{ 0x6b76aa70, __VMLINUX_SYMBOL_STR(hashbin_delete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x90ddb6bd, __VMLINUX_SYMBOL_STR(hashbin_remove) },
	{ 0x6492e28c, __VMLINUX_SYMBOL_STR(hashbin_get_next) },
	{ 0x9ed3eb13, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe66652c7, __VMLINUX_SYMBOL_STR(irttp_connect_response) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x37791344, __VMLINUX_SYMBOL_STR(hashbin_get_first) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xca237365, __VMLINUX_SYMBOL_STR(irda_notify_init) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x9fec0bca, __VMLINUX_SYMBOL_STR(irlmp_connect_request) },
	{ 0xb3b3c4f4, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xa6bc24e9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x35345eeb, __VMLINUX_SYMBOL_STR(irttp_open_tsap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xbfa7c08d, __VMLINUX_SYMBOL_STR(hashbin_lock_find) },
	{ 0x10982385, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xd7d4c89b, __VMLINUX_SYMBOL_STR(irttp_flow_request) },
	{ 0x731cec71, __VMLINUX_SYMBOL_STR(hashbin_insert) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=irda";


MODULE_INFO(srcversion, "5BF93DED4154EB5AAC9234A");
