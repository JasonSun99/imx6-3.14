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
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xa75226f7, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xacc5e45, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xa6bc24e9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xf8762f1a, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x184160f3, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x3a65ed9f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xb3b3c4f4, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x3b0a1f82, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x8a3caa24, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xe39cb5c2, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x721dbf33, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x464aea3c, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x385a55a8, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x17dd461c, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x636ace9f, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x3f027eb1, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xc5d14f4, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x81099cd2, __VMLINUX_SYMBOL_STR(tty_standard_install) },
	{ 0xc176eae0, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x4d309773, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x51ce29b0, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x76b01ddd, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x3b99b8aa, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x99783eab, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0x5ba730ab, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xacf446c0, __VMLINUX_SYMBOL_STR(capi20_put_message) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x5d0c182b, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x759476c4, __VMLINUX_SYMBOL_STR(tty_ldisc_deref) },
	{ 0x72cc391f, __VMLINUX_SYMBOL_STR(tty_ldisc_ref) },
	{ 0xd6bcce70, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x14f2aa5a, __VMLINUX_SYMBOL_STR(capi20_get_version) },
	{ 0x31c24aa4, __VMLINUX_SYMBOL_STR(capi20_isinstalled) },
	{ 0x7e6f1307, __VMLINUX_SYMBOL_STR(capi20_get_manufacturer) },
	{ 0xe19a11ac, __VMLINUX_SYMBOL_STR(capi20_get_profile) },
	{ 0xcc5fc169, __VMLINUX_SYMBOL_STR(capi20_register) },
	{ 0x7a33596c, __VMLINUX_SYMBOL_STR(capi20_get_serial) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xed061606, __VMLINUX_SYMBOL_STR(capi20_manufacturer) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa62ad416, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xaaf11b11, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x532fbfc0, __VMLINUX_SYMBOL_STR(capi20_release) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x74e302e9, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0xe1ea44ef, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x39007f7f, __VMLINUX_SYMBOL_STR(tty_vhangup) },
	{ 0x834b35b9, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0xd1a53788, __VMLINUX_SYMBOL_STR(tty_port_put) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi";


MODULE_INFO(srcversion, "FD437B4FC1046FD24CF3843");
