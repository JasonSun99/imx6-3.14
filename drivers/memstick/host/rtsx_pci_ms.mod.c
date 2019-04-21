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
	{ 0xee1068d0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xcbaae858, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x92a0cc25, __VMLINUX_SYMBOL_STR(memstick_detect_change) },
	{ 0xde406ed0, __VMLINUX_SYMBOL_STR(rtsx_pci_transfer_data) },
	{ 0xe514b38a, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd_no_wait) },
	{ 0x6d5e92cd, __VMLINUX_SYMBOL_STR(rtsx_pci_start_run) },
	{ 0x4bcfa3c3, __VMLINUX_SYMBOL_STR(rtsx_pci_read_register) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2ac89984, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_on) },
	{ 0x6566a6bc, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_enable) },
	{ 0x9b9ca6f, __VMLINUX_SYMBOL_STR(rtsx_pci_switch_clock) },
	{ 0xd4c2e9ee, __VMLINUX_SYMBOL_STR(rtsx_pci_write_register) },
	{ 0xcbd1f9b7, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_disable) },
	{ 0x7b78c0d2, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_off) },
	{ 0xa9e97e87, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd) },
	{ 0x50890c6e, __VMLINUX_SYMBOL_STR(rtsx_pci_add_cmd) },
	{ 0x24f9b22, __VMLINUX_SYMBOL_STR(rtsx_pci_card_exclusive_check) },
	{ 0x26fd5513, __VMLINUX_SYMBOL_STR(memstick_add_host) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x2efa3a79, __VMLINUX_SYMBOL_STR(memstick_alloc_host) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7734b34a, __VMLINUX_SYMBOL_STR(memstick_free_host) },
	{ 0x127609bf, __VMLINUX_SYMBOL_STR(memstick_remove_host) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3d698be7, __VMLINUX_SYMBOL_STR(memstick_next_req) },
	{ 0x4fd4e464, __VMLINUX_SYMBOL_STR(rtsx_pci_complete_unfinished_transfer) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x79df1425, __VMLINUX_SYMBOL_STR(memstick_suspend_host) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3191407e, __VMLINUX_SYMBOL_STR(memstick_resume_host) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=memstick,rtsx_pci";

MODULE_ALIAS("platform:rtsx_pci_ms");

MODULE_INFO(srcversion, "34822FA6052029C2E441698");
