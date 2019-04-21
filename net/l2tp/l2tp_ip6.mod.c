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
	{ 0xc8d3c725, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x1f0d74c6, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x20d6b3ac, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0x4eba9547, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0x978fa581, __VMLINUX_SYMBOL_STR(udp_ioctl) },
	{ 0xa89ae76c, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x8d39b20c, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xd382a1b2, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x5924ee64, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xd0f9aa2b, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xa2b0fe5e, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x7f2c5f2a, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x4fe227c, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xd0e63ef, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0x3ef22c59, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x7011dbb5, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x68c071d7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x4aa29c68, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x21e0c551, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0xb0c91bf1, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0x8623fba9, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0xdd919c0d, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0xf8cc038e, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x556adfa5, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0x1490a2d5, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x82dcd770, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x815f49e0, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0xbafa97a1, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0xb2c5fa92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x112610a0, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3e3f2104, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x3d73323a, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x65992be1, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x657b5c44, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x448a4761, __VMLINUX_SYMBOL_STR(ip6_datagram_connect) },
	{ 0x5ef0cb31, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xfb1af7d4, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x86e4f4a0, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xdfc89406, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0xc502e7fe, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x95f30ca8, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0x5f95220, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x63a403e2, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0x2c9fa2c1, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0xd0858bdb, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0x29ea98fc, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x93e79241, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0x1b22889a, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0x2a067da0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xba3cdb68, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x95bfea35, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0xac1f37e5, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x1a73df25, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0x2deda4a1, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0xd8525ea7, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x58413099, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0x22c68cd9, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x84b12f3f, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0xbc47abd5, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x762cf5fe, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x54eba0ab, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0x8389bb64, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xad1ea416, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x29e41014, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "BD6F3EC5B6EA256E914B104");
