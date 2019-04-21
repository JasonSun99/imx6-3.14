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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xaa13d05, __VMLINUX_SYMBOL_STR(__raw_readsw) },
	{ 0xce3371b1, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x19088f8a, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0xe6c3ebb0, __VMLINUX_SYMBOL_STR(__raw_writesw) },
	{ 0x263608bc, __VMLINUX_SYMBOL_STR(lbs_stop_card) },
	{ 0xbad5c73e, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x32d3aa6d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xb367aa66, __VMLINUX_SYMBOL_STR(lbs_start_card) },
	{ 0xfc39e32f, __VMLINUX_SYMBOL_STR(ioport_unmap) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x56ead6a1, __VMLINUX_SYMBOL_STR(lbs_queue_event) },
	{ 0xaa9f9a7c, __VMLINUX_SYMBOL_STR(lbs_get_firmware_async) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb4b4bb34, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x22adc267, __VMLINUX_SYMBOL_STR(lbs_remove_card) },
	{ 0x996fb3d1, __VMLINUX_SYMBOL_STR(lbs_process_rxed_packet) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa804f642, __VMLINUX_SYMBOL_STR(lbs_host_to_card_done) },
	{ 0x594bf15b, __VMLINUX_SYMBOL_STR(ioport_map) },
	{ 0x93d8f580, __VMLINUX_SYMBOL_STR(lbs_add_card) },
	{ 0x62bd7e64, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xebee08d4, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1c0b4f81, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x34c43795, __VMLINUX_SYMBOL_STR(lbs_notify_command_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas";

MODULE_ALIAS("pcmcia:m02DBc8103f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02DBc6064f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02DFc8103f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "4A9CBB1DC866D156AED4A40");
