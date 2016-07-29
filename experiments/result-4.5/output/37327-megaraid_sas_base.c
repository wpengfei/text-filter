/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/scsi/megaraid/megaraid_sas_base.c
static int megasas_mgmt_compat_ioctl_fw(struct file *file, unsigned long arg)
{
get_user(local_raw_ptr, ioc->frame.raw) ||
get_user(local_sense_off, &ioc->sense_off) ||
get_user(local_sense_len, &ioc->sense_len))
get_user(ptr, sense_cioc_ptr) ||
get_user(ptr, &cioc->sgl[i].iov_base) ||
}
