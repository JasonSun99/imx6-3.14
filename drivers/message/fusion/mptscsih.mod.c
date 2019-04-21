#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc2ca9c8b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc901afb4, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0x267d5c93, __VMLINUX_SYMBOL_STR(mpt_set_taskmgmt_in_progress_flag) },
	{ 0xaee20cf5, __VMLINUX_SYMBOL_STR(mpt_HardResetHandler) },
	{ 0xd6195785, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xbcabbce0, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd64d7aa, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x55b1e8bb, __VMLINUX_SYMBOL_STR(mpt_halt_firmware) },
	{ 0xc8f01ab, __VMLINUX_SYMBOL_STR(scsi_adjust_queue_depth) },
	{ 0x1db0169c, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x826c3708, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_get_num_paths) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x789ef53b, __VMLINUX_SYMBOL_STR(mpt_send_handshake_request) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x502108d0, __VMLINUX_SYMBOL_STR(mpt_fwfault_debug) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcfc4eac2, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd2f0acec, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0x40aba01a, __VMLINUX_SYMBOL_STR(mpt_resume) },
	{ 0xdb86eca8, __VMLINUX_SYMBOL_STR(mpt_Soft_Hard_ResetHandler) },
	{ 0x8190ada9, __VMLINUX_SYMBOL_STR(mpt_GetIocState) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xea10212a, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x9bcdcc9b, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa06aa245, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0xd6f7e531, __VMLINUX_SYMBOL_STR(mpt_print_ioc_summary) },
	{ 0x52908d8a, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xedae3d10, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa5c570aa, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xe0d80a66, __VMLINUX_SYMBOL_STR(mpt_suspend) },
	{ 0x627b051b, __VMLINUX_SYMBOL_STR(mpt_detach) },
	{ 0x4f2c33c7, __VMLINUX_SYMBOL_STR(mpt_clear_taskmgmt_in_progress_flag) },
	{ 0xca1da3b1, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
	{ 0x45489074, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame_hi_pri) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptbase";


MODULE_INFO(srcversion, "03D163D822D52FCCAE0BDEF");
