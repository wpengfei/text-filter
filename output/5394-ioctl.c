/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/block/ioctl.c
static int blkpg_ioctl(struct block_device *bdev, struct blkpg_ioctl_arg __user *arg)
{
copy_from_user(&a, arg, sizeof(struct blkpg_ioctl_arg)))
copy_from_user(&p, a.data, sizeof(struct blkpg_partition)))
}
int blkdev_ioctl(struct inode *inode, struct file *file, unsigned cmd,
{
get_user(n, (int __user *) arg))
get_user(n, (int __user *)(arg)))
}
