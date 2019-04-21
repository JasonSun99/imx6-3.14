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
	{ 0xe19479bd, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xbd4a5d05, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x531e8d20, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x185d2915, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3f5b67d5, __VMLINUX_SYMBOL_STR(wait_for_completion_killable) },
	{ 0x624a6406, __VMLINUX_SYMBOL_STR(hwrng_register) },
	{ 0x7267db00, __VMLINUX_SYMBOL_STR(hwrng_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x49df8bba, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000004v*");

MODULE_INFO(srcversion, "DF50B1CA0474C9D14FEEF23");
