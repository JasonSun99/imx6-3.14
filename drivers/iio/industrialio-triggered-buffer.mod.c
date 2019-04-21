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
	{ 0x9b15fd11, __VMLINUX_SYMBOL_STR(iio_buffer_register) },
	{ 0xb3a8dba5, __VMLINUX_SYMBOL_STR(iio_kfifo_allocate) },
	{ 0xb7f329f4, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0xe9817d9e, __VMLINUX_SYMBOL_STR(iio_buffer_get) },
	{ 0x4907705a, __VMLINUX_SYMBOL_STR(iio_buffer_unregister) },
	{ 0x5eea952b, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x5a2147a1, __VMLINUX_SYMBOL_STR(iio_kfifo_free) },
	{ 0x5349cfd7, __VMLINUX_SYMBOL_STR(iio_alloc_pollfunc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x9eef8c45, __VMLINUX_SYMBOL_STR(iio_dealloc_pollfunc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,kfifo_buf";


MODULE_INFO(srcversion, "503492C6CA03534F0465128");
