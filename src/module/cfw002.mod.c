#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x568fba06, "module_layout" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0xb1b13d8f, "pci_unregister_driver" },
	{ 0x87d591c5, "__pci_register_driver" },
	{ 0x6395be94, "__init_waitqueue_head" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x1232226d, "release_firmware" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8da78cc2, "request_firmware" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x77e2f33, "_copy_from_user" },
	{ 0x8c183cbe, "iowrite16" },
	{ 0xe5772d4a, "copy_user_generic_string" },
	{ 0xdcc3a419, "copy_user_generic_unrolled" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0x9021c4eb, "current_task" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x9f6b4c62, "down_interruptible" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xedc03953, "iounmap" },
	{ 0xc2a3e73d, "debugfs_create_file" },
	{ 0xd5f8162f, "debugfs_create_dir" },
	{ 0xd641eabf, "cdev_add" },
	{ 0x9c10fd4, "cdev_init" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0x55b27fd, "pci_iomap" },
	{ 0x24cbdf32, "dev_set_drvdata" },
	{ 0x49fadb13, "pci_set_master" },
	{ 0xf1b1309d, "dma_supported" },
	{ 0x6676e3e5, "dma_set_mask" },
	{ 0xe67d9c7, "pci_request_regions" },
	{ 0xc1211685, "pci_enable_device" },
	{ 0x7a172b67, "kmem_cache_alloc_trace" },
	{ 0x4d884691, "malloc_sizes" },
	{ 0xcf21d241, "__wake_up" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0xf873629b, "x86_dma_fallback_dev" },
	{ 0xba9eb9d3, "dma_ops" },
	{ 0xc5534d64, "ioread16" },
	{ 0xf9a482f9, "msleep" },
	{ 0x71de9b3f, "_copy_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x91715312, "sprintf" },
	{ 0xf10de535, "ioread8" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x436c2179, "iowrite32" },
	{ 0x71e3cecb, "up" },
	{ 0xe484e35f, "ioread32" },
	{ 0x68aca4ad, "down" },
	{ 0x27e1a049, "printk" },
	{ 0xeb560280, "pci_disable_device" },
	{ 0x5f39b0d8, "pci_release_regions" },
	{ 0xa22e0767, "pci_iounmap" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x68f58ca6, "cdev_del" },
	{ 0x8e489c4f, "debugfs_remove" },
	{ 0x64b410e1, "dev_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e794aa3, "pci_choose_state" },
	{ 0x1309496e, "pci_save_state" },
	{ 0xd6247222, "pci_restore_state" },
	{ 0x2d2ba501, "pci_set_power_state" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000011F0d0000CF02sv*sd*bc*sc*i*");
