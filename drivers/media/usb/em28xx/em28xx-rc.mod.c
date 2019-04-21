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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xa1856f9f, __VMLINUX_SYMBOL_STR(em28xx_read_reg) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa1df927a, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3e710433, __VMLINUX_SYMBOL_STR(em28xx_write_regs) },
	{ 0xa600413d, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xc37c72b2, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x514c2133, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x5532fb20, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x592a77af, __VMLINUX_SYMBOL_STR(em28xx_find_led) },
	{ 0x24423106, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4596dd5f, __VMLINUX_SYMBOL_STR(em28xx_toggle_reg_bits) },
	{ 0xd1aa7a49, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0xff6aceef, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x3b0bb73d, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x18f214b1, __VMLINUX_SYMBOL_STR(em28xx_write_reg_bits) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x7b6c5218, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x8557ee5e, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x8f2e7547, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x75e777ab, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x93d965de, __VMLINUX_SYMBOL_STR(i2c_probe_func_quick_read) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x54a1b78a, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0x630a5ebc, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx";


MODULE_INFO(srcversion, "C11EE00FFF9EA32A5911AA6");
