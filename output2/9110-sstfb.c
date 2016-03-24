/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/video/sstfb.c

static int sstfb_ioctl(struct inode *inode, struct file *file,
{
copy_from_user(&val, (void __user *)arg, sizeof(val)))
copy_from_user(&val, (void __user *)arg, sizeof(val)))
}
