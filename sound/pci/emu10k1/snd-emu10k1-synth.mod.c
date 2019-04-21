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
	{ 0xc62d4bbe, __VMLINUX_SYMBOL_STR(snd_emux_new) },
	{ 0xe79df8ef, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_alloc) },
	{ 0x49325c5e, __VMLINUX_SYMBOL_STR(snd_emux_register) },
	{ 0xc5d2843a, __VMLINUX_SYMBOL_STR(snd_emu10k1_memblk_map) },
	{ 0x6cba0460, __VMLINUX_SYMBOL_STR(snd_emu10k1_voice_alloc) },
	{ 0xebce1455, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_bzero) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc622fb29, __VMLINUX_SYMBOL_STR(snd_seq_device_unregister_driver) },
	{ 0x6aa7fb15, __VMLINUX_SYMBOL_STR(snd_emux_free) },
	{ 0x7e538339, __VMLINUX_SYMBOL_STR(snd_emu10k1_ptr_write) },
	{ 0xd7f841bb, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_free) },
	{ 0xe36fe775, __VMLINUX_SYMBOL_STR(snd_seq_device_register_driver) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xab6e9370, __VMLINUX_SYMBOL_STR(snd_emu10k1_voice_free) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd24013b7, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_copy_from_user) },
	{ 0x6495627c, __VMLINUX_SYMBOL_STR(snd_emu10k1_ptr_read) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-emux-synth,snd-emu10k1";


MODULE_INFO(srcversion, "20FE054F29EA66B2F653E6E");
