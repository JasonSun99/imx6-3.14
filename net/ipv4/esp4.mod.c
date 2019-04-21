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
	{ 0x908b4c70, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0x3961acb2, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9b285df7, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x5463be50, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x3086bf33, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xa20ce1b8, __VMLINUX_SYMBOL_STR(net_msg_warn) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x62d58b5d, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x18b1dbb8, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xdf19aa58, __VMLINUX_SYMBOL_STR(pskb_put) },
	{ 0x885ec892, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x3e2dda84, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x259b9339, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x934e86cc, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xe107f1fd, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xd356550e, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xb2c5fa92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x71e00bcf, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x750af6d4, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xdb5b4908, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x75197c9e, __VMLINUX_SYMBOL_STR(km_new_mapping) },
	{ 0x1a4e4a2c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x5ef04119, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "597BA4D71289E436A7BDEAC");
