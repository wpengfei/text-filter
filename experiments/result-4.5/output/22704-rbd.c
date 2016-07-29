/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/block/rbd.c
static int rbd_ioctl_set_ro(struct rbd_device *rbd_dev, unsigned long arg)
{
get_user() may sleep, so call it before taking rbd_dev->lock */
get_user(val, (int __user *)(arg)))
}
