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
	{ 0xcfd81e20, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0xfbc117a2, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27b4ee6f, __VMLINUX_SYMBOL_STR(scsi_remove_target) },
	{ 0x569fceb7, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd6195785, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x21e51fd2, __VMLINUX_SYMBOL_STR(transport_destroy_device) },
	{ 0x2421aeee, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc5627dd5, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe21cc54f, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xae602c05, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x7b593689, __VMLINUX_SYMBOL_STR(transport_add_device) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xad6ba803, __VMLINUX_SYMBOL_STR(bsg_register_queue) },
	{ 0xc1789760, __VMLINUX_SYMBOL_STR(transport_configure_device) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xb10b9af6, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf4818498, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x860e1312, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x7aee548a, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0x1063f6f2, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x57f1623f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x3fda6556, __VMLINUX_SYMBOL_STR(transport_setup_device) },
	{ 0x8d5c969f, __VMLINUX_SYMBOL_STR(bsg_unregister_queue) },
	{ 0x18f9128a, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x6703f64a, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x5927d0d9, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc5cd5f1a, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x66121959, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xcd1ec941, __VMLINUX_SYMBOL_STR(scsi_get_vpd_page) },
	{ 0xa07081bd, __VMLINUX_SYMBOL_STR(transport_remove_device) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x37f2eb37, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x285bcadb, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F74402139C65AEDA1910B75");
