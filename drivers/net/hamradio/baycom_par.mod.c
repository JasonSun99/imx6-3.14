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
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xf1824100, __VMLINUX_SYMBOL_STR(hdlcdrv_unregister) },
	{ 0x9a0d8181, __VMLINUX_SYMBOL_STR(hdlcdrv_register) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xb94aaf34, __VMLINUX_SYMBOL_STR(parport_release) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa4904411, __VMLINUX_SYMBOL_STR(hdlcdrv_arbitrate) },
	{ 0xca5c0f49, __VMLINUX_SYMBOL_STR(hdlcdrv_receiver) },
	{ 0xef3f2247, __VMLINUX_SYMBOL_STR(hdlcdrv_transmitter) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x5475bee9, __VMLINUX_SYMBOL_STR(parport_unregister_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf7479784, __VMLINUX_SYMBOL_STR(parport_claim) },
	{ 0x80de860f, __VMLINUX_SYMBOL_STR(parport_put_port) },
	{ 0x37a167c4, __VMLINUX_SYMBOL_STR(parport_register_device) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2788678f, __VMLINUX_SYMBOL_STR(parport_find_base) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hdlcdrv,parport";


MODULE_INFO(srcversion, "3B40C097655F78F0E1E5965");
