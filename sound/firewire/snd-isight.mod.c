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
	{ 0x8d8fb13e, __VMLINUX_SYMBOL_STR(fw_iso_resources_update) },
	{ 0xed4f5879, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x4b4742ae, __VMLINUX_SYMBOL_STR(iso_packets_buffer_init) },
	{ 0x38abc6b0, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x1fa81aea, __VMLINUX_SYMBOL_STR(snd_card_create) },
	{ 0x9b2f1771, __VMLINUX_SYMBOL_STR(fw_iso_resources_init) },
	{ 0x2acb4562, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0x65c9438b, __VMLINUX_SYMBOL_STR(fw_csr_iterator_init) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa017e687, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0xced41dd6, __VMLINUX_SYMBOL_STR(snd_pcm_link_rwlock) },
	{ 0x7516a156, __VMLINUX_SYMBOL_STR(fw_iso_context_start) },
	{ 0xb14233bd, __VMLINUX_SYMBOL_STR(fw_iso_context_queue_flush) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x554408fa, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xef6d5e27, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xbdf26a1c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0xada107fc, __VMLINUX_SYMBOL_STR(iso_packets_buffer_destroy) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf673090d, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x4c074ab7, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x685943a9, __VMLINUX_SYMBOL_STR(fw_iso_resources_destroy) },
	{ 0xa99b31d0, __VMLINUX_SYMBOL_STR(fw_iso_context_queue) },
	{ 0xe1f0ab3a, __VMLINUX_SYMBOL_STR(_raw_read_lock_irqsave) },
	{ 0x57f1623f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x66b31edf, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0x2533e214, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x9cba3c37, __VMLINUX_SYMBOL_STR(_raw_read_unlock_irqrestore) },
	{ 0xfac397ea, __VMLINUX_SYMBOL_STR(fw_iso_resources_allocate) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x6703f64a, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x80753441, __VMLINUX_SYMBOL_STR(fw_iso_context_stop) },
	{ 0xf83fd5e9, __VMLINUX_SYMBOL_STR(fw_iso_context_create) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa000e177, __VMLINUX_SYMBOL_STR(snd_pcm_stop) },
	{ 0x84b2b9ba, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x5711edae, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x21d31616, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x5a72d48e, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x79a8a914, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x3f53ed89, __VMLINUX_SYMBOL_STR(snd_fw_transaction) },
	{ 0x7c2de31, __VMLINUX_SYMBOL_STR(fw_iso_resources_free) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xcfe7b60a, __VMLINUX_SYMBOL_STR(fw_iso_context_destroy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core,snd-firewire-lib";

MODULE_ALIAS("ieee1394:ven*mo*sp00000A27ver00000010*");

MODULE_INFO(srcversion, "8732910FF7CB2707A3187A5");
