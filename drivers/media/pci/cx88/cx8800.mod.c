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
	{ 0xb838e249, __VMLINUX_SYMBOL_STR(videobuf_mmap_free) },
	{ 0x74cdf4dd, __VMLINUX_SYMBOL_STR(videobuf_to_dma) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd5136bc1, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x898c486c, __VMLINUX_SYMBOL_STR(cx88_newstation) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xf232ef89, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf2109e8b, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xd8c30bc1, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xbf360c82, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x409f2e9b, __VMLINUX_SYMBOL_STR(videobuf_queue_cancel) },
	{ 0x2f300f01, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0x23560840, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x4c38a5e6, __VMLINUX_SYMBOL_STR(cx88_free_buffer) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9d8dec2d, __VMLINUX_SYMBOL_STR(videobuf_iolock) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcd32f020, __VMLINUX_SYMBOL_STR(cx88_sram_channel_setup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5e7f1231, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf37240ee, __VMLINUX_SYMBOL_STR(cx88_sram_channel_dump) },
	{ 0x9d38077b, __VMLINUX_SYMBOL_STR(cx88_set_tvaudio) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x4216fc84, __VMLINUX_SYMBOL_STR(cx88_sram_channels) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe95d97ac, __VMLINUX_SYMBOL_STR(v4l2_ctrl_s_ctrl) },
	{ 0x21e8fe31, __VMLINUX_SYMBOL_STR(videobuf_read_one) },
	{ 0xf24e21b4, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf57a0b7f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x48e1dfd3, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0xb0d08137, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x80b358bc, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x7876b163, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x7476aca, __VMLINUX_SYMBOL_STR(cx88_set_stereo) },
	{ 0x23e7cac6, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb0cf40d1, __VMLINUX_SYMBOL_STR(videobuf_read_stream) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x58c26f90, __VMLINUX_SYMBOL_STR(videobuf_queue_sg_init) },
	{ 0x87dc2105, __VMLINUX_SYMBOL_STR(btcx_riscmem_free) },
	{ 0x1ae3289b, __VMLINUX_SYMBOL_STR(cx88_risc_buffer) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xacaa94cd, __VMLINUX_SYMBOL_STR(videobuf_stop) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0x29073954, __VMLINUX_SYMBOL_STR(cx88_ir_start) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x70365fe6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0xd0b34c4e, __VMLINUX_SYMBOL_STR(cx88_set_tvnorm) },
	{ 0x68257b41, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x96d56915, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x439b2865, __VMLINUX_SYMBOL_STR(cx88_ir_stop) },
	{ 0xac11c143, __VMLINUX_SYMBOL_STR(cx88_get_stereo) },
	{ 0x93416c02, __VMLINUX_SYMBOL_STR(cx88_core_get) },
	{ 0x1031f1dc, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdf051346, __VMLINUX_SYMBOL_STR(cx88_core_irq) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2479c730, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0x904b8696, __VMLINUX_SYMBOL_STR(cx88_audio_thread) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf916cc7e, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xa4b083ce, __VMLINUX_SYMBOL_STR(cx88_core_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xc6b97ac9, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xc0c1c8f5, __VMLINUX_SYMBOL_STR(cx88_vdev_init) },
	{ 0x8d7f0365, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0xcb996e04, __VMLINUX_SYMBOL_STR(cx88_shutdown) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x5fb575d4, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0xb8bd7b6c, __VMLINUX_SYMBOL_STR(cx88_set_scale) },
	{ 0xeaccf838, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev_board) },
	{ 0xf68d7144, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0xf96bae10, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7642ed3c, __VMLINUX_SYMBOL_STR(cx88_print_irqbits) },
	{ 0x86864dd0, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x7cbbe49a, __VMLINUX_SYMBOL_STR(cx88_risc_stopper) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xacae0b87, __VMLINUX_SYMBOL_STR(cx88_wakeup) },
	{ 0x7383352, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x21f21215, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x9b195a14, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0xd943754, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x293ec64b, __VMLINUX_SYMBOL_STR(cx88_reset) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x341a3841, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x37f4ce1c, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0x654803aa, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-dma-sg,cx88xx,btcx-risc";

MODULE_ALIAS("pci:v000014F1d00008800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "511B089F62BA0AC0BDCC305");
