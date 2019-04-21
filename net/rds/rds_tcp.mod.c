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
	{ 0xbaff3a71, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xfa96d944, __VMLINUX_SYMBOL_STR(rds_trans_register) },
	{ 0xb7c9718c, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x24924c92, __VMLINUX_SYMBOL_STR(sock_create_lite) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcc5d7d87, __VMLINUX_SYMBOL_STR(rds_connect_complete) },
	{ 0xf19e9355, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x55fb0fc0, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x16053804, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x50cbe7b3, __VMLINUX_SYMBOL_STR(rds_stats) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x1895aae0, __VMLINUX_SYMBOL_STR(rds_conn_create) },
	{ 0x245b42bd, __VMLINUX_SYMBOL_STR(rds_recv_incoming) },
	{ 0x1a0a483a, __VMLINUX_SYMBOL_STR(rds_inc_init) },
	{ 0xb2c5fa92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xaaf11b11, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc38d8eab, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0xac1f37e5, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x762bf80a, __VMLINUX_SYMBOL_STR(rds_info_register_func) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x29128cba, __VMLINUX_SYMBOL_STR(rds_inc_put) },
	{ 0x96fafe85, __VMLINUX_SYMBOL_STR(rds_stats_info_copy) },
	{ 0xc2dab779, __VMLINUX_SYMBOL_STR(rds_info_copy) },
	{ 0x1161cd20, __VMLINUX_SYMBOL_STR(rds_send_drop_acked) },
	{ 0x5ef0cb31, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x731ee7, __VMLINUX_SYMBOL_STR(rds_conn_destroy) },
	{ 0x3b99b8aa, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xa467af, __VMLINUX_SYMBOL_STR(rds_wq) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xad1ea416, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x96b6f4b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x5ae12f7, __VMLINUX_SYMBOL_STR(rds_info_deregister_func) },
	{ 0xdb5b4908, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x4f02cdde, __VMLINUX_SYMBOL_STR(rds_trans_unregister) },
	{ 0x6e577c22, __VMLINUX_SYMBOL_STR(sock_create) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x1a4e4a2c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xc77aa963, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0xe997d7a0, __VMLINUX_SYMBOL_STR(rds_conn_drop) },
	{ 0xc642cc2c, __VMLINUX_SYMBOL_STR(rds_cong_map_updated) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rds";


MODULE_INFO(srcversion, "B15892F1A50A23353297C03");
