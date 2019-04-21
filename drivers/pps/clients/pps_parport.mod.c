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
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xd89d0f01, __VMLINUX_SYMBOL_STR(parport_unregister_driver) },
	{ 0xb04b5a20, __VMLINUX_SYMBOL_STR(parport_register_driver) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x53139b18, __VMLINUX_SYMBOL_STR(pps_event) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x92b1f1b5, __VMLINUX_SYMBOL_STR(pps_register_source) },
	{ 0xc4d6a5ae, __VMLINUX_SYMBOL_STR(parport_claim_or_block) },
	{ 0x37a167c4, __VMLINUX_SYMBOL_STR(parport_register_device) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5475bee9, __VMLINUX_SYMBOL_STR(parport_unregister_device) },
	{ 0xb94aaf34, __VMLINUX_SYMBOL_STR(parport_release) },
	{ 0x9cc41f2e, __VMLINUX_SYMBOL_STR(pps_unregister_source) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";


MODULE_INFO(srcversion, "DE39644C64282935B3608CA");
