/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/cdrom/sjcd.c

static int sjcd_ioctl(struct inode *ip, struct file *fp,
{
copy_from_user(&ti, argp, sizeof(ti))) {
copy_from_user(&sjcd_msf, argp,
copy_from_user(&toc_entry, argp,
copy_from_user(&subchnl, argp,
copy_from_user(&vol_ctrl, argp,
copy_from_user(&sjcd_msf, argp,
copy_from_user(&toc_entry, argp,
copy_from_user(&subchnl, argp,
copy_from_user(&vol_ctrl, argp,
copy_from_user(&toc_entry, argp,
copy_from_user(&subchnl, argp,
copy_from_user(&vol_ctrl, argp,
copy_from_user(&subchnl, argp,
copy_from_user(&vol_ctrl, argp,
}
