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
	{ 0x71529dbf, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x5357f13a, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x8623fba9, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9b285df7, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x1490a2d5, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x3086bf33, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xfbfafe51, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x3e2dda84, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x5a1ed14b, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x934e86cc, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x8acb8b6, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x45888cb3, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe107f1fd, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xd356550e, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xb2c5fa92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xefbfe9e5, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x5ef04119, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e0a695d, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x71e00bcf, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x750af6d4, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xa20ce1b8, __VMLINUX_SYMBOL_STR(net_msg_warn) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E8AC208CB8E003AA19573AD");
