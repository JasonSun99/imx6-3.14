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
	{ 0xebee08d4, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0x19088f8a, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0xbad5c73e, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x40c359db, __VMLINUX_SYMBOL_STR(hisax_init_pcmcia) },
	{ 0xce3371b1, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0xb4b4bb34, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1c0b4f81, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xfc27303b, __VMLINUX_SYMBOL_STR(HiSax_closecard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hisax";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbF3612E1Dpc6B95C78Apd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbE4E9BC12pc397B7E90pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbE4E9BC12pc2E5C7FCEpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbE4E9BC12pc8DB143FEpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbE4E9BC12pcB391AB4Cpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD79E0B84pb21D083AEpc*pd*");

MODULE_INFO(srcversion, "697A7C1B8C7F55C7074F64C");
