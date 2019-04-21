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
	{ 0xcff6fee3, __VMLINUX_SYMBOL_STR(dib7000m_pid_filter_ctrl) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa7311d9b, __VMLINUX_SYMBOL_STR(dib7000p_ctrl_timf) },
	{ 0x1470dc70, __VMLINUX_SYMBOL_STR(dib8000_pid_filter) },
	{ 0x193520bc, __VMLINUX_SYMBOL_STR(dib8000_get_i2c_master) },
	{ 0x4f21a3b6, __VMLINUX_SYMBOL_STR(dib8000_pwm_agc_reset) },
	{ 0x1ac2d16d, __VMLINUX_SYMBOL_STR(dib7000p_pid_filter_ctrl) },
	{ 0xb820f6e6, __VMLINUX_SYMBOL_STR(dibx000_i2c_set_speed) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf2a8d685, __VMLINUX_SYMBOL_STR(dib8000_get_slave_frontend) },
	{ 0x8dd1091a, __VMLINUX_SYMBOL_STR(dib7000p_set_agc1_min) },
	{ 0x2d9c2097, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0x89413ad, __VMLINUX_SYMBOL_STR(dib8000_i2c_enumeration) },
	{ 0x52a0fc67, __VMLINUX_SYMBOL_STR(dib0090_gain_control) },
	{ 0x61e31887, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0xa600413d, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x6861c45, __VMLINUX_SYMBOL_STR(dib8096p_tuner_sleep) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x8d46812b, __VMLINUX_SYMBOL_STR(dib8000_pid_filter_ctrl) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xab6f6579, __VMLINUX_SYMBOL_STR(dib0070_wbd_offset) },
	{ 0xbf935332, __VMLINUX_SYMBOL_STR(dib0090_get_wbd_target) },
	{ 0x14aa0632, __VMLINUX_SYMBOL_STR(dib0090_dcc_freq) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x15d7f549, __VMLINUX_SYMBOL_STR(dib3000mc_get_tuner_i2c_master) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x5ab2090c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6f0575d3, __VMLINUX_SYMBOL_STR(dib7000p_pid_filter) },
	{ 0x4836788, __VMLINUX_SYMBOL_STR(dib8000_set_wbd_ref) },
	{ 0x99c6124b, __VMLINUX_SYMBOL_STR(dib7090_slave_reset) },
	{ 0xd1aa7a49, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0xfa1c8fb5, __VMLINUX_SYMBOL_STR(dib0090_get_current_gain) },
	{ 0xa509eab8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x459bdb43, __VMLINUX_SYMBOL_STR(dib8000_set_gpio) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xf345c38c, __VMLINUX_SYMBOL_STR(dib8000_update_pll) },
	{ 0x9280536d, __VMLINUX_SYMBOL_STR(dib8096p_get_i2c_tuner) },
	{ 0xf7fa9bfc, __VMLINUX_SYMBOL_STR(dib8000_get_adc_power) },
	{ 0xbbfa9ce9, __VMLINUX_SYMBOL_STR(dib7000p_set_wbd_ref) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x26a91c95, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xebefcd6b, __VMLINUX_SYMBOL_STR(dib7000p_i2c_enumeration) },
	{ 0xee5118e3, __VMLINUX_SYMBOL_STR(dib8000_ctrl_timf) },
	{ 0xf950d723, __VMLINUX_SYMBOL_STR(dib7000pc_detection) },
	{ 0xfb8bf239, __VMLINUX_SYMBOL_STR(dib3000mc_i2c_enumeration) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfc252083, __VMLINUX_SYMBOL_STR(dib7000m_pid_filter) },
	{ 0xe7f702fb, __VMLINUX_SYMBOL_STR(dib7000p_update_pll) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xebaae102, __VMLINUX_SYMBOL_STR(dib0090_pwm_gain_reset) },
	{ 0x747c2d7c, __VMLINUX_SYMBOL_STR(dib7090_get_adc_power) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xe7a49da7, __VMLINUX_SYMBOL_STR(dib7090_tuner_sleep) },
	{ 0xf45aa13d, __VMLINUX_SYMBOL_STR(dib8000_set_slave_frontend) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x60ac1da9, __VMLINUX_SYMBOL_STR(dib8000_set_tune_state) },
	{ 0xf600342, __VMLINUX_SYMBOL_STR(dib0090_set_dc_servo) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{        0, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xfbdf32ae, __VMLINUX_SYMBOL_STR(dvb_usb_get_hexline) },
	{ 0xc9d3c5de, __VMLINUX_SYMBOL_STR(dib7000p_get_i2c_master) },
	{ 0xb889d741, __VMLINUX_SYMBOL_STR(dib0090_set_tune_state) },
	{ 0x688a47c1, __VMLINUX_SYMBOL_STR(dib0070_ctrl_agc_filter) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xf4576899, __VMLINUX_SYMBOL_STR(dib7090_get_i2c_tuner) },
	{ 0x5b2723f3, __VMLINUX_SYMBOL_STR(dib7000m_get_i2c_master) },
	{ 0xf20539a2, __VMLINUX_SYMBOL_STR(dib0090_get_tune_state) },
	{ 0x61e230cb, __VMLINUX_SYMBOL_STR(dib7000p_set_gpio) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dib7000m,dib7000p,dib8000,dibx000_common,dvb-usb,dib0090,dib0070,dib3000mc";

MODULE_ALIAS("usb:v10B8p1E14d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1E78d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9941d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA807d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp1E78d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1584p6003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApB808d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p022Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp005Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9580d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1EF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1EBCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0228d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1EBEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0229d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp1E80d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApB568d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p7001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p171Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p173Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p022Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0236d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p1EDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p7002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p1F08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1736d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p023Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p023Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0081d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1415p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p2EDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0871d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p60F6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p1EFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p1E8Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0245d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1E80d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1F98d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1F90d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d3F00dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d3[0-9A-E]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d[0-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1E59p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0245d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1FA0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p2383d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1FA8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p2384d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1BB2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1BB4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14F7p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1660p1921d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p023Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p023Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1E6Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1F9Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B8FCA02442E495555F5B020");
