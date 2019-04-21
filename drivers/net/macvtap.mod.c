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
	{ 0x33788b6c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x6970534a, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xd140268f, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xb71b5265, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0xf09285a2, __VMLINUX_SYMBOL_STR(macvlan_dellink) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x56143f89, __VMLINUX_SYMBOL_STR(skb_flow_dissect) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x5c06a2f0, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x262576c1, __VMLINUX_SYMBOL_STR(zerocopy_sg_from_iovec) },
	{ 0xf8762f1a, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x40f52a20, __VMLINUX_SYMBOL_STR(macvlan_common_newlink) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x8a3caa24, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x279194bc, __VMLINUX_SYMBOL_STR(sock_alloc_send_pskb) },
	{ 0x5cdd3c37, __VMLINUX_SYMBOL_STR(macvlan_link_register) },
	{ 0xf9c367e0, __VMLINUX_SYMBOL_STR(iov_pages) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xa43b9539, __VMLINUX_SYMBOL_STR(memcpy_fromiovecend) },
	{ 0x3e16d424, __VMLINUX_SYMBOL_STR(skb_partial_csum_set) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xaaf11b11, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xafd7e350, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6bf801d, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x9e2000a7, __VMLINUX_SYMBOL_STR(memcpy_toiovecend) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf26ca04, __VMLINUX_SYMBOL_STR(skb_copy_datagram_const_iovec) },
	{ 0xc502e7fe, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x17dd461c, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xf74dae0f, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x1622c4e5, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xc97e2060, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xdf401846, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xfe75043f, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x3b99b8aa, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xf1806da9, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xef9130f6, __VMLINUX_SYMBOL_STR(macvlan_common_setup) },
	{ 0x496924fe, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0xf0c9c5e0, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4c62fa64, __VMLINUX_SYMBOL_STR(ipv6_proxy_select_ident) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xb9acd3d9, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd6bcce70, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x95dbe078, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x69f712e2, __VMLINUX_SYMBOL_STR(skb_copy_datagram_from_iovec) },
	{ 0x7eb8bb6c, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xa249c090, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x636ace9f, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=macvlan";


MODULE_INFO(srcversion, "0C308511B862145C43595C8");
