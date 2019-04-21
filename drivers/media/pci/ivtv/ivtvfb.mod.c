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
	{ 0x3f234ac4, __VMLINUX_SYMBOL_STR(cfb_imageblit) },
	{ 0x33e8d70a, __VMLINUX_SYMBOL_STR(cfb_copyarea) },
	{ 0xe5726e60, __VMLINUX_SYMBOL_STR(cfb_fillrect) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x57a8904b, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0x167d2e41, __VMLINUX_SYMBOL_STR(driver_for_each_device) },
	{ 0xe2012b40, __VMLINUX_SYMBOL_STR(driver_find) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1b7d3802, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x97f3b8f8, __VMLINUX_SYMBOL_STR(ivtv_udma_alloc) },
	{ 0x7a890c8, __VMLINUX_SYMBOL_STR(fb_alloc_cmap) },
	{ 0xb95f98d6, __VMLINUX_SYMBOL_STR(_memset_io) },
	{ 0x7730f8fd, __VMLINUX_SYMBOL_STR(ivtv_init_on_first_open) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x72972fdd, __VMLINUX_SYMBOL_STR(ivtv_firmware_check) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x14f67530, __VMLINUX_SYMBOL_STR(ivtv_debug) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xabc892cb, __VMLINUX_SYMBOL_STR(ivtv_udma_unmap) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x9e254d3b, __VMLINUX_SYMBOL_STR(ivtv_udma_prepare) },
	{ 0x3088d3bc, __VMLINUX_SYMBOL_STR(ivtv_udma_setup) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xce6f979e, __VMLINUX_SYMBOL_STR(ivtv_vapi_result) },
	{ 0xe9220de6, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x98b71c6, __VMLINUX_SYMBOL_STR(fb_dealloc_cmap) },
	{ 0x3aaa2d91, __VMLINUX_SYMBOL_STR(ivtv_vapi) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ivtv";


MODULE_INFO(srcversion, "D531C479E7BA2D896B0D933");
