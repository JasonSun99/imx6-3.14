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
	{ 0x63711f34, __VMLINUX_SYMBOL_STR(saa7134_ts_unregister) },
	{ 0x9a582284, __VMLINUX_SYMBOL_STR(saa7134_ts_register) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x8e81673, __VMLINUX_SYMBOL_STR(saa7134_ts_qops) },
	{ 0x4e83446, __VMLINUX_SYMBOL_STR(saa7134_tuner_callback) },
	{ 0x367888c, __VMLINUX_SYMBOL_STR(videobuf_dvb_dealloc_frontends) },
	{ 0x8eb01b1c, __VMLINUX_SYMBOL_STR(videobuf_dvb_register_bus) },
	{ 0x58c26f90, __VMLINUX_SYMBOL_STR(videobuf_queue_sg_init) },
	{ 0x5b34c771, __VMLINUX_SYMBOL_STR(videobuf_dvb_alloc_frontend) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4570c970, __VMLINUX_SYMBOL_STR(saa7134_set_gpio) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{        0, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9fa281fa, __VMLINUX_SYMBOL_STR(videobuf_dvb_unregister_bus) },
	{ 0x37b6ac20, __VMLINUX_SYMBOL_STR(videobuf_dvb_get_frontend) },
	{ 0xa600413d, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7134,videobuf-dvb,videobuf-dma-sg";


MODULE_INFO(srcversion, "29A7A07E2267B79311B653A");
