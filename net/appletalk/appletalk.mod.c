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
	{ 0xba3cdb68, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6970534a, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x6b60ef86, __VMLINUX_SYMBOL_STR(seq_open_private) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x409cf9dd, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x4c272a74, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x387d2520, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0xb46965c6, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x7740a914, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x8cddfaed, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xd0d009b6, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x16053804, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb622c2cd, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x3a65ed9f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xfb1af7d4, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x29e41014, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x75bda77a, __VMLINUX_SYMBOL_STR(seq_hlist_next) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf69fef36, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xacc5e45, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x6b5d93d7, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xa89ae76c, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xb2c5fa92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x54f36b54, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0x8d39b20c, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x1746a1f2, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xaaf11b11, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x68c071d7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xd48cba88, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xafd7e350, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xac1f37e5, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x3dfc897c, __VMLINUX_SYMBOL_STR(seq_hlist_start_head) },
	{ 0x4fe227c, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x7011dbb5, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xc502e7fe, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xf54d48c9, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5ef0cb31, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2d373a4b, __VMLINUX_SYMBOL_STR(register_snap_client) },
	{ 0xfd590737, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x3b99b8aa, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x82dcd770, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xc01c0a77, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0x3ef22c59, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{        0, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf8cc038e, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xd6be4c96, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xccb076e5, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x2ebc990d, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0xad1ea416, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xb3b3c4f4, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xa6bc24e9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x6ef38036, __VMLINUX_SYMBOL_STR(unregister_snap_client) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xd6bcce70, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x64a46907, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x10982385, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa249c090, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xc049d3ef, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xcecbd3d5, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0x3bfce95f, __VMLINUX_SYMBOL_STR(dev_mc_add_global) },
	{ 0x8389bb64, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "767D66DC9F20D28B74AB1BD");
