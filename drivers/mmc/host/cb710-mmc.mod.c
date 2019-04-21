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
	{ 0x66df957, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0xf3357a58, __VMLINUX_SYMBOL_STR(mmc_detect_change) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x196845bd, __VMLINUX_SYMBOL_STR(cb710_pci_update_config_reg) },
	{ 0x91c4c673, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xd53d0790, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9bf96959, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x32bace51, __VMLINUX_SYMBOL_STR(sg_miter_stop) },
	{ 0x9e4c7649, __VMLINUX_SYMBOL_STR(cb710_sg_dwiter_read_next_block) },
	{ 0xcc1d08fc, __VMLINUX_SYMBOL_STR(sg_miter_start) },
	{ 0xc90f6b1a, __VMLINUX_SYMBOL_STR(cb710_sg_dwiter_write_next_block) },
	{ 0x5b1055f3, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x7d974d28, __VMLINUX_SYMBOL_STR(cb710_set_irq_handler) },
	{ 0x4de0f479, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cb710";


MODULE_INFO(srcversion, "B0FBB7FA699679823C69C4D");
