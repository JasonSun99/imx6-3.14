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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x561ea89b, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xa6bf801d, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x554408fa, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x8ac32b21, __VMLINUX_SYMBOL_STR(driver_remove_file) },
	{ 0xd871f36c, __VMLINUX_SYMBOL_STR(driver_create_file) },
	{ 0xccbb54f, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x3361939d, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xa0265d41, __VMLINUX_SYMBOL_STR(scsi_cmd_ioctl) },
	{ 0x9c857627, __VMLINUX_SYMBOL_STR(scsi_nonblockable_ioctl) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x5ab2090c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x24684d9b, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0xb630252e, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xf1806da9, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xadf39cf4, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x22fbe097, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe0a4f7b6, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0x99c24b02, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xc0c4332c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x93ae4026, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x2b8c46d1, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xa76f5c31, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0x114c7607, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x96ec6ba8, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xad188e4f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x21c41896, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x8b6946b6, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x69d38ed9, __VMLINUX_SYMBOL_STR(__scsi_print_sense) },
	{ 0x2b0ba2b0, __VMLINUX_SYMBOL_STR(scsi_sense_desc_find) },
	{ 0x796fc5ce, __VMLINUX_SYMBOL_STR(scsi_get_sense_info_fld) },
	{ 0xc65e73c, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xf808c981, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x7c67e562, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1ed5ca18, __VMLINUX_SYMBOL_STR(blk_put_queue) },
	{ 0xd6195785, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xf47ca8bf, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0x1063f6f2, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf74dae0f, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x18998404, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xa36999d7, __VMLINUX_SYMBOL_STR(blk_get_queue) },
	{ 0x4d298015, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x17dd461c, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xfe75043f, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xd7545398, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0xdf401846, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x679b0ae7, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0xe9ad44ba, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x38347172, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xe6fc8c1d, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x33788b6c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xf4818498, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "526098459DB8AA39B70CBB8");
