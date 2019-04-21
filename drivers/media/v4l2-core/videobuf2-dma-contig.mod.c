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
	{ 0xc0a5f209, __VMLINUX_SYMBOL_STR(vb2_put_vma) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe4716ffd, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xfa3ec1e7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xea54f796, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x557edc30, __VMLINUX_SYMBOL_STR(dma_buf_detach) },
	{ 0xe4069791, __VMLINUX_SYMBOL_STR(set_page_dirty_lock) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xf4b6d3b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x51e77c97, __VMLINUX_SYMBOL_STR(pfn_valid) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xe93d8173, __VMLINUX_SYMBOL_STR(dma_common_get_sgtable) },
	{ 0xaa400034, __VMLINUX_SYMBOL_STR(follow_pfn) },
	{ 0x52a37bdd, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1e31c3d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x707de0bf, __VMLINUX_SYMBOL_STR(vb2_get_vma) },
	{ 0xd55a217d, __VMLINUX_SYMBOL_STR(dma_buf_unmap_attachment) },
	{ 0xcdd158d, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x79b0be36, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb29c2598, __VMLINUX_SYMBOL_STR(dma_buf_map_attachment) },
	{ 0x57f1623f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xa76f5c31, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0xae18933f, __VMLINUX_SYMBOL_STR(dma_buf_attach) },
	{ 0x6703f64a, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5478a8b8, __VMLINUX_SYMBOL_STR(vb2_common_vm_ops) },
	{ 0x93ae4026, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x22d7ede, __VMLINUX_SYMBOL_STR(sg_alloc_table_from_pages) },
	{ 0x6c7aa0eb, __VMLINUX_SYMBOL_STR(dma_buf_export_named) },
	{ 0xf96835ad, __VMLINUX_SYMBOL_STR(dma_common_mmap) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-memops";


MODULE_INFO(srcversion, "EBB53FD89C32A695B01B280");
