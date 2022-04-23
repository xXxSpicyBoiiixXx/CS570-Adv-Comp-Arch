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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb316dd2d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x25f02c87, __VMLINUX_SYMBOL_STR(xen_p2m_addr) },
	{ 0x45d14bdf, __VMLINUX_SYMBOL_STR(hypercall_page) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x8a643d45, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xe1e28587, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe461bf3a, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xebafd1b6, __VMLINUX_SYMBOL_STR(gnttab_map_refs) },
	{ 0xe041fa75, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xfe727411, __VMLINUX_SYMBOL_STR(get_phys_to_machine) },
	{  0x2d791, __VMLINUX_SYMBOL_STR(gnttab_unmap_refs) },
	{ 0x55526907, __VMLINUX_SYMBOL_STR(xen_features) },
	{ 0xb6230f1f, __VMLINUX_SYMBOL_STR(gnttab_grant_foreign_access) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x3a7d80f9, __VMLINUX_SYMBOL_STR(xen_max_p2m_pfn) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xf3e79326, __VMLINUX_SYMBOL_STR(free_vm_area) },
	{ 0xafc36baa, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xe2c160b8, __VMLINUX_SYMBOL_STR(apply_to_page_range) },
	{ 0x74dcd602, __VMLINUX_SYMBOL_STR(alloc_xenballooned_pages) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2d0c55e5, __VMLINUX_SYMBOL_STR(alloc_vm_area) },
	{ 0xe22eb7a5, __VMLINUX_SYMBOL_STR(free_xenballooned_pages) },
	{ 0x29b719f, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x50331367, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x8b9200fd, __VMLINUX_SYMBOL_STR(lookup_address) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb02e75a6, __VMLINUX_SYMBOL_STR(pv_mmu_ops) },
	{ 0x3362b03c, __VMLINUX_SYMBOL_STR(xen_p2m_size) },
	{ 0x15010e1f, __VMLINUX_SYMBOL_STR(arbitrary_virt_to_machine) },
	{ 0xfd51b281, __VMLINUX_SYMBOL_STR(gnttab_end_foreign_access_ref) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x891a5a7f, __VMLINUX_SYMBOL_STR(gnttab_max_grant_frames) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

