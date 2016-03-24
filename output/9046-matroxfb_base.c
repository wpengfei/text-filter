/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/video/matrox/matroxfb_base.c
static int matroxfb_ioctl(struct inode *inode, struct file *file,
{
get_user(crt, (u_int32_t __user *)arg))
copy_from_user(&mom, argp, sizeof(mom)))
copy_from_user(&mom, argp, sizeof(mom)))
copy_from_user(&tmp, argp, sizeof(tmp)))
copy_from_user(&qctrl, argp, sizeof(qctrl)))
copy_from_user(&ctrl, argp, sizeof(ctrl)))
copy_from_user(&ctrl, argp, sizeof(ctrl)))
}
