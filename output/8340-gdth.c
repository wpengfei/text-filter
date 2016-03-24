/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/scsi/gdth.c
static int ioc_general(void __user *arg, char *cmnd)
{
copy_from_user(&gen, arg, sizeof(gdth_ioctl_general)) ||
copy_from_user(buf, arg + sizeof(gdth_ioctl_general),  
}
static int gdth_ioctl(struct inode *inode, struct file *filep,
{
copy_from_user(&ctrt, argp, sizeof(gdth_ioctl_ctrtype)) ||
copy_from_user(&lchn, argp, sizeof(gdth_ioctl_lockchn)) ||
copy_from_user(&res, argp, sizeof(gdth_ioctl_reset)) ||
}
