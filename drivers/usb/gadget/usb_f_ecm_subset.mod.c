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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb5765ef7, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0xf3853f3b, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf7b55adc, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0x5b8c3a80, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0xc22114ca, __VMLINUX_SYMBOL_STR(gether_get_host_addr_cdc) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8d4e60e, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0x5146745d, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x7784e945, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x81f1a052, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0x85961cbd, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0x7937d48c, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6c8973b4, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xa78b8230, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x600c74e8, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe58cfab1, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0xbc8199a, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0xd32f152e, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0xc145ee9d, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0xae697a64, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x62b60e5d, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x480b8e0b, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x3b65601d, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x923abd68, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x702cd0f3, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether";


MODULE_INFO(srcversion, "346D37BD937D07F8B39C46E");
