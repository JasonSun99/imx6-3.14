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
	{ 0x9ab19e5b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x64101e62, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x66b48a02, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x711e5d54, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x565b69d5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x970ab3e6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x53e1a149, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xecfac99d, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x5f8a2d78, __VMLINUX_SYMBOL_STR(usbnet_device_suggests_idle) },
	{ 0x16053804, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x819ee54, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x9325034e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xabdd25dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x5ae18634, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "07A97BE75F2F8E124A49096");
