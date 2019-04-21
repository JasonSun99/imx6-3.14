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
	{ 0xa2db3c7f, __VMLINUX_SYMBOL_STR(nft_reject_policy) },
	{ 0x7e48a957, __VMLINUX_SYMBOL_STR(ip_local_out) },
	{ 0x671a119f, __VMLINUX_SYMBOL_STR(__skb_dst_set_noref) },
	{ 0x1372f99c, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xa3f700c0, __VMLINUX_SYMBOL_STR(nf_ct_attach) },
	{ 0xfc612eeb, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd35008c2, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0x5198d01b, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0x872afa71, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0x261b7410, __VMLINUX_SYMBOL_STR(nft_reject_init) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x490da9d1, __VMLINUX_SYMBOL_STR(nft_reject_dump) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa249c090, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1a4e4a2c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_reject,nf_tables";


MODULE_INFO(srcversion, "E1925CD0536319E7AED9BE8");
