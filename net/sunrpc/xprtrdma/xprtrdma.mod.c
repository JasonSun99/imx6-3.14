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
	{ 0x9c9ec2a0, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1d63993f, __VMLINUX_SYMBOL_STR(xprt_lookup_rqst) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x3fab3ca9, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf21e0009, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0xa5e193, __VMLINUX_SYMBOL_STR(ib_alloc_fast_reg_mr) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xd0415494, __VMLINUX_SYMBOL_STR(ib_dealloc_mw) },
	{ 0x2f7003a6, __VMLINUX_SYMBOL_STR(xprt_register_transport) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x8b01d489, __VMLINUX_SYMBOL_STR(ib_free_fast_reg_page_list) },
	{ 0x4e830a3e, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0xb6ab9986, __VMLINUX_SYMBOL_STR(xprt_free) },
	{ 0x37eb9be9, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x772bee3a, __VMLINUX_SYMBOL_STR(ib_alloc_mw) },
	{ 0xb9ab22c8, __VMLINUX_SYMBOL_STR(xprt_alloc) },
	{ 0x23207e5e, __VMLINUX_SYMBOL_STR(rpcb_getport_async) },
	{ 0x7ac76a08, __VMLINUX_SYMBOL_STR(xprt_wake_pending_tasks) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5fbe21a, __VMLINUX_SYMBOL_STR(ib_modify_qp) },
	{ 0xc883c41f, __VMLINUX_SYMBOL_STR(rdma_connect) },
	{ 0xa12e447, __VMLINUX_SYMBOL_STR(rpc_exit) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x31a89d59, __VMLINUX_SYMBOL_STR(rpc_debug) },
	{ 0x1e491a04, __VMLINUX_SYMBOL_STR(ib_unmap_fmr) },
	{ 0x1746a1f2, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd6ed702b, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x66a6e2d6, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0xa1719c9e, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x410ee120, __VMLINUX_SYMBOL_STR(rdma_destroy_qp) },
	{ 0x5a86fbdd, __VMLINUX_SYMBOL_STR(xprt_unregister_transport) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0xf0b8f25e, __VMLINUX_SYMBOL_STR(xprt_release_xprt_cong) },
	{ 0x2fa46fa4, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0xfb8d9fd9, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0xf7c544bd, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0xfec2bcd0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xd683ef45, __VMLINUX_SYMBOL_STR(rdma_resolve_route) },
	{ 0xcd956bb6, __VMLINUX_SYMBOL_STR(ib_dealloc_fmr) },
	{ 0x5181723e, __VMLINUX_SYMBOL_STR(xprt_alloc_slot) },
	{ 0xe912da6b, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x74ce05b8, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x60d9cba9, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0x7b910e37, __VMLINUX_SYMBOL_STR(ib_alloc_fmr) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3694d204, __VMLINUX_SYMBOL_STR(ib_query_qp) },
	{ 0xd017f21c, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0x2a0a84cb, __VMLINUX_SYMBOL_STR(xprt_complete_rqst) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x2f8ebbe0, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0xc4e496c0, __VMLINUX_SYMBOL_STR(xprt_set_retrans_timeout_def) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2591c08c, __VMLINUX_SYMBOL_STR(xprt_reserve_xprt_cong) },
	{ 0xde32644c, __VMLINUX_SYMBOL_STR(ib_reg_phys_mr) },
	{ 0x2d22f960, __VMLINUX_SYMBOL_STR(rdma_resolve_addr) },
	{ 0x2af1deb4, __VMLINUX_SYMBOL_STR(ib_alloc_fast_reg_page_list) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x7a3aa7b1, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x26cd10fb, __VMLINUX_SYMBOL_STR(xprt_disconnect_done) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x33c499a5, __VMLINUX_SYMBOL_STR(xprt_release_rqst_cong) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xc0c4332c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x7b657827, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,rdma_cm";


MODULE_INFO(srcversion, "41C25FAD2B43C8294B4D9D5");
