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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xadf42bd5, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x38abc6b0, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x1fa81aea, __VMLINUX_SYMBOL_STR(snd_card_create) },
	{ 0xf3cf3836, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_msbits) },
	{ 0xe1ccb32, __VMLINUX_SYMBOL_STR(snd_opl3_hwdep_new) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x670db4e2, __VMLINUX_SYMBOL_STR(snd_mpu401_uart_new) },
	{ 0x7b15c2ec, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9e913c1, __VMLINUX_SYMBOL_STR(snd_pcm_alt_chmaps) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa017e687, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x6fda7794, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc0fec227, __VMLINUX_SYMBOL_STR(snd_mpu401_uart_interrupt) },
	{ 0x59d8223a, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xd4a2266b, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0xf24e21b4, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xa50887f2, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x63ea9140, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x7073ecca, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x64ae8f52, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xd1157735, __VMLINUX_SYMBOL_STR(release_and_free_resource) },
	{ 0xf673090d, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x1603a6d6, __VMLINUX_SYMBOL_STR(__gameport_register_port) },
	{ 0x3145216f, __VMLINUX_SYMBOL_STR(pci_dev_present) },
	{ 0x4c074ab7, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0xe4a6f56, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2533e214, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xb186d2c7, __VMLINUX_SYMBOL_STR(gameport_unregister_port) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe8321963, __VMLINUX_SYMBOL_STR(snd_ctl_find_id) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x6024c89f, __VMLINUX_SYMBOL_STR(snd_opl3_create) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf916cc7e, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe3d6d6a9, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x6ebc5149, __VMLINUX_SYMBOL_STR(param_ops_long) },
	{ 0xd7abfc6d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xbb6afd9, __VMLINUX_SYMBOL_STR(snd_card_proc_new) },
	{ 0x923e6e0, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x84b2b9ba, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x5711edae, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xae8effea, __VMLINUX_SYMBOL_STR(snd_pcm_add_chmap_ctls) },
	{ 0x21d31616, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x79a8a914, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x9ea6c89a, __VMLINUX_SYMBOL_STR(gameport_set_phys) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x341a3841, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-opl3-lib,snd-mpu401-uart,gameport";

MODULE_ALIAS("pci:v000013F6d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00000111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00000112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00000111sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "836EC4CD689543D2456D5BE");
