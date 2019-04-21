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
	{ 0xaa9087c0, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x271059a8, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xad0c372c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x801ec116, __VMLINUX_SYMBOL_STR(pcmcia_parse_events) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb9ef1ce3, __VMLINUX_SYMBOL_STR(pccard_nonstatic_ops) },
	{ 0xc2b06344, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x86e0c1a8, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x5a3fb1fe, __VMLINUX_SYMBOL_STR(pcmcia_register_socket) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd8effa43, __VMLINUX_SYMBOL_STR(pci_setup_cardbus) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xe3d6d6a9, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x65e59da8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x751c4747, __VMLINUX_SYMBOL_STR(pci_claim_resource) },
	{ 0x8b82ac8c, __VMLINUX_SYMBOL_STR(pcibios_bus_to_resource) },
	{ 0x2c7c8e9a, __VMLINUX_SYMBOL_STR(pcibios_min_mem) },
	{ 0x91621d6a, __VMLINUX_SYMBOL_STR(allocate_resource) },
	{ 0x5ff11cc3, __VMLINUX_SYMBOL_STR(pcibios_min_io) },
	{ 0x264a1e26, __VMLINUX_SYMBOL_STR(pci_bus_resource_n) },
	{ 0xcf97f3bd, __VMLINUX_SYMBOL_STR(dead_socket) },
	{ 0x47a94d62, __VMLINUX_SYMBOL_STR(pcibios_resource_to_bus) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x360b1afe, __VMLINUX_SYMBOL_STR(probe_irq_mask) },
	{ 0xb121390a, __VMLINUX_SYMBOL_STR(probe_irq_on) },
	{ 0xf675a277, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x47c43534, __VMLINUX_SYMBOL_STR(pci_get_slot) },
	{ 0x7d76f138, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x186df290, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xf629e1be, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbaa88862, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xd6195785, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xa911bbd6, __VMLINUX_SYMBOL_STR(pci_match_id) },
	{ 0x5b8f149d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x9d27e991, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xa5cef8ad, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0x13a8de94, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x7b15c2ec, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x7f590dbd, __VMLINUX_SYMBOL_STR(pcmcia_unregister_socket) },
	{ 0x3062bc5, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x87035702, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x341a3841, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xd53d0790, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x80943d4a, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x6a51de6a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xff7a179, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xeeead662, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000104Cd0000AC13sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Asv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC12sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC15sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Esv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC17sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC19sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Csv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Dsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Fsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC51sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Bsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC52sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC56sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC55sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC54sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC41sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008011sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC42sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC44sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC46sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC16sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC50sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008031sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008036sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008039sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Esv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Dsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC49sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC47sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC48sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001411sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001412sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001421sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001422sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001211sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001225sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001410sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001420sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000465sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000466sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000475sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000476sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000478sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001179d0000060Asv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001179d0000060Fsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001179d00000617sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001217d*sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v*d*sv*sd*bc06sc07i00*");

MODULE_INFO(srcversion, "414575DF793B8B800BFF125");
