/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/xen/evtchn.c
static long evtchn_ioctl(struct file *file,
{
copy_from_user(&bind, uarg, sizeof(bind)))
copy_from_user(&bind, uarg, sizeof(bind)))
copy_from_user(&bind, uarg, sizeof(bind)))
copy_from_user(&unbind, uarg, sizeof(unbind)))
copy_from_user(&notify, uarg, sizeof(notify)))
}
