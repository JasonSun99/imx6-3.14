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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xfd6293c2, __VMLINUX_SYMBOL_STR(boot_tvec_bases) },
	{ 0x8d2e268b, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x74e302e9, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe39cb5c2, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x184160f3, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0xe8180a53, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x59d8223a, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xa911bbd6, __VMLINUX_SYMBOL_STR(pci_match_id) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9bce482f, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x721dbf33, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x464aea3c, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0xadf42bd5, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x385a55a8, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x405a1ab, __VMLINUX_SYMBOL_STR(tty_port_block_til_ready) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x51ce29b0, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x81f3afb, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xd22decb7, __VMLINUX_SYMBOL_STR(tty_port_tty_set) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2a98c8dd, __VMLINUX_SYMBOL_STR(tty_ldisc_flush) },
	{ 0xe51d64ca, __VMLINUX_SYMBOL_STR(tty_port_close_start) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x93cf5f61, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x99783eab, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0xe15f9d39, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5ba730ab, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5ab2090c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x39c590e3, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xaa13d05, __VMLINUX_SYMBOL_STR(__raw_readsw) },
	{ 0x39ea2bda, __VMLINUX_SYMBOL_STR(tty_prepare_flip_string) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x30c6a047, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0xca08b74c, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0xe1ea44ef, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0xdbbb2abf, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x7d3fd936, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xe6c3ebb0, __VMLINUX_SYMBOL_STR(__raw_writesw) },
	{ 0x834b35b9, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000011FEd00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000080Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000080Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BC880DA968B4C1DF5E7A726");
