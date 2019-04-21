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
	{ 0x49ccc1f9, __VMLINUX_SYMBOL_STR(target_fabric_configfs_deregister) },
	{ 0xbdfc6baa, __VMLINUX_SYMBOL_STR(target_fabric_configfs_register) },
	{ 0x5857b06b, __VMLINUX_SYMBOL_STR(target_fabric_configfs_init) },
	{ 0x3f4551bb, __VMLINUX_SYMBOL_STR(core_tpg_add_initiator_node_acl) },
	{ 0x37e74642, __VMLINUX_SYMBOL_STR(get_jiffies_64) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xe088ba40, __VMLINUX_SYMBOL_STR(transport_free_session) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1e0eb582, __VMLINUX_SYMBOL_STR(transport_register_session) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xcd1060dd, __VMLINUX_SYMBOL_STR(core_tpg_check_initiator_node_acl) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x270670f4, __VMLINUX_SYMBOL_STR(transport_init_session) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xbbc592e5, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0x47f7ae9b, __VMLINUX_SYMBOL_STR(transport_deregister_session_configfs) },
	{ 0x4dd92ce, __VMLINUX_SYMBOL_STR(fw_core_add_descriptor) },
	{ 0x4d5d4eca, __VMLINUX_SYMBOL_STR(fw_core_remove_descriptor) },
	{ 0xaa4a7797, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0x568c5cf8, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0xd278f80c, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x32bace51, __VMLINUX_SYMBOL_STR(sg_miter_stop) },
	{ 0x333ece49, __VMLINUX_SYMBOL_STR(sg_miter_next) },
	{ 0xcc1d08fc, __VMLINUX_SYMBOL_STR(sg_miter_start) },
	{ 0x2885fec5, __VMLINUX_SYMBOL_STR(fw_get_request_speed) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0x4eaaf037, __VMLINUX_SYMBOL_STR(target_submit_cmd) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf4ade51f, __VMLINUX_SYMBOL_STR(fw_card_release) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x52cf0608, __VMLINUX_SYMBOL_STR(fw_run_transaction) },
	{ 0xd4c14632, __VMLINUX_SYMBOL_STR(system_unbound_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x197a4516, __VMLINUX_SYMBOL_STR(fw_send_response) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7127f802, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0xa9755347, __VMLINUX_SYMBOL_STR(fw_core_add_address_handler) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5e7fe5f7, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x691d1e61, __VMLINUX_SYMBOL_STR(fw_core_remove_address_handler) },
	{ 0x4d6d642f, __VMLINUX_SYMBOL_STR(core_tpg_del_initiator_node_acl) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,firewire-core";


MODULE_INFO(srcversion, "3BB2D3A4BA3A3FCA0905CBD");
