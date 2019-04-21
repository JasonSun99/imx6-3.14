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
	{ 0x1fa81aea, __VMLINUX_SYMBOL_STR(snd_card_create) },
	{ 0xf3cf3836, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_msbits) },
	{ 0xed913158, __VMLINUX_SYMBOL_STR(amdtp_out_stream_init) },
	{ 0x2acb4562, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa017e687, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0xb2536ffc, __VMLINUX_SYMBOL_STR(amdtp_out_stream_destroy) },
	{ 0x956c1200, __VMLINUX_SYMBOL_STR(amdtp_out_stream_pcm_pointer) },
	{ 0x25d1c94a, __VMLINUX_SYMBOL_STR(cmp_connection_destroy) },
	{ 0xcf67c53a, __VMLINUX_SYMBOL_STR(fcp_avc_transaction) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa50887f2, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0xee406cb9, __VMLINUX_SYMBOL_STR(cmp_connection_establish) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x63ea9140, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x554408fa, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xef6d5e27, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xbdf26a1c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf673090d, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x94098ff8, __VMLINUX_SYMBOL_STR(snd_interval_list) },
	{ 0x4c074ab7, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0xf6d7f0ed, __VMLINUX_SYMBOL_STR(amdtp_out_stream_set_parameters) },
	{ 0x3adabf61, __VMLINUX_SYMBOL_STR(cmp_connection_update) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3010e3dd, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0xce91899a, __VMLINUX_SYMBOL_STR(amdtp_out_stream_pcm_abort) },
	{ 0xbc871531, __VMLINUX_SYMBOL_STR(amdtp_out_stream_get_max_payload) },
	{ 0x57f1623f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x66b31edf, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0x2533e214, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x89acf47b, __VMLINUX_SYMBOL_STR(amdtp_out_stream_pcm_prepare) },
	{ 0x6703f64a, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd364690b, __VMLINUX_SYMBOL_STR(fcp_bus_reset) },
	{ 0x430794d5, __VMLINUX_SYMBOL_STR(cmp_connection_break) },
	{ 0xd7abfc6d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xa44d7c91, __VMLINUX_SYMBOL_STR(amdtp_out_stream_update) },
	{ 0x2c408300, __VMLINUX_SYMBOL_STR(cmp_connection_init) },
	{ 0x27c815c8, __VMLINUX_SYMBOL_STR(amdtp_out_stream_stop) },
	{ 0x84b2b9ba, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x5711edae, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x97c959a1, __VMLINUX_SYMBOL_STR(snd_pcm_limit_hw_rates) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x21d31616, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x5a72d48e, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x79a8a914, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x3f53ed89, __VMLINUX_SYMBOL_STR(snd_fw_transaction) },
	{ 0x36a4e21, __VMLINUX_SYMBOL_STR(amdtp_out_stream_set_pcm_format) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x93252e80, __VMLINUX_SYMBOL_STR(amdtp_out_stream_start) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-firewire-lib,firewire-core";

MODULE_ALIAS("ieee1394:ven00001292mo0000F970sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven0000D04Bmo0000F970sp0000A02Dver00010001*");

MODULE_INFO(srcversion, "B74C39A943A974F87CB3F2E");
