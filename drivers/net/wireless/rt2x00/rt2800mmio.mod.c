#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc2ca9c8b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc4d3c522, __VMLINUX_SYMBOL_STR(rt2800_disable_wpdma) },
	{ 0x9deb127a, __VMLINUX_SYMBOL_STR(rt2x00lib_beacondone) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x508a38d2, __VMLINUX_SYMBOL_STR(rt2800_config) },
	{ 0x1ff4420e, __VMLINUX_SYMBOL_STR(rt2800_get_txwi_rxwi_size) },
	{ 0x9da8eb89, __VMLINUX_SYMBOL_STR(rt2x00lib_pretbtt) },
	{ 0x85481f6e, __VMLINUX_SYMBOL_STR(rt2800_wait_wpdma_ready) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2b0d1f21, __VMLINUX_SYMBOL_STR(rt2800_process_rxwi) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x9087aae0, __VMLINUX_SYMBOL_STR(rt2x00queue_for_each_entry) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x58dfc391, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x74a3c9df, __VMLINUX_SYMBOL_STR(rt2x00mmio_rxdone) },
	{ 0x4d92fd5b, __VMLINUX_SYMBOL_STR(rt2800_txdone_entry) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x1abaad82, __VMLINUX_SYMBOL_STR(rt2800_enable_radio) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2800lib,rt2x00lib,rt2x00mmio";


MODULE_INFO(srcversion, "9DB96A2B235AF050F52CE8F");
