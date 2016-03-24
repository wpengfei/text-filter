/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/scsi/gdth.c

static int gdth_ioctl(struct inode *inode, struct file *filep,
{
copy_from_user(&ctrt, argp, sizeof(gdth_ioctl_ctrtype)) ||
copy_from_user(&lchn, argp, sizeof(gdth_ioctl_lockchn)) ||
copy_from_user(&res, argp, sizeof(gdth_ioctl_reset)) ||
copy_from_user(&lchn, argp, sizeof(gdth_ioctl_lockchn)) ||
copy_from_user(&res, argp, sizeof(gdth_ioctl_reset)) ||
}
