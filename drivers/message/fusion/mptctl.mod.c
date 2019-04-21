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
	{ 0xf8762f1a, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xc0e69f82, __VMLINUX_SYMBOL_STR(mpt_device_driver_deregister) },
	{ 0xfd611836, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0x95c08fc, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x73d004e8, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x766be74d, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0xddca91a9, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x269f9bc7, __VMLINUX_SYMBOL_STR(mpt_device_driver_register) },
	{ 0xaee20cf5, __VMLINUX_SYMBOL_STR(mpt_HardResetHandler) },
	{ 0xeb4fbabb, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xceafb3b7, __VMLINUX_SYMBOL_STR(mpt_alloc_fw_memory) },
	{ 0x5a94eac8, __VMLINUX_SYMBOL_STR(mpt_free_fw_memory) },
	{ 0x5ab2090c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x9334593c, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe19a824c, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xd2f0acec, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0x8190ada9, __VMLINUX_SYMBOL_STR(mpt_GetIocState) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x73b075f4, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x525792bc, __VMLINUX_SYMBOL_STR(mpt_verify_adapter) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x502108d0, __VMLINUX_SYMBOL_STR(mpt_fwfault_debug) },
	{ 0x55b1e8bb, __VMLINUX_SYMBOL_STR(mpt_halt_firmware) },
	{ 0xdb86eca8, __VMLINUX_SYMBOL_STR(mpt_Soft_Hard_ResetHandler) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x45489074, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame_hi_pri) },
	{ 0x4f2c33c7, __VMLINUX_SYMBOL_STR(mpt_clear_taskmgmt_in_progress_flag) },
	{ 0xa5c570aa, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0x789ef53b, __VMLINUX_SYMBOL_STR(mpt_send_handshake_request) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd64d7aa, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0x267d5c93, __VMLINUX_SYMBOL_STR(mpt_set_taskmgmt_in_progress_flag) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdd805159, __VMLINUX_SYMBOL_STR(ioc_list) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd2c1c688, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptbase";


MODULE_INFO(srcversion, "CEB5390A668A825609C05A9");
