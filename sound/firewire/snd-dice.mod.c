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
	{ 0x16e91e21, __VMLINUX_SYMBOL_STR(fw_csr_iterator_next) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8d8fb13e, __VMLINUX_SYMBOL_STR(fw_iso_resources_update) },
	{ 0xed4f5879, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x2140a2e1, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x1fa81aea, __VMLINUX_SYMBOL_STR(snd_card_create) },
	{ 0x7e431b14, __VMLINUX_SYMBOL_STR(fw_csr_string) },
	{ 0xf3cf3836, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_msbits) },
	{ 0x9b2f1771, __VMLINUX_SYMBOL_STR(fw_iso_resources_init) },
	{ 0xed913158, __VMLINUX_SYMBOL_STR(amdtp_out_stream_init) },
	{ 0x2acb4562, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0x65c9438b, __VMLINUX_SYMBOL_STR(fw_csr_iterator_init) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa017e687, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0xb2536ffc, __VMLINUX_SYMBOL_STR(amdtp_out_stream_destroy) },
	{ 0x956c1200, __VMLINUX_SYMBOL_STR(amdtp_out_stream_pcm_pointer) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb9638db4, __VMLINUX_SYMBOL_STR(snd_pcm_rate_to_rate_bit) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x554408fa, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xef6d5e27, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xbdf26a1c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x116083de, __VMLINUX_SYMBOL_STR(snd_hwdep_new) },
	{ 0xf673090d, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0xf6d7f0ed, __VMLINUX_SYMBOL_STR(amdtp_out_stream_set_parameters) },
	{ 0x685943a9, __VMLINUX_SYMBOL_STR(fw_iso_resources_destroy) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3010e3dd, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0xce91899a, __VMLINUX_SYMBOL_STR(amdtp_out_stream_pcm_abort) },
	{ 0xbc871531, __VMLINUX_SYMBOL_STR(amdtp_out_stream_get_max_payload) },
	{ 0x66b31edf, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x89acf47b, __VMLINUX_SYMBOL_STR(amdtp_out_stream_pcm_prepare) },
	{ 0xa9755347, __VMLINUX_SYMBOL_STR(fw_core_add_address_handler) },
	{ 0xfac397ea, __VMLINUX_SYMBOL_STR(fw_iso_resources_allocate) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x691d1e61, __VMLINUX_SYMBOL_STR(fw_core_remove_address_handler) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xd7abfc6d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xbb6afd9, __VMLINUX_SYMBOL_STR(snd_card_proc_new) },
	{ 0x27c815c8, __VMLINUX_SYMBOL_STR(amdtp_out_stream_stop) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x84b2b9ba, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5711edae, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x97c959a1, __VMLINUX_SYMBOL_STR(snd_pcm_limit_hw_rates) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x21d31616, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x5a72d48e, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x3f53ed89, __VMLINUX_SYMBOL_STR(snd_fw_transaction) },
	{ 0x36a4e21, __VMLINUX_SYMBOL_STR(amdtp_out_stream_set_pcm_format) },
	{ 0x7c2de31, __VMLINUX_SYMBOL_STR(fw_iso_resources_free) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x90863005, __VMLINUX_SYMBOL_STR(fw_high_memory_region) },
	{ 0x93252e80, __VMLINUX_SYMBOL_STR(amdtp_out_stream_start) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x197a4516, __VMLINUX_SYMBOL_STR(fw_send_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core,snd-firewire-lib";

MODULE_ALIAS("ieee1394:ven*mo*sp*ver00000001*");

MODULE_INFO(srcversion, "9F54943A292B8B1B2716C87");
