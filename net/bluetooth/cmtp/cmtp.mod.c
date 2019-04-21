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
	{ 0x5d0c182b, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6970534a, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x2b8c46d1, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xb7c9718c, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x1de5271b, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x217db965, __VMLINUX_SYMBOL_STR(attach_capi_ctr) },
	{ 0xc5d14f4, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb46965c6, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x8cddfaed, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xa75226f7, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe2ce02f0, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x9b9e84e6, __VMLINUX_SYMBOL_STR(capi_ctr_handle_message) },
	{ 0x37a8c7b5, __VMLINUX_SYMBOL_STR(bt_sock_register) },
	{ 0x868b3665, __VMLINUX_SYMBOL_STR(capi_ctr_down) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xacc5e45, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x5e7f1231, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x18ee713e, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x114c7607, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xb61a0c3b, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x7c640527, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xb2c5fa92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8d39b20c, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x349c50d9, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x8b6d0d73, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0xba899a73, __VMLINUX_SYMBOL_STR(bt_sock_unlink) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xaaf11b11, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x68c071d7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xafd7e350, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xdb353d7a, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xaade168a, __VMLINUX_SYMBOL_STR(capi_ctr_ready) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x4fe227c, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x7011dbb5, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xc502e7fe, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x8fea24bd, __VMLINUX_SYMBOL_STR(bt_sock_unregister) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4a913f5b, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x5ef0cb31, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x251b888a, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x3c34b874, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xfd590737, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x16bbcfe6, __VMLINUX_SYMBOL_STR(bt_sock_link) },
	{ 0xfec2bcd0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x3b99b8aa, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x82dcd770, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf8cc038e, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x46e64d4f, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0x1031f1dc, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x1e700719, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x93ae7fbd, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xa6bc24e9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb15f49, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0xba8acf82, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xcc644940, __VMLINUX_SYMBOL_STR(bt_procfs_init) },
	{ 0xe85501af, __VMLINUX_SYMBOL_STR(detach_capi_ctr) },
	{ 0xd6bcce70, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xff3951e9, __VMLINUX_SYMBOL_STR(bt_procfs_cleanup) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,bluetooth";


MODULE_INFO(srcversion, "6809A6929A95B0CB4BAB616");
