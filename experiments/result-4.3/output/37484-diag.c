/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/staging/rdma/hfi1/diag.c
static ssize_t hfi1_snoop_write(struct file *fp, const char __user *data,
{
copy_from_user(&byte_one, data, 1))
copy_from_user(&byte_two, data+1, 1))
copy_from_user(&pbc, data, sizeof(pbc)))
}
static long hfi1_ioctl(struct file *fp, unsigned int cmd, unsigned long arg)
{
case HFI1_SNOOP_IOCGETLINKSTATE_EXTRA:
copy_from_user(&link_info,
get_user(index, (int __user *) arg);
case HFI1_SNOOP_IOCSETFILTER:
copy_from_user(&filter_cmd, (void __user *)argp,
copy_from_user((u8 *)filter_value,
}
