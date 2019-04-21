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
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc08b6849, __VMLINUX_SYMBOL_STR(nfc_hci_send_event) },
	{ 0x5678aeb3, __VMLINUX_SYMBOL_STR(nfc_dep_link_is_up) },
	{ 0x95e552e4, __VMLINUX_SYMBOL_STR(nfc_hci_set_param) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5d124f4e, __VMLINUX_SYMBOL_STR(nfc_hci_allocate_device) },
	{ 0xf0507a, __VMLINUX_SYMBOL_STR(nfc_find_se) },
	{ 0x962720e5, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xde65ba97, __VMLINUX_SYMBOL_STR(nfc_hci_get_clientdata) },
	{ 0xc905b1d8, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7bbbbd39, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0xc9e6fc2b, __VMLINUX_SYMBOL_STR(nfc_hci_target_discovered) },
	{ 0x5dc11cfb, __VMLINUX_SYMBOL_STR(nfc_hci_register_device) },
	{ 0x677fc867, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0x475fd925, __VMLINUX_SYMBOL_STR(nfc_hci_free_device) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa8d98367, __VMLINUX_SYMBOL_STR(nfc_hci_unregister_device) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2f5fcb98, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe75f07d2, __VMLINUX_SYMBOL_STR(nfc_add_se) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xd869e7b4, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd_async) },
	{ 0xc7598f3a, __VMLINUX_SYMBOL_STR(nfc_hci_get_param) },
	{ 0xe92cf34f, __VMLINUX_SYMBOL_STR(nfc_hci_set_clientdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hci,nfc";


MODULE_INFO(srcversion, "15177684E25BBC0410650AA");
