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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb2c7f684, __VMLINUX_SYMBOL_STR(snd_midi_event_reset_decode) },
	{ 0x8102ed2f, __VMLINUX_SYMBOL_STR(snd_midi_event_reset_encode) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1a724fcc, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_ctl) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3b33943e, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_release) },
	{ 0x9ec6ba8c, __VMLINUX_SYMBOL_STR(snd_seq_create_kernel_client) },
	{ 0x86c666cd, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1cdc0812, __VMLINUX_SYMBOL_STR(snd_midi_event_decode) },
	{ 0x6315519a, __VMLINUX_SYMBOL_STR(snd_rawmidi_input_params) },
	{ 0xb11ba32d, __VMLINUX_SYMBOL_STR(snd_midi_event_new) },
	{ 0x7b8699eb, __VMLINUX_SYMBOL_STR(snd_seq_event_port_detach) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc622fb29, __VMLINUX_SYMBOL_STR(snd_seq_device_unregister_driver) },
	{ 0x43e52c8d, __VMLINUX_SYMBOL_STR(snd_rawmidi_drain_output) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xea0e5748, __VMLINUX_SYMBOL_STR(snd_midi_event_free) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc1ad23e9, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_write) },
	{ 0xe36fe775, __VMLINUX_SYMBOL_STR(snd_seq_device_register_driver) },
	{ 0xea3afa1c, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_read) },
	{ 0x3a57f235, __VMLINUX_SYMBOL_STR(snd_seq_autoload_unlock) },
	{ 0xe934da1d, __VMLINUX_SYMBOL_STR(snd_seq_dump_var_event) },
	{ 0xe1ba554, __VMLINUX_SYMBOL_STR(snd_rawmidi_output_params) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x127b30fb, __VMLINUX_SYMBOL_STR(snd_midi_event_encode) },
	{ 0x3fb4d161, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_dispatch) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0xb90668b2, __VMLINUX_SYMBOL_STR(snd_seq_autoload_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6bb71038, __VMLINUX_SYMBOL_STR(snd_seq_delete_kernel_client) },
	{ 0xf73ea2e3, __VMLINUX_SYMBOL_STR(snd_rawmidi_info_select) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi";


MODULE_INFO(srcversion, "52D5F778F08904B57E0F06F");