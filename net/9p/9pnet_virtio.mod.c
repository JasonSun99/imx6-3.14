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
	{ 0x57f76147, __VMLINUX_SYMBOL_STR(kmap_to_page) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xbfb9dc7c, __VMLINUX_SYMBOL_STR(p9_client_cb) },
	{ 0x5e1f3241, __VMLINUX_SYMBOL_STR(v9fs_unregister_trans) },
	{ 0xa7da8909, __VMLINUX_SYMBOL_STR(p9_payload_gup) },
	{ 0xf1479649, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xcc794a00, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x7817d33d, __VMLINUX_SYMBOL_STR(v9fs_register_trans) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x531e8d20, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x49df8bba, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xf748ac5, __VMLINUX_SYMBOL_STR(p9_tag_lookup) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4945bce5, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8a9cda4f, __VMLINUX_SYMBOL_STR(p9_release_pages) },
	{ 0x977a0030, __VMLINUX_SYMBOL_STR(p9_nr_pages) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe19479bd, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x24bd081f, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe254e39c, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x4cb16ddc, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0xbd4a5d05, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=9pnet,virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000009v*");

MODULE_INFO(srcversion, "194188C025C66623226A90C");
