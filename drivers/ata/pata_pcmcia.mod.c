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
	{ 0x29da07b8, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x63205de1, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x5991c6a4, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0x94a68723, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x69e9a2cb, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x603d418f, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x7aba0e98, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0xeedde9b5, __VMLINUX_SYMBOL_STR(ata_sff_port_ops) },
	{ 0xf73f9c58, __VMLINUX_SYMBOL_STR(ata_sff_data_xfer_noirq) },
	{ 0x88c6ba00, __VMLINUX_SYMBOL_STR(ata_cable_40wire) },
	{ 0xebee08d4, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0x19088f8a, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0xbad5c73e, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x622ffa6b, __VMLINUX_SYMBOL_STR(ata_dev_disable) },
	{ 0x289c77ad, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0xc7fc96fe, __VMLINUX_SYMBOL_STR(ata_do_set_mode) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x999c3148, __VMLINUX_SYMBOL_STR(__raw_readsb) },
	{ 0x75fee7fd, __VMLINUX_SYMBOL_STR(__raw_writesb) },
	{ 0x5703942, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0x3a4f6a32, __VMLINUX_SYMBOL_STR(ata_sff_interrupt) },
	{ 0x61050c4d, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xc1280dcb, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0xd75c08c1, __VMLINUX_SYMBOL_STR(ata_port_desc) },
	{ 0x73a48b4a, __VMLINUX_SYMBOL_STR(ata_sff_std_ports) },
	{ 0x978e12b6, __VMLINUX_SYMBOL_STR(ata_host_alloc) },
	{ 0x688be289, __VMLINUX_SYMBOL_STR(devm_ioport_map) },
	{ 0xce3371b1, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0xb4b4bb34, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x1c0b4f81, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xfa86bffb, __VMLINUX_SYMBOL_STR(ata_host_detach) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pcmcia:m*c*f04fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0000c0000f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0007c0000f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m000Ac0000f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m001Cc0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c0704f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c2904f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0045c0401f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m004Fc0000f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0097c1620f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0098c0000f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m00A4c002Df*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m00CEc0000f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0319c0000f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m2080c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m4E01c0100f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m4E01c0200f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8C36137CpbD0693AB8pc2768A9F0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1B9179CApbEDE88951pc0D902F74pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb1907960CpcF7FDE8B9pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa78F308DCpb66536591pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa78F308DCpb0C694728pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa46D7DB81pb66536591pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa7D93B852pb66536591pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paFF8C8A45pbFE8020C4pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa17692A66pbEF1DCBDEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6F58C983pb63C13AAFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0A5C52FDpb66536591pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0A5C52FDpb0C694728pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5714CBF7pb48E0AB8Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF4F43949pb9EB86AAEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF4F43949pbA6D76178pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3D5B9EF5pbCA6AB420pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB569A6E5pbA6D76178pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB569A6E5pbF2508753pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E6D1829pb55D5BFFBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E6D1829pb531E7D10pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E6D1829pbACBE682Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa547E66DCpb8671043Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa547E66DCpb5C5AB149pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa547E66DCpbB3662674pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE37BE2B5pb8671043Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa7ED2AD87pb7E9E78EEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa7ED2AD87pb7A13045Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pbEBE0BD79pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb66536591pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb0C694728pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4A3F0BA0pb322560E1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa87C1B330pbE1F30883pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa43D74CB4pb6A22777Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa30896C92pb703CC5F6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4585A1Apb3489E003pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD0909443pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa709B1BF1pbF68B6F32pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa709B1BF1pb2A54D4B1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa709B1BF1pb969AA4F2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa709B1BF1pbF54A91C8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa709B1BF1pb7558F133pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa709B1BF1pbB2F89B47pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa244E5994pb3E232852pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paCC7CF69Cpb212BB918pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE4A13209pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBF2DF18Dpb8CB57A0Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn01pfn*pa7A954BD9pb74BE00C6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb5A362506pc*pd*");

MODULE_INFO(srcversion, "1FE50E8D903D713594CA4A1");
