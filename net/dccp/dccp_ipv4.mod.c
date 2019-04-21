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
	{ 0x49045426, __VMLINUX_SYMBOL_STR(icmp_err_convert) },
	{ 0x5a73e5ad, __VMLINUX_SYMBOL_STR(dccp_init_sock) },
	{ 0x64e44deb, __VMLINUX_SYMBOL_STR(dccp_set_state) },
	{ 0x6b6915d, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc8d3c725, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0xf08d4cae, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0xbc7f4dd3, __VMLINUX_SYMBOL_STR(dccp_hashinfo) },
	{ 0x9e2e5678, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0xef634aec, __VMLINUX_SYMBOL_STR(dccp_sendmsg) },
	{ 0x35d2a188, __VMLINUX_SYMBOL_STR(ip_build_and_send_pkt) },
	{ 0xa448f3ee, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0xaa4b553a, __VMLINUX_SYMBOL_STR(dccp_ctl_make_reset) },
	{ 0x422bdb31, __VMLINUX_SYMBOL_STR(dccp_destroy_sock) },
	{ 0x78bc24d, __VMLINUX_SYMBOL_STR(dccp_make_response) },
	{ 0x2a067da0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x8f732184, __VMLINUX_SYMBOL_STR(dccp_send_sync) },
	{ 0x7e6c9e6, __VMLINUX_SYMBOL_STR(dccp_rcv_established) },
	{ 0xd78e6f89, __VMLINUX_SYMBOL_STR(security_skb_classify_flow) },
	{ 0x5285bdbd, __VMLINUX_SYMBOL_STR(inet_csk_prepare_forced_close) },
	{ 0xcde62a09, __VMLINUX_SYMBOL_STR(dccp_create_openreq_child) },
	{ 0xa2d3dd96, __VMLINUX_SYMBOL_STR(dccp_check_req) },
	{ 0x5924ee64, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x659d9630, __VMLINUX_SYMBOL_STR(dccp_recvmsg) },
	{ 0x3961acb2, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0xbc455f02, __VMLINUX_SYMBOL_STR(inet_sk_rebuild_header) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcd3cb500, __VMLINUX_SYMBOL_STR(dccp_ioctl) },
	{ 0xfa93b37c, __VMLINUX_SYMBOL_STR(dccp_setsockopt) },
	{ 0xd382a1b2, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xa89ae76c, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x4def03d6, __VMLINUX_SYMBOL_STR(dccp_child_process) },
	{ 0xb2c5fa92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x8d39b20c, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x68c071d7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x590e1c8b, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xdcc6aefd, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xdff6fdba, __VMLINUX_SYMBOL_STR(dccp_parse_options) },
	{ 0x81ef28aa, __VMLINUX_SYMBOL_STR(dccp_getsockopt) },
	{ 0x14130075, __VMLINUX_SYMBOL_STR(inet_csk_update_pmtu) },
	{ 0x2deda4a1, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x7740df6d, __VMLINUX_SYMBOL_STR(inet_csk_route_req) },
	{ 0x8efd39fb, __VMLINUX_SYMBOL_STR(inet_csk_search_req) },
	{ 0xef24df3e, __VMLINUX_SYMBOL_STR(inet_csk_delete_keepalive_timer) },
	{ 0xa8a19fe, __VMLINUX_SYMBOL_STR(inet_csk_route_child_sock) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb9fecc3e, __VMLINUX_SYMBOL_STR(inet_hash_connect) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x692a2a52, __VMLINUX_SYMBOL_STR(dccp_reqsk_init) },
	{ 0x95ae1f06, __VMLINUX_SYMBOL_STR(dccp_close) },
	{ 0xc502e7fe, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x7f2c5f2a, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x5463be50, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x9a123b7, __VMLINUX_SYMBOL_STR(dccp_orphan_count) },
	{ 0xdaebe76c, __VMLINUX_SYMBOL_STR(dccp_sync_mss) },
	{ 0xa20ce1b8, __VMLINUX_SYMBOL_STR(net_msg_warn) },
	{ 0xa28ba293, __VMLINUX_SYMBOL_STR(inet_accept) },
	{ 0x5118c382, __VMLINUX_SYMBOL_STR(secure_dccp_sequence_number) },
	{ 0x93810632, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0xd033c7e5, __VMLINUX_SYMBOL_STR(inet_csk_get_port) },
	{ 0x692c942f, __VMLINUX_SYMBOL_STR(dccp_death_row) },
	{ 0xb5d314f7, __VMLINUX_SYMBOL_STR(inet_ctl_sock_create) },
	{ 0x4fce8d5b, __VMLINUX_SYMBOL_STR(dccp_poll) },
	{ 0x1f0d74c6, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x82dcd770, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xed0a8eb4, __VMLINUX_SYMBOL_STR(dccp_disconnect) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6dcaddf7, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0x63d46765, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0x8d3c184b, __VMLINUX_SYMBOL_STR(dccp_done) },
	{ 0xc11b568f, __VMLINUX_SYMBOL_STR(__ip_route_output_key) },
	{ 0x909a878, __VMLINUX_SYMBOL_STR(sk_release_kernel) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf8cc038e, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xf955eadd, __VMLINUX_SYMBOL_STR(inet_stream_connect) },
	{ 0x7c7f7032, __VMLINUX_SYMBOL_STR(inet_getname) },
	{ 0x26ec25db, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xef94f53f, __VMLINUX_SYMBOL_STR(inet_csk_bind_conflict) },
	{ 0x36c883ff, __VMLINUX_SYMBOL_STR(__inet_hash_nolisten) },
	{ 0x4cdd391d, __VMLINUX_SYMBOL_STR(dccp_feat_list_purge) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x112610a0, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0xeefc8117, __VMLINUX_SYMBOL_STR(inet_csk_reqsk_queue_hash_add) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x4212313f, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xa2b0fe5e, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x3e3f2104, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xd0c1e473, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe1761617, __VMLINUX_SYMBOL_STR(security_inet_conn_request) },
	{ 0x10a46f9a, __VMLINUX_SYMBOL_STR(inet_dccp_listen) },
	{ 0x997e3f27, __VMLINUX_SYMBOL_STR(__inet_inherit_port) },
	{ 0x965115f0, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0xd0f9aa2b, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x86be7924, __VMLINUX_SYMBOL_STR(dccp_packet_name) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7974605c, __VMLINUX_SYMBOL_STR(inet_csk_accept) },
	{ 0xa0435195, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x30e45b54, __VMLINUX_SYMBOL_STR(dccp_reqsk_send_ack) },
	{ 0x84aee46e, __VMLINUX_SYMBOL_STR(dccp_rcv_state_process) },
	{ 0x6eac679, __VMLINUX_SYMBOL_STR(dccp_connect) },
	{ 0x7b678240, __VMLINUX_SYMBOL_STR(dccp_shutdown) },
	{ 0x21c19069, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0xc5f2763, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0xfa603e61, __VMLINUX_SYMBOL_STR(inet_csk_addr2sockaddr) },
	{ 0x1db31215, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dccp";


MODULE_INFO(srcversion, "79034AE8FFA88B79C657318");