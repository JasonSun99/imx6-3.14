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
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xd5136bc1, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x7876b163, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xc7c260dd, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x7e23734c, __VMLINUX_SYMBOL_STR(saa7134_s_frequency) },
	{ 0xca7aaf37, __VMLINUX_SYMBOL_STR(saa7134_g_frequency) },
	{ 0xdcc80f82, __VMLINUX_SYMBOL_STR(saa7134_s_tuner) },
	{ 0x94f84ebf, __VMLINUX_SYMBOL_STR(saa7134_g_tuner) },
	{ 0x2d5016a0, __VMLINUX_SYMBOL_STR(saa7134_s_input) },
	{ 0xc4116bdf, __VMLINUX_SYMBOL_STR(saa7134_g_input) },
	{ 0xc6d360fe, __VMLINUX_SYMBOL_STR(saa7134_enum_input) },
	{ 0x450f7629, __VMLINUX_SYMBOL_STR(saa7134_s_std) },
	{ 0x4aeb8492, __VMLINUX_SYMBOL_STR(saa7134_g_std) },
	{ 0xa45e6765, __VMLINUX_SYMBOL_STR(saa7134_streamoff) },
	{ 0xc1fe6549, __VMLINUX_SYMBOL_STR(saa7134_streamon) },
	{ 0x3ea97d4e, __VMLINUX_SYMBOL_STR(saa7134_dqbuf) },
	{ 0x9fb8ece9, __VMLINUX_SYMBOL_STR(saa7134_qbuf) },
	{ 0xd5d48eb9, __VMLINUX_SYMBOL_STR(saa7134_querybuf) },
	{ 0x3f14fcc7, __VMLINUX_SYMBOL_STR(saa7134_reqbufs) },
	{ 0x5ad7387d, __VMLINUX_SYMBOL_STR(saa7134_querycap) },
	{ 0x21f21215, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x63711f34, __VMLINUX_SYMBOL_STR(saa7134_ts_unregister) },
	{ 0x9a582284, __VMLINUX_SYMBOL_STR(saa7134_ts_register) },
	{ 0xb0cf40d1, __VMLINUX_SYMBOL_STR(videobuf_read_stream) },
	{ 0xb838e249, __VMLINUX_SYMBOL_STR(videobuf_mmap_free) },
	{ 0xacaa94cd, __VMLINUX_SYMBOL_STR(videobuf_stop) },
	{ 0x37f4ce1c, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0xf68d7144, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8e81673, __VMLINUX_SYMBOL_STR(saa7134_ts_qops) },
	{ 0x73039031, __VMLINUX_SYMBOL_STR(saa7134_boards) },
	{ 0xd8c30bc1, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x58c26f90, __VMLINUX_SYMBOL_STR(videobuf_queue_sg_init) },
	{ 0x23560840, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf96bae10, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0x63697bf6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4c40e9ba, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x9b195a14, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0x7544e421, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0xf232ef89, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5fb575d4, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0x80b358bc, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x68257b41, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x46b33c55, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xb0d08137, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7134,videobuf-dma-sg";


MODULE_INFO(srcversion, "DBE5FBDD759FB3CE83AB4A1");
