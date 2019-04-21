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
	{ 0x8102ed2f, __VMLINUX_SYMBOL_STR(snd_midi_event_reset_encode) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97ec1ff, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0x1a724fcc, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_ctl) },
	{ 0x4dbc92f, __VMLINUX_SYMBOL_STR(snd_device_free) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x9ec6ba8c, __VMLINUX_SYMBOL_STR(snd_seq_create_kernel_client) },
	{ 0xbbf74668, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1cdc0812, __VMLINUX_SYMBOL_STR(snd_midi_event_decode) },
	{ 0xa2e69ff3, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0xceed7f85, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0xb11ba32d, __VMLINUX_SYMBOL_STR(snd_midi_event_new) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3fbdbf50, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_peek) },
	{ 0xfec2bcd0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xea0e5748, __VMLINUX_SYMBOL_STR(snd_midi_event_free) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf15ffd06, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_ack) },
	{ 0xb5c00014, __VMLINUX_SYMBOL_STR(_raw_write_lock_irq) },
	{ 0xe934da1d, __VMLINUX_SYMBOL_STR(snd_seq_dump_var_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x127b30fb, __VMLINUX_SYMBOL_STR(snd_midi_event_encode) },
	{ 0x3fb4d161, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_dispatch) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6bb71038, __VMLINUX_SYMBOL_STR(snd_seq_delete_kernel_client) },
	{ 0x97fb1fd1, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0x7b657827, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi";


MODULE_INFO(srcversion, "2AF5DCF4B58EA556901F4E9");
