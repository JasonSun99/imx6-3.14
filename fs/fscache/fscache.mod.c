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
	{ 0xa596888b, __VMLINUX_SYMBOL_STR(request_key) },
	{ 0x61ed383c, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbaff3a71, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2b8c46d1, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x3fab3ca9, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0xc5d14f4, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x144f8da, __VMLINUX_SYMBOL_STR(key_type_user) },
	{ 0x4c272a74, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xa75226f7, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xd0d009b6, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xf1479649, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3a65ed9f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xa26d9b4f, __VMLINUX_SYMBOL_STR(workqueue_congested) },
	{ 0xe29e1d0e, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_atomic_t) },
	{ 0x737de5e9, __VMLINUX_SYMBOL_STR(radix_tree_tag_get) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xacc5e45, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x114c7607, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x34f04bb6, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0xfcaa04a0, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_lock) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xd8ded085, __VMLINUX_SYMBOL_STR(radix_tree_maybe_preload) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd48cba88, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x18bd76a4, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0xf31b3fd1, __VMLINUX_SYMBOL_STR(workqueue_set_max_active) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xcea75b8e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb6822a33, __VMLINUX_SYMBOL_STR(radix_tree_gang_lookup_tag) },
	{ 0x4a913f5b, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x251b888a, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x8522d53f, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x5d5b5a16, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0xd2e5a457, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0xa1f0ebea, __VMLINUX_SYMBOL_STR(bit_waitqueue) },
	{ 0x632780, __VMLINUX_SYMBOL_STR(work_busy) },
	{ 0x783b3563, __VMLINUX_SYMBOL_STR(wake_up_atomic_t) },
	{ 0x617a218d, __VMLINUX_SYMBOL_STR(__cond_resched_lock) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x54434d6, __VMLINUX_SYMBOL_STR(radix_tree_tag_set) },
	{ 0xe912da6b, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x5642793a, __VMLINUX_SYMBOL_STR(radix_tree_tag_clear) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x96b6f4b8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc9ee2dc9, __VMLINUX_SYMBOL_STR(__pagevec_release) },
	{ 0xa0ceef51, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xb3b3c4f4, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x58ba5b86, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0xa6bc24e9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa9b08873, __VMLINUX_SYMBOL_STR(pagevec_lookup) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa414882d, __VMLINUX_SYMBOL_STR(add_wait_queue_exclusive) },
	{ 0x93ae4026, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x870bf928, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x10982385, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf202c5cb, __VMLINUX_SYMBOL_STR(radix_tree_insert) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1792B0541815548AD165C83");
