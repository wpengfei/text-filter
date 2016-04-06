/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/drivers/cdrom/sjcd.c
static int sjcd_ioctl(struct inode *ip, struct file *fp,
{
copy_from_user(&sjcd_msf, argp,
copy_from_user(&toc_entry, argp,
copy_from_user(&subchnl, argp,
copy_from_user(&vol_ctrl, argp,
}
