#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x62250b25, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x45a55ec8, __VMLINUX_SYMBOL_STR(__iounmap) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xad224186, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x7e19257, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x558eefee, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xa5873a99, __VMLINUX_SYMBOL_STR(cpu_hwcaps) },
	{ 0x7fea27b1, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x4417b1de, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x36f33df6, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xb8e79a49, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xf24b3dfe, __VMLINUX_SYMBOL_STR(__ioremap) },
	{ 0xfa37a7ca, __VMLINUX_SYMBOL_STR(cpu_hwcap_keys) },
	{ 0x9ee37840, __VMLINUX_SYMBOL_STR(arm64_const_caps_ready) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "68B41F422A75846A31386CD");
