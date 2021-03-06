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
	{ 0x6dea2701, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x58ba5b86, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0x223accdb, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0x23fd9d1, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xc4f91988, __VMLINUX_SYMBOL_STR(padata_start) },
	{ 0x4e5893f4, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0xcfc68341, __VMLINUX_SYMBOL_STR(synchronize_rcu_bh) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0xf1479649, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x4515009f, __VMLINUX_SYMBOL_STR(kobject_add) },
	{ 0x97e5f791, __VMLINUX_SYMBOL_STR(padata_register_cpumask_notifier) },
	{ 0x1181534, __VMLINUX_SYMBOL_STR(padata_alloc_possible) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0x8cd162c5, __VMLINUX_SYMBOL_STR(padata_free) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xbad3f897, __VMLINUX_SYMBOL_STR(padata_unregister_cpumask_notifier) },
	{ 0x37c2c218, __VMLINUX_SYMBOL_STR(padata_stop) },
	{ 0xf19e9355, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xaecd340, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xe107f1fd, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x62d58b5d, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xe0d92745, __VMLINUX_SYMBOL_STR(padata_do_serial) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb1a4682b, __VMLINUX_SYMBOL_STR(padata_do_parallel) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x61b8fff8, __VMLINUX_SYMBOL_STR(crypto_aead_type) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9ca2c3a9, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x53e63209, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe20aecaf, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x23dc0d49, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CE545B1390B6B1C68C93D0B");
