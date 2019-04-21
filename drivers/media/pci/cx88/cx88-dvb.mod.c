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
	{ 0x20171061, __VMLINUX_SYMBOL_STR(cx8802_unregister_driver) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7d407415, __VMLINUX_SYMBOL_STR(cx8802_register_driver) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6141c8c5, __VMLINUX_SYMBOL_STR(cx88_tuner_callback) },
	{ 0x8eb01b1c, __VMLINUX_SYMBOL_STR(videobuf_dvb_register_bus) },
	{ 0x58c26f90, __VMLINUX_SYMBOL_STR(videobuf_queue_sg_init) },
	{ 0x367888c, __VMLINUX_SYMBOL_STR(videobuf_dvb_dealloc_frontends) },
	{ 0x5b34c771, __VMLINUX_SYMBOL_STR(videobuf_dvb_alloc_frontend) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xce3cd2a, __VMLINUX_SYMBOL_STR(vp3054_i2c_probe) },
	{ 0x341369a3, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x64648430, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{        0, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x548602b2, __VMLINUX_SYMBOL_STR(cx88_setup_xc3028) },
	{ 0xa600413d, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa03f2f45, __VMLINUX_SYMBOL_STR(cx8802_get_driver) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x26ec7558, __VMLINUX_SYMBOL_STR(videobuf_dvb_find_frontend) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x12df2ab4, __VMLINUX_SYMBOL_STR(cx8802_buf_prepare) },
	{ 0x5508fc09, __VMLINUX_SYMBOL_STR(cx8802_buf_queue) },
	{ 0x4c38a5e6, __VMLINUX_SYMBOL_STR(cx88_free_buffer) },
	{ 0x37b6ac20, __VMLINUX_SYMBOL_STR(videobuf_dvb_get_frontend) },
	{ 0x32a9fd3b, __VMLINUX_SYMBOL_STR(vp3054_i2c_remove) },
	{ 0x9fa281fa, __VMLINUX_SYMBOL_STR(videobuf_dvb_unregister_bus) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx8802,cx88xx,videobuf-dvb,videobuf-dma-sg,cx88-vp3054-i2c";


MODULE_INFO(srcversion, "50A182E203DA1495057BFB9");
