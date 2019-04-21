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
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0xc9a9728b, __VMLINUX_SYMBOL_STR(mlx5_core_access_reg) },
	{ 0xbe918396, __VMLINUX_SYMBOL_STR(mlx5_core_qp_query) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3cf1df93, __VMLINUX_SYMBOL_STR(mlx5_core_arm_srq) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xa9bca8dc, __VMLINUX_SYMBOL_STR(mlx5_cmd_alloc_uar) },
	{ 0xd93bdb50, __VMLINUX_SYMBOL_STR(mlx5_cmd_free_uar) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x19584a7e, __VMLINUX_SYMBOL_STR(mlx5_core_mad_ifc) },
	{ 0x3f18ddf0, __VMLINUX_SYMBOL_STR(mlx5_debugfs_root) },
	{ 0xf21e0009, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc0787514, __VMLINUX_SYMBOL_STR(mlx5_core_destroy_cq) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x157ae862, __VMLINUX_SYMBOL_STR(mlx5_dev_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x16f26d8b, __VMLINUX_SYMBOL_STR(mlx5_core_get_srq) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xfeb1b677, __VMLINUX_SYMBOL_STR(mlx5_destroy_unmap_eq) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe3c3d618, __VMLINUX_SYMBOL_STR(mlx5_core_destroy_srq) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5ad2b408, __VMLINUX_SYMBOL_STR(mlx5_core_qp_modify) },
	{ 0xfa670f37, __VMLINUX_SYMBOL_STR(mlx5_create_map_eq) },
	{ 0x2e672976, __VMLINUX_SYMBOL_STR(mlx5_core_query_srq) },
	{ 0x176fdac4, __VMLINUX_SYMBOL_STR(ib_alloc_device) },
	{ 0xfd4aec81, __VMLINUX_SYMBOL_STR(ib_dealloc_device) },
	{ 0xf5df0f0a, __VMLINUX_SYMBOL_STR(mlx5_core_modify_cq) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd6ed702b, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x1c5336c7, __VMLINUX_SYMBOL_STR(mlx5_buf_alloc) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x66a6e2d6, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0x445e6822, __VMLINUX_SYMBOL_STR(mlx5_buf_free) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xea60c41e, __VMLINUX_SYMBOL_STR(mlx5_set_port_caps) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xdcf517c3, __VMLINUX_SYMBOL_STR(ib_umem_get) },
	{ 0x73b64772, __VMLINUX_SYMBOL_STR(mlx5_core_detach_mcg) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xa512a900, __VMLINUX_SYMBOL_STR(mlx5_core_create_cq) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xfb8d9fd9, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0x17d45d1d, __VMLINUX_SYMBOL_STR(ib_dispatch_event) },
	{ 0x86e0c1a8, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x69fd3127, __VMLINUX_SYMBOL_STR(ib_register_device) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0x8cbe2cf0, __VMLINUX_SYMBOL_STR(mlx5_core_dealloc_pd) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9d9bda94, __VMLINUX_SYMBOL_STR(mlx5_fill_page_array) },
	{ 0xb7cd0604, __VMLINUX_SYMBOL_STR(ib_unregister_device) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd017f21c, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0x9ab797e7, __VMLINUX_SYMBOL_STR(mlx5_core_xrcd_alloc) },
	{ 0xf4921782, __VMLINUX_SYMBOL_STR(mlx5_db_alloc) },
	{ 0xbece501b, __VMLINUX_SYMBOL_STR(mlx5_core_destroy_qp) },
	{ 0xa09bc431, __VMLINUX_SYMBOL_STR(mlx5_core_create_srq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x78614dce, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3b8f7e82, __VMLINUX_SYMBOL_STR(mlx5_core_xrcd_dealloc) },
	{ 0xa6326baf, __VMLINUX_SYMBOL_STR(mlx5_core_create_mkey) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x6e030e26, __VMLINUX_SYMBOL_STR(ib_modify_qp_is_ok) },
	{ 0x870bf928, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x7a3aa7b1, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc41c653e, __VMLINUX_SYMBOL_STR(mlx5_core_alloc_pd) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb094e2dd, __VMLINUX_SYMBOL_STR(mlx5_core_attach_mcg) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbf32727f, __VMLINUX_SYMBOL_STR(mlx5_core_destroy_mkey) },
	{ 0xdac3dc6, __VMLINUX_SYMBOL_STR(mlx5_db_free) },
	{ 0xb843edf4, __VMLINUX_SYMBOL_STR(mlx5_dev_cleanup) },
	{ 0x715303ae, __VMLINUX_SYMBOL_STR(ib_umem_release) },
	{ 0xc7b58a, __VMLINUX_SYMBOL_STR(mlx5_core_create_qp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mlx5_core,ib_core";

MODULE_ALIAS("pci:v000015B3d00001011sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "65714F17C58E3E26CA90EC7");
