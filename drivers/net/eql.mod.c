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
	{ 0xd23f3588, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xa78b8230, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x1955875e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xd6be4c96, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x809a5cb6, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa249c090, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5ef0cb31, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x2ebc990d, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D7FC04FE9A2E4E6BC8FB89A");