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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x46e7e49d, __VMLINUX_SYMBOL_STR(ipu_get_soc) },
	{ 0x484fbf21, __VMLINUX_SYMBOL_STR(ipu_check_task) },
	{ 0xc755e3aa, __VMLINUX_SYMBOL_STR(ipu_queue_task) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x58b927ed, __VMLINUX_SYMBOL_STR(ipu_disp_set_window_pos) },
	{ 0xc631580a, __VMLINUX_SYMBOL_STR(console_unlock) },
	{ 0x5ee70011, __VMLINUX_SYMBOL_STR(ipu_init_channel_buffer) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9ccd80a7, __VMLINUX_SYMBOL_STR(ipu_enable_channel) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc69680be, __VMLINUX_SYMBOL_STR(ipu_disable_csi) },
	{ 0xfbaaf01e, __VMLINUX_SYMBOL_STR(console_lock) },
	{ 0xa760a605, __VMLINUX_SYMBOL_STR(ipu_clear_irq) },
	{ 0x849a9318, __VMLINUX_SYMBOL_STR(ipu_update_channel_buffer) },
	{ 0xa369696, __VMLINUX_SYMBOL_STR(ipu_channel_request) },
	{ 0x715d4d9a, __VMLINUX_SYMBOL_STR(ipu_free_irq) },
	{ 0x1ab58a53, __VMLINUX_SYMBOL_STR(ipu_channel_disable) },
	{ 0xa7f161ea, __VMLINUX_SYMBOL_STR(mipi_csi2_pixelclk_enable) },
	{ 0x7347c17e, __VMLINUX_SYMBOL_STR(registered_fb) },
	{ 0xfc76ba0, __VMLINUX_SYMBOL_STR(fb_set_var) },
	{ 0x6db73f84, __VMLINUX_SYMBOL_STR(ipu_csi_get_sensor_protocol) },
	{ 0x688922ce, __VMLINUX_SYMBOL_STR(mipi_csi2_get_status) },
	{ 0xbaa28923, __VMLINUX_SYMBOL_STR(mipi_csi2_get_info) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1ffc532e, __VMLINUX_SYMBOL_STR(ipu_enable_csi) },
	{ 0x2b9d64ff, __VMLINUX_SYMBOL_STR(mipi_csi2_pixelclk_disable) },
	{ 0xb4fe225d, __VMLINUX_SYMBOL_STR(ipu_select_buffer) },
	{ 0xde4e4647, __VMLINUX_SYMBOL_STR(ipu_channel_free) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9fd60c37, __VMLINUX_SYMBOL_STR(ipu_request_irq) },
	{ 0x6c61ce70, __VMLINUX_SYMBOL_STR(num_registered_fb) },
	{ 0x1fa50c98, __VMLINUX_SYMBOL_STR(fb_blank) },
	{ 0xa6419657, __VMLINUX_SYMBOL_STR(mipi_csi2_get_datatype) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CD08AADE7BFB864F4CA6405");
