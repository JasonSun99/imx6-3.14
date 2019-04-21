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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbfb9dc7c, __VMLINUX_SYMBOL_STR(p9_client_cb) },
	{ 0x5e1f3241, __VMLINUX_SYMBOL_STR(v9fs_unregister_trans) },
	{ 0xf21e0009, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x1b6314fd, __VMLINUX_SYMBOL_STR(in_aton) },
	{ 0x5109397a, __VMLINUX_SYMBOL_STR(ib_destroy_qp) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x7817d33d, __VMLINUX_SYMBOL_STR(v9fs_register_trans) },
	{ 0x37eb9be9, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x1a37c7e9, __VMLINUX_SYMBOL_STR(p9_parse_header) },
	{ 0xc883c41f, __VMLINUX_SYMBOL_STR(rdma_connect) },
	{ 0xf748ac5, __VMLINUX_SYMBOL_STR(p9_tag_lookup) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd6ed702b, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x66a6e2d6, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0xa1719c9e, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x2fa46fa4, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0xfb8d9fd9, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0xf7c544bd, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0xd683ef45, __VMLINUX_SYMBOL_STR(rdma_resolve_route) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x60d9cba9, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd017f21c, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x2d22f960, __VMLINUX_SYMBOL_STR(rdma_resolve_addr) },
	{ 0x7a3aa7b1, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=9pnet,ib_core,rdma_cm";


MODULE_INFO(srcversion, "6CA5B7081B4D641AD810009");
