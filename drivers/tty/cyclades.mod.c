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
	{ 0xfd6293c2, __VMLINUX_SYMBOL_STR(boot_tvec_bases) },
	{ 0xa75226f7, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xacc5e45, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xa6bc24e9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xe39cb5c2, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x184160f3, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x721dbf33, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x464aea3c, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x385a55a8, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x51ce29b0, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xd22decb7, __VMLINUX_SYMBOL_STR(tty_port_tty_set) },
	{ 0x405a1ab, __VMLINUX_SYMBOL_STR(tty_port_block_til_ready) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xcbee1e24, __VMLINUX_SYMBOL_STR(tty_lock) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd777e302, __VMLINUX_SYMBOL_STR(tty_unlock) },
	{ 0x46fb5672, __VMLINUX_SYMBOL_STR(tty_hung_up_p) },
	{ 0xa261a7f1, __VMLINUX_SYMBOL_STR(tty_port_raise_dtr_rts) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x99783eab, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5ba730ab, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x32e8f353, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x55dd9e75, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe3d6d6a9, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x7f63b31e, __VMLINUX_SYMBOL_STR(_memcpy_toio) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xa5503e85, __VMLINUX_SYMBOL_STR(tty_port_lower_dtr_rts) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x4d309773, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x759476c4, __VMLINUX_SYMBOL_STR(tty_ldisc_deref) },
	{ 0x72cc391f, __VMLINUX_SYMBOL_STR(tty_ldisc_ref) },
	{ 0xd0d009b6, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xc5d14f4, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xca08b74c, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x6046e90c, __VMLINUX_SYMBOL_STR(tty_hangup) },
	{ 0x1c96d316, __VMLINUX_SYMBOL_STR(do_SAK) },
	{ 0xc19026c, __VMLINUX_SYMBOL_STR(tty_schedule_flip) },
	{ 0xdbbb2abf, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0xdeef48a5, __VMLINUX_SYMBOL_STR(tty_buffer_request_room) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe1ea44ef, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x30c6a047, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x834b35b9, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x93cf5f61, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x74e302e9, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0x7b15c2ec, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000120Ed00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000105sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C5A8C5BF446E30793D521FD");
