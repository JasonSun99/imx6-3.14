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
	{ 0x2a4820c0, __VMLINUX_SYMBOL_STR(dev_load) },
	{ 0x6970534a, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1c1225d8, __VMLINUX_SYMBOL_STR(dev_getbyhwaddr_rcu) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x2a067da0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x9d1e4a14, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x16053804, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe2ce02f0, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xfb1af7d4, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x29e41014, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x86e4f4a0, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xd382a1b2, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xa89ae76c, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x54f36b54, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0x8d39b20c, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x68c071d7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xafd7e350, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb353d7a, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xac1f37e5, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x579c8447, __VMLINUX_SYMBOL_STR(sock_prot_inuse_add) },
	{ 0x4fe227c, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7011dbb5, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x9b5863d7, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xf54d48c9, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x5ef0cb31, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xfd590737, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xe37d87c3, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0x82dcd770, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xc01c0a77, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0x3ef22c59, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{        0, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x9f628b3, __VMLINUX_SYMBOL_STR(dev_getfirstbyhwtype) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf8cc038e, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xccb076e5, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xad1ea416, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa2b0fe5e, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0xd0f9aa2b, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x64a46907, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xa249c090, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x8389bb64, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6D5B7E3E9CC0D5BE3D4E7B0");
