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
	{ 0x4b97dd28, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0x8d39b20c, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfd590737, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x4fe227c, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xf4b78f27, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0x3ef22c59, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x7011dbb5, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x68c071d7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xdb353d7a, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x538bcbe4, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0xacc5e45, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xa6bc24e9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0xe8e40d79, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xf8cc038e, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0xaaaa21ca, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0x96f6e89b, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0x82dcd770, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x12ce865f, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xb2c5fa92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7f2c5f2a, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x8d507aff, __VMLINUX_SYMBOL_STR(l2tp_session_find_nth) },
	{ 0x549758ef, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0xd0d009b6, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x17828fc4, __VMLINUX_SYMBOL_STR(ppp_dev_name) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x8bdce118, __VMLINUX_SYMBOL_STR(l2tp_udp_encap_recv) },
	{ 0xaaf11b11, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x18e9c6b, __VMLINUX_SYMBOL_STR(l2tp_session_queue_purge) },
	{ 0xf66c72, __VMLINUX_SYMBOL_STR(__l2tp_session_unhash) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x973fd140, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x88c967a5, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0xfb1af7d4, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5d7755db, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x4cefe366, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0xff342def, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0xba3cdb68, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x2a067da0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xac1f37e5, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefbfe9e5, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x7d1fc2ad, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x19b6a378, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xd6d19ba, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xad1ea416, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x29e41014, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x6970534a, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xafd7e350, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xc502e7fe, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcf2f3b30, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0x657b5c44, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x3d73323a, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xb3b3c4f4, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x4e25e5b2, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0xbb4e6169, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x3a65ed9f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core,pppox,l2tp_netlink,ppp_generic";


MODULE_INFO(srcversion, "6728580F2F5BBEE70748BC0");
