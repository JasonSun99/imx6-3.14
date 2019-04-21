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
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xe54da67d, __VMLINUX_SYMBOL_STR(cx231xx_unregister_extension) },
	{ 0xac375c6b, __VMLINUX_SYMBOL_STR(cx231xx_register_extension) },
	{ 0x17ea7c7, __VMLINUX_SYMBOL_STR(cx231xx_tuner_callback) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{        0, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xf218d25a, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xc299480b, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x1ca42c10, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xf6563eda, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x88faae87, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x8c1354e8, __VMLINUX_SYMBOL_STR(cx231xx_demod_reset) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6e43336d, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x64648430, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x341369a3, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xfc49ef27, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0xec73ff5c, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xc4d2f2f7, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0xca783559, __VMLINUX_SYMBOL_STR(cx231xx_init_bulk) },
	{ 0xdc4e6d01, __VMLINUX_SYMBOL_STR(cx231xx_init_isoc) },
	{ 0x3df5f242, __VMLINUX_SYMBOL_STR(cx231xx_set_alt_setting) },
	{ 0xb11c3569, __VMLINUX_SYMBOL_STR(cx231xx_enable_i2c_port_3) },
	{ 0x9b48daad, __VMLINUX_SYMBOL_STR(cx231xx_uninit_isoc) },
	{ 0xb14dc254, __VMLINUX_SYMBOL_STR(cx231xx_uninit_bulk) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3c80cf5, __VMLINUX_SYMBOL_STR(cx231xx_set_mode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x11d51648, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx";


MODULE_INFO(srcversion, "8C16B86D3E2628CE5CEE44F");
