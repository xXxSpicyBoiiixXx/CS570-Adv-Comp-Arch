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
	{ 0xc4437ab1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x25f02c87, __VMLINUX_SYMBOL_STR(xen_p2m_addr) },
	{ 0x45d14bdf, __VMLINUX_SYMBOL_STR(hypercall_page) },
	{ 0x4f18db74, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x128d7fe4, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2bd28de5, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x586a4ac, __VMLINUX_SYMBOL_STR(gnttab_map_refs) },
	{ 0x3119facd, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xfe727411, __VMLINUX_SYMBOL_STR(get_phys_to_machine) },
	{ 0x3a932b17, __VMLINUX_SYMBOL_STR(gnttab_unmap_refs) },
	{ 0x55526907, __VMLINUX_SYMBOL_STR(xen_features) },
	{ 0xb6230f1f, __VMLINUX_SYMBOL_STR(gnttab_grant_foreign_access) },
	{ 0x46d6b787, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x3a7d80f9, __VMLINUX_SYMBOL_STR(xen_max_p2m_pfn) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xb44ad4b3, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x4dfd2f1f, __VMLINUX_SYMBOL_STR(free_vm_area) },
	{ 0xbe4a786e, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x3c2c32e6, __VMLINUX_SYMBOL_STR(apply_to_page_range) },
	{ 0xe6e8227e, __VMLINUX_SYMBOL_STR(alloc_xenballooned_pages) },
	{ 0xd36a2d57, __VMLINUX_SYMBOL_STR(alloc_vm_area) },
	{ 0xcb678031, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x81c0760f, __VMLINUX_SYMBOL_STR(free_xenballooned_pages) },
	{ 0xf3e9875d, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x350afc3f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x8b9200fd, __VMLINUX_SYMBOL_STR(lookup_address) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e1da9fb, __VMLINUX_SYMBOL_STR(probe_kernel_read) },
	{ 0xe838b63c, __VMLINUX_SYMBOL_STR(pv_mmu_ops) },
	{ 0x78d8cb15, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x3362b03c, __VMLINUX_SYMBOL_STR(xen_p2m_size) },
	{ 0x15010e1f, __VMLINUX_SYMBOL_STR(arbitrary_virt_to_machine) },
	{ 0xfd51b281, __VMLINUX_SYMBOL_STR(gnttab_end_foreign_access_ref) },
	{ 0x362ef408, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x8fdb4be8, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x891a5a7f, __VMLINUX_SYMBOL_STR(gnttab_max_grant_frames) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

