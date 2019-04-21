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
	{ 0x71303db6, __VMLINUX_SYMBOL_STR(sdhci_pci_o2_resume) },
	{ 0x7edce3d8, __VMLINUX_SYMBOL_STR(sdhci_pci_o2_probe_slot) },
	{ 0xef9cdc6b, __VMLINUX_SYMBOL_STR(sdhci_pci_o2_probe) },
	{ 0xdf57e59f, __VMLINUX_SYMBOL_STR(sdhci_set_uhs_signaling) },
	{ 0x5c3bed1f, __VMLINUX_SYMBOL_STR(sdhci_reset) },
	{ 0x9ab95121, __VMLINUX_SYMBOL_STR(sdhci_set_clock) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xf675a277, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xe8180a53, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e9c7933, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x76d07d6e, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0xe4c4b28f, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xf596d364, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0x7fc9b425, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xa1c3e6e2, __VMLINUX_SYMBOL_STR(pm_runtime_allow) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0xb1b31537, __VMLINUX_SYMBOL_STR(sdhci_add_host) },
	{ 0x63afb5de, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x3196432b, __VMLINUX_SYMBOL_STR(pci_request_region) },
	{ 0xcb15eee9, __VMLINUX_SYMBOL_STR(sdhci_pci_get_data) },
	{ 0x41e72650, __VMLINUX_SYMBOL_STR(sdhci_alloc_host) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x9730c462, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xf3357a58, __VMLINUX_SYMBOL_STR(mmc_detect_change) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x5224e0ad, __VMLINUX_SYMBOL_STR(pm_runtime_forbid) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x2d9c9f06, __VMLINUX_SYMBOL_STR(sdhci_free_host) },
	{ 0xaac451e0, __VMLINUX_SYMBOL_STR(pci_release_region) },
	{ 0x82210a9c, __VMLINUX_SYMBOL_STR(sdhci_remove_host) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xfa675719, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0xf9170e88, __VMLINUX_SYMBOL_STR(pci_pme_active) },
	{ 0x341a3841, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x6ee5cb4d, __VMLINUX_SYMBOL_STR(sdhci_enable_irq_wakeups) },
	{ 0x328cf106, __VMLINUX_SYMBOL_STR(sdhci_suspend_host) },
	{ 0x54f22a40, __VMLINUX_SYMBOL_STR(sdhci_resume_host) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xf24e21b4, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xf916cc7e, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xc2842a7b, __VMLINUX_SYMBOL_STR(sdhci_runtime_suspend_host) },
	{ 0x53ba13d0, __VMLINUX_SYMBOL_STR(sdhci_runtime_resume_host) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001180d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d00000843sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000550sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000551sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002382sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002391sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d000095D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000084Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000824sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000880Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F15sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F16sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008421sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc08sc05i*");

MODULE_INFO(srcversion, "6C0DF38DDD3BA9E6008D2FA");
