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
	{ 0xb4709322, __VMLINUX_SYMBOL_STR(scsi_dev_info_add_list) },
	{ 0xfbc117a2, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xc65e73c, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd6195785, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xb0407b70, __VMLINUX_SYMBOL_STR(scsi_get_device_flags_keyed) },
	{ 0xd9f4a7c, __VMLINUX_SYMBOL_STR(scsi_target_resume) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x9b4447ce, __VMLINUX_SYMBOL_STR(anon_transport_class_register) },
	{ 0x2421aeee, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x40a27c37, __VMLINUX_SYMBOL_STR(scsi_dev_info_remove_list) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x991ca715, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0xd4c2ee7, __VMLINUX_SYMBOL_STR(scsi_device_quiesce) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xe21cc54f, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc2561fc5, __VMLINUX_SYMBOL_STR(sysfs_chmod_file) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xb10b9af6, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7aee548a, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0x351017bd, __VMLINUX_SYMBOL_STR(sysfs_update_group) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xf808c981, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdc047fc4, __VMLINUX_SYMBOL_STR(scsi_dev_info_list_add_keyed) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x81c46a31, __VMLINUX_SYMBOL_STR(scsi_device_set_state) },
	{ 0x5927d0d9, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x41ca56b7, __VMLINUX_SYMBOL_STR(scsi_target_quiesce) },
	{ 0xdf744fd9, __VMLINUX_SYMBOL_STR(scsi_is_target_device) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb630252e, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x8d76dd79, __VMLINUX_SYMBOL_STR(anon_transport_class_unregister) },
	{ 0x212cde44, __VMLINUX_SYMBOL_STR(scsi_is_sdev_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "479C05C3F2C601A5BCB24E0");
