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
	{ 0xf3017e21, __VMLINUX_SYMBOL_STR(dccp_statistics) },
	{ 0x5a73e5ad, __VMLINUX_SYMBOL_STR(dccp_init_sock) },
	{ 0x16406936, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0x39ad236c, __VMLINUX_SYMBOL_STR(dccp_v4_do_rcv) },
	{ 0x94ec1264, __VMLINUX_SYMBOL_STR(inet6_csk_update_pmtu) },
	{ 0x99f9713f, __VMLINUX_SYMBOL_STR(sk_filter) },
	{ 0x64e44deb, __VMLINUX_SYMBOL_STR(dccp_set_state) },
	{ 0xb6134cd, __VMLINUX_SYMBOL_STR(inet6_csk_bind_conflict) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x20d6b3ac, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0xc8d3c725, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0xf08d4cae, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0xbc7f4dd3, __VMLINUX_SYMBOL_STR(dccp_hashinfo) },
	{ 0x1490a2d5, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x71324b61, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0xef634aec, __VMLINUX_SYMBOL_STR(dccp_sendmsg) },
	{ 0xd062663b, __VMLINUX_SYMBOL_STR(ipv6_opt_accepted) },
	{ 0xa448f3ee, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0xaa4b553a, __VMLINUX_SYMBOL_STR(dccp_ctl_make_reset) },
	{ 0x422bdb31, __VMLINUX_SYMBOL_STR(dccp_destroy_sock) },
	{ 0x78bc24d, __VMLINUX_SYMBOL_STR(dccp_make_response) },
	{ 0x2a067da0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x16053804, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7e6c9e6, __VMLINUX_SYMBOL_STR(dccp_rcv_established) },
	{ 0xe76025ad, __VMLINUX_SYMBOL_STR(inet6_csk_search_req) },
	{ 0xd78e6f89, __VMLINUX_SYMBOL_STR(security_skb_classify_flow) },
	{ 0xf0442094, __VMLINUX_SYMBOL_STR(dccp_v4_conn_request) },
	{ 0x5285bdbd, __VMLINUX_SYMBOL_STR(inet_csk_prepare_forced_close) },
	{ 0xcde62a09, __VMLINUX_SYMBOL_STR(dccp_create_openreq_child) },
	{ 0x4271998b, __VMLINUX_SYMBOL_STR(ipv6_dup_options) },
	{ 0xa2d3dd96, __VMLINUX_SYMBOL_STR(dccp_check_req) },
	{ 0x5924ee64, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xb0c91bf1, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0xb0d888b, __VMLINUX_SYMBOL_STR(icmpv6_err_convert) },
	{ 0x556adfa5, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0x659d9630, __VMLINUX_SYMBOL_STR(dccp_recvmsg) },
	{ 0x89fee73a, __VMLINUX_SYMBOL_STR(ip6_xmit) },
	{ 0xbc455f02, __VMLINUX_SYMBOL_STR(inet_sk_rebuild_header) },
	{ 0x12108e53, __VMLINUX_SYMBOL_STR(inet6_getname) },
	{ 0x6122b44b, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0xdd5294c9, __VMLINUX_SYMBOL_STR(inet6_csk_xmit) },
	{ 0x85c402c8, __VMLINUX_SYMBOL_STR(__inet6_hash) },
	{ 0xcd3cb500, __VMLINUX_SYMBOL_STR(dccp_ioctl) },
	{ 0xfa93b37c, __VMLINUX_SYMBOL_STR(dccp_setsockopt) },
	{ 0xd382a1b2, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xa89ae76c, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x4def03d6, __VMLINUX_SYMBOL_STR(dccp_child_process) },
	{ 0x8d39b20c, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x68c071d7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x590e1c8b, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x1a73df25, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0xdcc6aefd, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xbc351f30, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0xcf19eb3f, __VMLINUX_SYMBOL_STR(dccp_v4_request_recv_sock) },
	{ 0xdff6fdba, __VMLINUX_SYMBOL_STR(dccp_parse_options) },
	{ 0x81ef28aa, __VMLINUX_SYMBOL_STR(dccp_getsockopt) },
	{ 0x9a0333d9, __VMLINUX_SYMBOL_STR(inet6_csk_reqsk_queue_hash_add) },
	{ 0x2deda4a1, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0xd0e63ef, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xef24df3e, __VMLINUX_SYMBOL_STR(inet_csk_delete_keepalive_timer) },
	{ 0x1b22889a, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0xd8525ea7, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x692a2a52, __VMLINUX_SYMBOL_STR(dccp_reqsk_init) },
	{ 0x95ae1f06, __VMLINUX_SYMBOL_STR(dccp_close) },
	{ 0xc502e7fe, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x7f2c5f2a, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x9a123b7, __VMLINUX_SYMBOL_STR(dccp_orphan_count) },
	{ 0xdaebe76c, __VMLINUX_SYMBOL_STR(dccp_sync_mss) },
	{ 0xa20ce1b8, __VMLINUX_SYMBOL_STR(net_msg_warn) },
	{ 0x9d2a211c, __VMLINUX_SYMBOL_STR(inet6_hash_connect) },
	{ 0xa28ba293, __VMLINUX_SYMBOL_STR(inet_accept) },
	{ 0xd033c7e5, __VMLINUX_SYMBOL_STR(inet_csk_get_port) },
	{ 0x692c942f, __VMLINUX_SYMBOL_STR(dccp_death_row) },
	{ 0xb5d314f7, __VMLINUX_SYMBOL_STR(inet_ctl_sock_create) },
	{ 0x4fce8d5b, __VMLINUX_SYMBOL_STR(dccp_poll) },
	{ 0x1f0d74c6, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x82dcd770, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xed0a8eb4, __VMLINUX_SYMBOL_STR(dccp_disconnect) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6dcaddf7, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0x8d3c184b, __VMLINUX_SYMBOL_STR(dccp_done) },
	{ 0x909a878, __VMLINUX_SYMBOL_STR(sk_release_kernel) },
	{ 0x36e24f4f, __VMLINUX_SYMBOL_STR(dccp_v4_send_check) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf8cc038e, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xf955eadd, __VMLINUX_SYMBOL_STR(inet_stream_connect) },
	{ 0x9b3280ae, __VMLINUX_SYMBOL_STR(dccp_invalid_packet) },
	{ 0x8623fba9, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x26ec25db, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x70800971, __VMLINUX_SYMBOL_STR(inet6_lookup) },
	{ 0x4cdd391d, __VMLINUX_SYMBOL_STR(dccp_feat_list_purge) },
	{ 0x2cb85164, __VMLINUX_SYMBOL_STR(dccp_syn_ack_timeout) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x112610a0, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x4eba9547, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xa2b0fe5e, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xd49e6909, __VMLINUX_SYMBOL_STR(inet6_sk_rebuild_header) },
	{ 0x3e3f2104, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0xae729e59, __VMLINUX_SYMBOL_STR(security_req_classify_flow) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe1761617, __VMLINUX_SYMBOL_STR(security_inet_conn_request) },
	{ 0x10a46f9a, __VMLINUX_SYMBOL_STR(inet_dccp_listen) },
	{ 0x997e3f27, __VMLINUX_SYMBOL_STR(__inet_inherit_port) },
	{ 0xd0f9aa2b, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xe200f872, __VMLINUX_SYMBOL_STR(secure_dccpv6_sequence_number) },
	{ 0xdd919c0d, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7974605c, __VMLINUX_SYMBOL_STR(inet_csk_accept) },
	{ 0x21e0c551, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0x30e45b54, __VMLINUX_SYMBOL_STR(dccp_reqsk_send_ack) },
	{ 0x84aee46e, __VMLINUX_SYMBOL_STR(dccp_rcv_state_process) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x6eac679, __VMLINUX_SYMBOL_STR(dccp_connect) },
	{ 0x7b678240, __VMLINUX_SYMBOL_STR(dccp_shutdown) },
	{ 0x21c19069, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0xd1c955d1, __VMLINUX_SYMBOL_STR(dccp_v4_connect) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x4cffe587, __VMLINUX_SYMBOL_STR(inet6_csk_addr2sockaddr) },
	{ 0x95f30ca8, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dccp,dccp_ipv4";


MODULE_INFO(srcversion, "1A05B76851F13452C3BB6CE");
