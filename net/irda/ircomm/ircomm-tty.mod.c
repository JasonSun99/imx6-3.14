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
	{ 0x834b35b9, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb9394173, __VMLINUX_SYMBOL_STR(irias_delete_value) },
	{ 0x91815586, __VMLINUX_SYMBOL_STR(irda_param_pack) },
	{ 0xc5d14f4, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x57ba7577, __VMLINUX_SYMBOL_STR(tty_port_close_end) },
	{ 0x763e54a4, __VMLINUX_SYMBOL_STR(irlmp_unregister_client) },
	{ 0xa75226f7, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xd0d009b6, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x46fb5672, __VMLINUX_SYMBOL_STR(tty_hung_up_p) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x8982c8d9, __VMLINUX_SYMBOL_STR(irias_delete_object) },
	{ 0x721dbf33, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3288205a, __VMLINUX_SYMBOL_STR(tty_port_carrier_raised) },
	{ 0xe39cb5c2, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0xe51d64ca, __VMLINUX_SYMBOL_STR(tty_port_close_start) },
	{ 0xe0c7bb5f, __VMLINUX_SYMBOL_STR(ircomm_connect_response) },
	{ 0xacc5e45, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xf199cba4, __VMLINUX_SYMBOL_STR(irias_insert_object) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x464aea3c, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0xc04366cf, __VMLINUX_SYMBOL_STR(iriap_getvaluebyclass_request) },
	{ 0x7042bc54, __VMLINUX_SYMBOL_STR(irlmp_register_client) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8a44dd5e, __VMLINUX_SYMBOL_STR(hashbin_new) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6b76aa70, __VMLINUX_SYMBOL_STR(hashbin_delete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x501ec76f, __VMLINUX_SYMBOL_STR(ircomm_disconnect_request) },
	{ 0x6492e28c, __VMLINUX_SYMBOL_STR(hashbin_get_next) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x9ed3eb13, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x5ba730ab, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x993ad14b, __VMLINUX_SYMBOL_STR(irda_param_extract_all) },
	{ 0x49711138, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x93cf5f61, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d3647c, __VMLINUX_SYMBOL_STR(irlmp_register_service) },
	{ 0x2b435f13, __VMLINUX_SYMBOL_STR(ircomm_connect_request) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xcde4240c, __VMLINUX_SYMBOL_STR(tty_driver_flush_buffer) },
	{ 0xb3c13d7f, __VMLINUX_SYMBOL_STR(irias_add_integer_attrib) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x37791344, __VMLINUX_SYMBOL_STR(hashbin_get_first) },
	{ 0xed61f0db, __VMLINUX_SYMBOL_STR(iriap_close) },
	{ 0xbe40ace9, __VMLINUX_SYMBOL_STR(irlmp_discovery_request) },
	{ 0x2a94b47b, __VMLINUX_SYMBOL_STR(tty_port_install) },
	{ 0xca237365, __VMLINUX_SYMBOL_STR(irda_notify_init) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x184160f3, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x17a491c5, __VMLINUX_SYMBOL_STR(irias_add_octseq_attrib) },
	{ 0x6046e90c, __VMLINUX_SYMBOL_STR(tty_hangup) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xca08b74c, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x385a55a8, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0xc27a4131, __VMLINUX_SYMBOL_STR(ircomm_control_request) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xa6bc24e9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x438066ec, __VMLINUX_SYMBOL_STR(iriap_open) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x77947fb3, __VMLINUX_SYMBOL_STR(ircomm_close) },
	{ 0xe1ea44ef, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xfd5ee5d7, __VMLINUX_SYMBOL_STR(ircomm_open) },
	{ 0x7d3fd936, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xbfa7c08d, __VMLINUX_SYMBOL_STR(hashbin_lock_find) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x46c1c4a2, __VMLINUX_SYMBOL_STR(irlmp_unregister_service) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x7e67ca6e, __VMLINUX_SYMBOL_STR(irias_new_object) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xd22decb7, __VMLINUX_SYMBOL_STR(tty_port_tty_set) },
	{ 0xff7e95d6, __VMLINUX_SYMBOL_STR(ircomm_flow_request) },
	{ 0x90aadb69, __VMLINUX_SYMBOL_STR(ircomm_data_request) },
	{ 0xa261a7f1, __VMLINUX_SYMBOL_STR(tty_port_raise_dtr_rts) },
	{ 0xde4c6b3c, __VMLINUX_SYMBOL_STR(irlmp_service_to_hint) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x30c6a047, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x731cec71, __VMLINUX_SYMBOL_STR(hashbin_insert) },
	{ 0x2036ad06, __VMLINUX_SYMBOL_STR(irda_param_insert) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=irda,ircomm";


MODULE_INFO(srcversion, "0500B627369C971E09B86CC");
