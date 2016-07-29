/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/misc/vmw_vmci/vmci_host.c
static int vmci_host_do_send_datagram(struct vmci_host_dev *vmci_host_dev,
{
copy_from_user(&send_info, uptr, sizeof(send_info)))
copy_from_user(dg, (void __user *)(uintptr_t)send_info.addr,
}
static int vmci_host_do_alloc_queuepair(struct vmci_host_dev *vmci_host_dev,
{
copy_from_user(&alloc_info, uptr, sizeof(alloc_info)))
copy_from_user(&alloc_info, uptr, sizeof(alloc_info)))
}
static int vmci_host_do_ctx_set_cpt_state(struct vmci_host_dev *vmci_host_dev,
{
copy_from_user(&set_info, uptr, sizeof(set_info)))
copy_from_user(cpt_buf, (void __user *)(uintptr_t)set_info.cpt_buf,
}
