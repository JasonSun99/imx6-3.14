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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3a65ed9f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xb3b3c4f4, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x532fbfc0, __VMLINUX_SYMBOL_STR(capi20_release) },
	{ 0x23359aff, __VMLINUX_SYMBOL_STR(unregister_capictr_notifier) },
	{ 0xce1414b2, __VMLINUX_SYMBOL_STR(register_capictr_notifier) },
	{ 0xcc5fc169, __VMLINUX_SYMBOL_STR(capi20_register) },
	{ 0xc10fe128, __VMLINUX_SYMBOL_STR(cdebbuf_free) },
	{ 0xe8ad9bd1, __VMLINUX_SYMBOL_STR(capi_cmsg2str) },
	{ 0xb19fda8d, __VMLINUX_SYMBOL_STR(capi_cmd2str) },
	{ 0x6057c6f3, __VMLINUX_SYMBOL_STR(capi_message2cmsg) },
	{ 0xe19a11ac, __VMLINUX_SYMBOL_STR(capi20_get_profile) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xfec2bcd0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3e520a8f, __VMLINUX_SYMBOL_STR(register_isdn) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7b657827, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xc5d14f4, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x47d3fc51, __VMLINUX_SYMBOL_STR(capi_info2str) },
	{ 0xc72a26df, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe8d46bdb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x20e930c8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf69fef36, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xb60e5e5f, __VMLINUX_SYMBOL_STR(capi_cmsg_header) },
	{ 0x14f2aa5a, __VMLINUX_SYMBOL_STR(capi20_get_version) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x7e6f1307, __VMLINUX_SYMBOL_STR(capi20_get_manufacturer) },
	{ 0x69a4507f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xacf446c0, __VMLINUX_SYMBOL_STR(capi20_put_message) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xca6b6169, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc848f815, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x50b33ca4, __VMLINUX_SYMBOL_STR(capi_cmsg2message) },
	{ 0xbb72d4fe, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,isdn";


MODULE_INFO(srcversion, "475B254C579CE2B01CB7D61");
