#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc2ca9c8b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1ca42c10, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x6e43336d, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xf6563eda, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x341369a3, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc4d2f2f7, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x5e7f1231, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x64648430, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9e8261e3, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xec73ff5c, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf57a0b7f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x11d51648, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0xf218d25a, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x30def92b, __VMLINUX_SYMBOL_STR(videobuf_read_start) },
	{ 0xfc49ef27, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x1031f1dc, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x88faae87, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xd32307c1, __VMLINUX_SYMBOL_STR(videobuf_waiton) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x75ad5173, __VMLINUX_SYMBOL_STR(videobuf_queue_to_vaddr) },
	{ 0x635e1a98, __VMLINUX_SYMBOL_STR(videobuf_read_stop) },
	{ 0xc299480b, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4C862AF13411F103F8384E0");
