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
	{ 0xd5136bc1, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x7876b163, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x21f21215, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x20171061, __VMLINUX_SYMBOL_STR(cx8802_unregister_driver) },
	{ 0x7d407415, __VMLINUX_SYMBOL_STR(cx8802_register_driver) },
	{ 0x23560840, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xc0c1c8f5, __VMLINUX_SYMBOL_STR(cx88_vdev_init) },
	{ 0xf96bae10, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0x9c41cac9, __VMLINUX_SYMBOL_STR(cx2341x_handler_init) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5fb575d4, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0x58c26f90, __VMLINUX_SYMBOL_STR(videobuf_queue_sg_init) },
	{ 0x80b358bc, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x68257b41, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x82a5c682, __VMLINUX_SYMBOL_STR(cx88_set_freq) },
	{ 0x32e8f353, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x68436446, __VMLINUX_SYMBOL_STR(cx2341x_handler_setup) },
	{ 0x6051455a, __VMLINUX_SYMBOL_STR(cx2341x_handler_set_50hz) },
	{ 0xb0cf40d1, __VMLINUX_SYMBOL_STR(videobuf_read_stream) },
	{ 0x9b195a14, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0xd943754, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x2f300f01, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb8bd7b6c, __VMLINUX_SYMBOL_STR(cx88_set_scale) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa03f2f45, __VMLINUX_SYMBOL_STR(cx8802_get_driver) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x37f4ce1c, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0xf68d7144, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0xb838e249, __VMLINUX_SYMBOL_STR(videobuf_mmap_free) },
	{ 0xacaa94cd, __VMLINUX_SYMBOL_STR(videobuf_stop) },
	{ 0xc0b7be68, __VMLINUX_SYMBOL_STR(cx8802_cancel_buffers) },
	{ 0x654803aa, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
	{ 0xc32af91c, __VMLINUX_SYMBOL_STR(cx2341x_handler_set_busy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xb0d08137, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x46b33c55, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xd8c30bc1, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xf232ef89, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0x12df2ab4, __VMLINUX_SYMBOL_STR(cx8802_buf_prepare) },
	{ 0x5508fc09, __VMLINUX_SYMBOL_STR(cx8802_buf_queue) },
	{ 0x4c38a5e6, __VMLINUX_SYMBOL_STR(cx88_free_buffer) },
	{ 0x31d976a, __VMLINUX_SYMBOL_STR(cx88_querycap) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x8d7f0365, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0x23e7cac6, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x48e1dfd3, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x2479c730, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0xd0b34c4e, __VMLINUX_SYMBOL_STR(cx88_set_tvnorm) },
	{ 0x130dd2d6, __VMLINUX_SYMBOL_STR(cx88_enum_input) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x83b2a4ee, __VMLINUX_SYMBOL_STR(cx88_video_mux) },
	{ 0x898c486c, __VMLINUX_SYMBOL_STR(cx88_newstation) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xac11c143, __VMLINUX_SYMBOL_STR(cx88_get_stereo) },
	{ 0x7476aca, __VMLINUX_SYMBOL_STR(cx88_set_stereo) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xef630915, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_log_status) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx8802,cx88xx,cx2341x,videobuf-dma-sg,cx8800";


MODULE_INFO(srcversion, "3E5853DB1A094BF4C3ED1BE");
