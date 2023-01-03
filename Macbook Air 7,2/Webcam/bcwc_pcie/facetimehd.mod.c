#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xb3753869, "module_layout" },
	{ 0x663d7ed3, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x35216b26, "kmalloc_caches" },
	{ 0x944a1bf0, "v4l2_event_unsubscribe" },
	{ 0xf7d2d6a1, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x482f483e, "pci_release_region" },
	{ 0x40e30d71, "debugfs_create_dir" },
	{ 0xc5e74216, "release_resource" },
	{ 0xe6f74edf, "video_device_release" },
	{ 0xd8fd6a9a, "dma_set_mask" },
	{ 0x9d92d642, "vb2_wait_for_all_buffers" },
	{ 0xae630ce8, "pci_disable_device" },
	{ 0x57c32fc7, "v4l2_device_unregister" },
	{ 0xb12f10e5, "v4l2_ctrl_handler_free" },
	{ 0xd8c62461, "v4l2_ctrl_new_std" },
	{ 0x17cd3645, "vb2_fop_poll" },
	{ 0x6ff4abe, "vb2_ioctl_streamon" },
	{ 0xd981b7ff, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x4ad39271, "vb2_ops_wait_prepare" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x282da2ef, "__video_register_device" },
	{ 0x921ec64f, "debugfs_create_file" },
	{ 0x638c6409, "debugfs_remove_recursive" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0x36e58bcd, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x32ffdcca, "dma_set_coherent_mask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe8f4e12b, "v4l2_device_register" },
	{ 0x9f3059d4, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfee56dca, "pci_set_master" },
	{ 0x6d6cd150, "_dev_warn" },
	{ 0x6e991f60, "default_llseek" },
	{ 0x54677b1a, "video_device_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9cc66d12, "vb2_fop_mmap" },
	{ 0x7228993d, "vb2_ioctl_qbuf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd5b2a1ae, "video_unregister_device" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0x630014ec, "v4l2_ctrl_subscribe_event" },
	{ 0xfe14f908, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xcdcb0e0f, "vb2_ioctl_create_bufs" },
	{ 0xc2905e02, "simple_open" },
	{ 0x18616700, "_dev_err" },
	{ 0xdd69547d, "pci_enable_msi" },
	{ 0x110ae24b, "vb2_ioctl_dqbuf" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x16924934, "vb2_plane_cookie" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x3b823a96, "_dev_info" },
	{ 0xf1036f24, "pci_disable_link_state" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa9123221, "vb2_fop_release" },
	{ 0x30b7bde1, "video_devdata" },
	{ 0x72e9894, "debugfs_create_devm_seqfile" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2d5e3af0, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x478f00e1, "pci_unregister_driver" },
	{ 0xf5cb25c8, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb7aaffdf, "v4l2_fh_open" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2d4bdeb8, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x40fb189c, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0xf83c1282, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xf5d6462f, "v4l2_ctrl_handler_init_class" },
	{ 0x24694125, "__pci_register_driver" },
	{ 0xae384beb, "request_firmware" },
	{ 0xae404004, "vb2_ops_wait_finish" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8086e242, "vb2_ioctl_expbuf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9d4dcbaf, "vb2_ioctl_streamoff" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x42980214, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x47ff291, "is_acpi_device_node" },
	{ 0x77106d4c, "release_firmware" },
	{ 0x8905d75f, "video_ioctl2" },
	{ 0xf32e6adb, "pci_request_region" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe484e35f, "ioread32" },
	{ 0x17699ede, "vb2_dma_sg_memops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x966eefe6, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-dma-sg");

MODULE_ALIAS("pci:v000014E4d00001570sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A3137A371B7C26E9B3B21E6");
