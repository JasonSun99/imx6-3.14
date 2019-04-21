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
	{ 0xed4f5879, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1ebeaa82, __VMLINUX_SYMBOL_STR(fw_send_request) },
	{ 0x1fa81aea, __VMLINUX_SYMBOL_STR(snd_card_create) },
	{ 0x7e431b14, __VMLINUX_SYMBOL_STR(fw_csr_string) },
	{ 0x2acb4562, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0xbbf74668, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0xa017e687, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0xa2e69ff3, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x554408fa, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xef6d5e27, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa9755347, __VMLINUX_SYMBOL_STR(fw_core_add_address_handler) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x691d1e61, __VMLINUX_SYMBOL_STR(fw_core_remove_address_handler) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x84b2b9ba, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x5711edae, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x3f53ed89, __VMLINUX_SYMBOL_STR(snd_fw_transaction) },
	{ 0x98d16805, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x90863005, __VMLINUX_SYMBOL_STR(fw_high_memory_region) },
	{ 0x97fb1fd1, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x197a4516, __VMLINUX_SYMBOL_STR(fw_send_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core,snd-rawmidi,snd-firewire-lib";

MODULE_ALIAS("ieee1394:ven00001260mo00001000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001260mo00002000sp*ver*");

MODULE_INFO(srcversion, "CD77F0F3DDF2903E3D4C0E2");
