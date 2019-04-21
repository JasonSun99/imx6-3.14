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
	{ 0x554408fa, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x31a5e8e1, __VMLINUX_SYMBOL_STR(class_interface_unregister) },
	{ 0xccbb54f, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xcbefc5db, __VMLINUX_SYMBOL_STR(scsi_register_interface) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9c25a10c, __VMLINUX_SYMBOL_STR(enclosure_add_device) },
	{ 0xeb4fbabb, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x38afda04, __VMLINUX_SYMBOL_STR(enclosure_register) },
	{ 0x963f564c, __VMLINUX_SYMBOL_STR(enclosure_for_each_device) },
	{ 0xcd1ec941, __VMLINUX_SYMBOL_STR(scsi_get_vpd_page) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xedc3ea62, __VMLINUX_SYMBOL_STR(enclosure_component_register) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xfd95129a, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd6195785, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x27f836a2, __VMLINUX_SYMBOL_STR(enclosure_remove_device) },
	{ 0x6d0e3670, __VMLINUX_SYMBOL_STR(enclosure_unregister) },
	{ 0x57f1623f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbbd81e96, __VMLINUX_SYMBOL_STR(enclosure_find) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=enclosure";


MODULE_INFO(srcversion, "BF23CD534DA0944288555EF");
