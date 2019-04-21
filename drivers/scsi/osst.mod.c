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
	{ 0x8ac32b21, __VMLINUX_SYMBOL_STR(driver_remove_file) },
	{ 0x3b0a1f82, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x554408fa, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xd871f36c, __VMLINUX_SYMBOL_STR(driver_create_file) },
	{ 0xccbb54f, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x3f027eb1, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x636ace9f, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x96ec6ba8, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xad188e4f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xb630252e, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x24684d9b, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x5ab2090c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0x26d16cc8, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x22fbe097, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0xadf39cf4, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xe0a4f7b6, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x99c24b02, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd6195785, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x4d298015, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x21c41896, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x8b6946b6, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x69d38ed9, __VMLINUX_SYMBOL_STR(__scsi_print_sense) },
	{ 0x2b0ba2b0, __VMLINUX_SYMBOL_STR(scsi_sense_desc_find) },
	{ 0x796fc5ce, __VMLINUX_SYMBOL_STR(scsi_get_sense_info_fld) },
	{ 0xc65e73c, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xf808c981, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x7c67e562, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xe9ad44ba, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x38347172, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x86e0c1a8, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x17dd461c, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x8a3caa24, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "89C505EE6C07274486295F0");
