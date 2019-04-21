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
	{ 0x16e91e21, __VMLINUX_SYMBOL_STR(fw_csr_iterator_next) },
	{ 0x605bfbe2, __VMLINUX_SYMBOL_STR(fw_device_enable_phys_dma) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xed4f5879, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x4eeb7fb8, __VMLINUX_SYMBOL_STR(__scsi_add_device) },
	{ 0x19051115, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7211cd01, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xc901afb4, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0x50f788ee, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xb0964120, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x1ebeaa82, __VMLINUX_SYMBOL_STR(fw_send_request) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xbcabbce0, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x2acb4562, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x65c9438b, __VMLINUX_SYMBOL_STR(fw_csr_iterator_init) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x1b9e0ff1, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3c56ef91, __VMLINUX_SYMBOL_STR(fw_workqueue) },
	{ 0x554408fa, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xcfc4eac2, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xc6a8427, __VMLINUX_SYMBOL_STR(blk_queue_update_dma_alignment) },
	{ 0x76620642, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xf808c981, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x674cf97f, __VMLINUX_SYMBOL_STR(fw_cancel_transaction) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x308cbec9, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0xa9755347, __VMLINUX_SYMBOL_STR(fw_core_add_address_handler) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x691d1e61, __VMLINUX_SYMBOL_STR(fw_core_remove_address_handler) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa06aa245, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xedae3d10, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x90863005, __VMLINUX_SYMBOL_STR(fw_high_memory_region) },
	{ 0x52cf0608, __VMLINUX_SYMBOL_STR(fw_run_transaction) },
	{ 0x197a4516, __VMLINUX_SYMBOL_STR(fw_send_response) },
	{ 0xca1da3b1, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core";

MODULE_ALIAS("ieee1394:ven*mo*sp0000609Ever00010483*");

MODULE_INFO(srcversion, "0855EDC9D63804CC403BAF4");
