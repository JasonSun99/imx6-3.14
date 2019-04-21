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
	{ 0x6b6915d, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x9e2e5678, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0x978fa581, __VMLINUX_SYMBOL_STR(udp_ioctl) },
	{ 0xa89ae76c, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x8d39b20c, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xd382a1b2, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x5924ee64, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xd0f9aa2b, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xa2b0fe5e, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x7f2c5f2a, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x4fe227c, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x93810632, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0x3ef22c59, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x7011dbb5, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x68c071d7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x4aa29c68, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x965115f0, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0x63d46765, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0x3961acb2, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0xc5f2763, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0xf8cc038e, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xd0c1e473, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x5463be50, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x82dcd770, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfb1af7d4, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xb2c5fa92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x112610a0, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3e3f2104, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x3d73323a, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x65992be1, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x657b5c44, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x86e4f4a0, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xd0f63345, __VMLINUX_SYMBOL_STR(ip4_datagram_connect) },
	{ 0xdfc89406, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0xc502e7fe, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x5f95220, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6dcaddf7, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0xa448f3ee, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x4212313f, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x2deda4a1, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x21c19069, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x671a119f, __VMLINUX_SYMBOL_STR(__skb_dst_set_noref) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xd6d19ba, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0xfedf89e3, __VMLINUX_SYMBOL_STR(ip_cmsg_recv) },
	{ 0xbc47abd5, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x762cf5fe, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x8389bb64, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xad1ea416, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x29e41014, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2a067da0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xc38d8eab, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0xba3cdb68, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xac1f37e5, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "AF17A3234CDE4FCF1DBA54F");
