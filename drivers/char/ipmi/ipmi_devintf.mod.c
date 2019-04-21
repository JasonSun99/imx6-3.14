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
	{ 0xf9893c39, __VMLINUX_SYMBOL_STR(ipmi_smi_watcher_unregister) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x73b1d8aa, __VMLINUX_SYMBOL_STR(ipmi_smi_watcher_register) },
	{ 0x3b0a1f82, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x3f027eb1, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x636ace9f, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xfcb77cfd, __VMLINUX_SYMBOL_STR(ipmi_free_recv_msg) },
	{ 0x5e80f37c, __VMLINUX_SYMBOL_STR(ipmi_unregister_for_cmd) },
	{ 0xe6ab72a6, __VMLINUX_SYMBOL_STR(ipmi_set_my_LUN) },
	{ 0xe0fa83f2, __VMLINUX_SYMBOL_STR(ipmi_register_for_cmd) },
	{ 0xa2a98b91, __VMLINUX_SYMBOL_STR(ipmi_get_maintenance_mode) },
	{ 0x16dcec76, __VMLINUX_SYMBOL_STR(ipmi_set_my_address) },
	{ 0x1a10c898, __VMLINUX_SYMBOL_STR(ipmi_set_maintenance_mode) },
	{ 0x5fcdcc05, __VMLINUX_SYMBOL_STR(ipmi_get_my_LUN) },
	{ 0xa28a2ace, __VMLINUX_SYMBOL_STR(ipmi_set_gets_events) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x524f6f51, __VMLINUX_SYMBOL_STR(ipmi_get_my_address) },
	{ 0x804f922a, __VMLINUX_SYMBOL_STR(ipmi_addr_length) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x1348760d, __VMLINUX_SYMBOL_STR(ipmi_request_settime) },
	{ 0xe4f4665b, __VMLINUX_SYMBOL_STR(ipmi_validate_addr) },
	{ 0xe19a824c, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x423b776a, __VMLINUX_SYMBOL_STR(ipmi_create_user) },
	{ 0x8c8ee770, __VMLINUX_SYMBOL_STR(ipmi_destroy_user) },
	{ 0xd2c1c688, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x17dd461c, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8a3caa24, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";


MODULE_INFO(srcversion, "88071320C916C44BC0DC4BB");
