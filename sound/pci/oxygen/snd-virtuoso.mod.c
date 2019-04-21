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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc717ccac, __VMLINUX_SYMBOL_STR(oxygen_read16) },
	{ 0x6c4173fa, __VMLINUX_SYMBOL_STR(oxygen_pci_remove) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa47541e8, __VMLINUX_SYMBOL_STR(oxygen_write8_masked) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9842f936, __VMLINUX_SYMBOL_STR(oxygen_write16_masked) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd8ef26fc, __VMLINUX_SYMBOL_STR(oxygen_write_ac97_masked) },
	{ 0x7073ecca, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xcd143c03, __VMLINUX_SYMBOL_STR(oxygen_write_spi) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x66d69159, __VMLINUX_SYMBOL_STR(oxygen_pci_probe) },
	{ 0x6e4325a1, __VMLINUX_SYMBOL_STR(snd_jack_new) },
	{ 0x4c074ab7, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0xb88e8602, __VMLINUX_SYMBOL_STR(oxygen_write16) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0xdf3b0d15, __VMLINUX_SYMBOL_STR(snd_component_add) },
	{ 0x10bb758f, __VMLINUX_SYMBOL_STR(oxygen_read8) },
	{ 0x85a7c0dd, __VMLINUX_SYMBOL_STR(oxygen_reset_uart) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2533e214, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x37f9d3b9, __VMLINUX_SYMBOL_STR(oxygen_write_uart) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xfbd686ef, __VMLINUX_SYMBOL_STR(oxygen_write_i2c) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xce99cc0b, __VMLINUX_SYMBOL_STR(oxygen_pci_pm) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x351c54a8, __VMLINUX_SYMBOL_STR(oxygen_pci_shutdown) },
	{ 0x838aa298, __VMLINUX_SYMBOL_STR(snd_jack_report) },
	{ 0x79a8a914, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-oxygen-lib";

MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008269bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008275bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000082B7bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008314bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008327bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000834Fbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Cbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Dbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000838Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008522bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000085F4bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00008788bc*sc*i*");

MODULE_INFO(srcversion, "AB77DA27BFA71612F6E36A9");
