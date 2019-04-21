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
	{ 0xfc117d13, __VMLINUX_SYMBOL_STR(ath6kl_core_destroy) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xc48dc41, __VMLINUX_SYMBOL_STR(ath6kl_hif_intr_bh_handler) },
	{ 0x785b2e78, __VMLINUX_SYMBOL_STR(ath6kl_core_cleanup) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x91cfb84a, __VMLINUX_SYMBOL_STR(ath6kl_hif_rw_comp_handler) },
	{ 0x3ad9e427, __VMLINUX_SYMBOL_STR(ath6kl_dbg) },
	{ 0x2ca02fdd, __VMLINUX_SYMBOL_STR(ath6kl_core_create) },
	{ 0xa53b170f, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xd248f106, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x52735aad, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xd7ce7c30, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x51e77c97, __VMLINUX_SYMBOL_STR(pfn_valid) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbd8c29c3, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x396e7148, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0x4c6ddcb4, __VMLINUX_SYMBOL_STR(ath6kl_err) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27cf1694, __VMLINUX_SYMBOL_STR(ath6kl_warn) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xb8e5b00c, __VMLINUX_SYMBOL_STR(ath6kl_dbg_dump) },
	{ 0x24cfb8b8, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x58409a59, __VMLINUX_SYMBOL_STR(ath6kl_cfg80211_suspend) },
	{ 0x7216ae0c, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x65d97b23, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x63b6fba, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x120f3c8f, __VMLINUX_SYMBOL_STR(ath6kl_cfg80211_resume) },
	{ 0x4b65e148, __VMLINUX_SYMBOL_STR(ath6kl_stop_txrx) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa3f89351, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x764ade0c, __VMLINUX_SYMBOL_STR(ath6kl_core_init) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x43193fd3, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x44f28999, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xaa871106, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x7d246069, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd118e3, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xb91c7f09, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x8457105a, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath6kl_core";

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
MODULE_ALIAS("sdio:c*v0271d0400*");
MODULE_ALIAS("sdio:c*v0271d0401*");

MODULE_INFO(srcversion, "FE26BC89D9F0544880B0BF7");
