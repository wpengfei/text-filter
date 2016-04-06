/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/block/ioctl.c
int blkdev_ioctl(struct block_device *bdev, fmode_t mode, unsigned cmd,
{
case BLKDISCARD:
copy_from_user(range, (void __user *)arg, sizeof(range)))
copy_from_user(range, (void __user *)arg, sizeof(range)))
}
