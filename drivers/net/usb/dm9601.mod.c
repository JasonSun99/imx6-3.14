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
	{ 0x50fa185d, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x56ad4ff8, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xe88bcec, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xbf432278, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x3b5d1cc6, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0xf48d132e, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xf5fca386, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x5da18b17, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xfc3bef6b, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x801dea79, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x8fc7a455, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0xb9d5ccb7, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x5c76f7f, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x88160e87, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x70a57df0, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xe35cae9e, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x711e5d54, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x62bd7e64, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x913c3601, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x5d7d8f69, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0xf158a186, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x379eb525, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x679376aa, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x3059259, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x13d06dff, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0xf67952ec, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x37917732, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x5ae18634, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v07AAp9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p6688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0268d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A47p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p8101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p1269d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8B2420E93E78CEA9AB0E3DA");
