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
	{ 0xe88bcec, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xbf432278, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x56ad4ff8, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x50fa185d, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x17837b2a, __VMLINUX_SYMBOL_STR(usb_cdc_wdm_register) },
	{ 0x15059a87, __VMLINUX_SYMBOL_STR(cdc_ncm_bind_common) },
	{ 0x5939ae89, __VMLINUX_SYMBOL_STR(cdc_ncm_select_altsetting) },
	{ 0x2b420eef, __VMLINUX_SYMBOL_STR(cdc_ncm_unbind) },
	{ 0x909bef8, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x88625f54, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x32e5dee2, __VMLINUX_SYMBOL_STR(in6_dev_finish_destroy) },
	{ 0xd4b92aed, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep) },
	{ 0xd06e86a3, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xefbfe9e5, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x819ee54, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xe1bf5511, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_ndp16) },
	{ 0xdabf1078, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_nth16) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x62bd7e64, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xe3282455, __VMLINUX_SYMBOL_STR(cdc_ncm_fill_tx_frame) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc-wdm,cdc_ncm";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "C22B5EF3088E18442180E3A");
