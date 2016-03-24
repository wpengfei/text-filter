/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/block/ioctl.c

int blkdev_ioctl(struct inode *inode, struct file *file, unsigned cmd,
{
get_user(n, (int __user *) arg))
get_user(n, (int __user *)(arg)))
}
