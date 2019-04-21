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
	{ 0xadf42bd5, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xbd13de8c, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xcbaae858, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x51e77c97, __VMLINUX_SYMBOL_STR(pfn_valid) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xfad047f3, __VMLINUX_SYMBOL_STR(vmap) },
	{ 0xf2b1ac8e, __VMLINUX_SYMBOL_STR(__getnstimeofday) },
	{ 0xb050f329, __VMLINUX_SYMBOL_STR(init_rs) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf004ff4b, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x9bce482f, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x94961283, __VMLINUX_SYMBOL_STR(vunmap) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0xfc676a6d, __VMLINUX_SYMBOL_STR(pstore_register) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xee1068d0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x29fa419f, __VMLINUX_SYMBOL_STR(decode_rs8) },
	{ 0x201d8ea3, __VMLINUX_SYMBOL_STR(encode_rs8) },
	{ 0x8d2e268b, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=reed_solomon";


MODULE_INFO(srcversion, "F587C34C963D93781BFB82A");
