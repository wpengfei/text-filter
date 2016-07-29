/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/block/ioctl.c
static int blkpg_ioctl(struct block_device *bdev, struct blkpg_ioctl_arg __user *arg)
{
copy_from_user(&a, arg, sizeof(struct blkpg_ioctl_arg)))
copy_from_user(&p, a.data, sizeof(struct blkpg_partition)))
}
