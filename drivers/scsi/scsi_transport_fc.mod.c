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
	{ 0xfbc117a2, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27b4ee6f, __VMLINUX_SYMBOL_STR(scsi_remove_target) },
	{ 0x18998404, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x73ad2d83, __VMLINUX_SYMBOL_STR(scsi_flush_work) },
	{ 0x569fceb7, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xc2f2abac, __VMLINUX_SYMBOL_STR(scsi_tgt_it_nexus_destroy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd6195785, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x21e51fd2, __VMLINUX_SYMBOL_STR(transport_destroy_device) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x2421aeee, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0xc5627dd5, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe21cc54f, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xae602c05, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xcded1c35, __VMLINUX_SYMBOL_STR(scsi_queue_work) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7b593689, __VMLINUX_SYMBOL_STR(transport_add_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xad6ba803, __VMLINUX_SYMBOL_STR(bsg_register_queue) },
	{ 0xc1789760, __VMLINUX_SYMBOL_STR(transport_configure_device) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb10b9af6, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xf4818498, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x860e1312, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x7aee548a, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x1063f6f2, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb01ccb2e, __VMLINUX_SYMBOL_STR(scsi_target_unblock) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x50fd05e3, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x5488db38, __VMLINUX_SYMBOL_STR(blk_queue_softirq_done) },
	{ 0x57f1623f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x290cf7ce, __VMLINUX_SYMBOL_STR(scsi_tgt_it_nexus_create) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x3fda6556, __VMLINUX_SYMBOL_STR(transport_setup_device) },
	{ 0x8d5c969f, __VMLINUX_SYMBOL_STR(bsg_unregister_queue) },
	{ 0x3413bd7d, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x18f9128a, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6703f64a, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x346e72b2, __VMLINUX_SYMBOL_STR(blk_run_queue_async) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc5cd5f1a, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x66121959, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x961e7358, __VMLINUX_SYMBOL_STR(blk_complete_request) },
	{ 0xdf744fd9, __VMLINUX_SYMBOL_STR(scsi_is_target_device) },
	{ 0x39ff9b6, __VMLINUX_SYMBOL_STR(scsi_nl_sock) },
	{ 0xa07081bd, __VMLINUX_SYMBOL_STR(transport_remove_device) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb7da6b6d, __VMLINUX_SYMBOL_STR(scsi_target_block) },
	{ 0x37f2eb37, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x4fc77ca4, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xab359e6f, __VMLINUX_SYMBOL_STR(__scsi_alloc_queue) },
	{ 0x31726e0f, __VMLINUX_SYMBOL_STR(blk_queue_rq_timed_out) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_tgt";


MODULE_INFO(srcversion, "B09FC10E19CA9B8310621A9");
