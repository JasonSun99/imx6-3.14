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
	{ 0x8d39b20c, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x8b6d0d73, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0xb15f49, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0x8cddfaed, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xb46965c6, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xfd590737, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x4fe227c, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xf4b78f27, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0x18ee713e, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x7011dbb5, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x68c071d7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xf1c80959, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0xf8cc038e, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x96f6e89b, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0x82dcd770, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x5fc14831, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x5d7755db, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0xfb1af7d4, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xaaf11b11, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xc502e7fe, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x973fd140, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x662e2432, __VMLINUX_SYMBOL_STR(ppp_register_channel) },
	{ 0xa448f3ee, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x2deda4a1, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0xba3cdb68, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xac1f37e5, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0x89652f94, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7e48a957, __VMLINUX_SYMBOL_STR(ip_local_out) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0x9272dff0, __VMLINUX_SYMBOL_STR(__ip_select_ident) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf69fef36, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x4212313f, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6970534a, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xafd7e350, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xb2c5fa92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x2a067da0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x112610a0, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,gre,ppp_generic";


MODULE_INFO(srcversion, "555DBE636B3B1A69E243707");
