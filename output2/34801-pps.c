/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/pps/pps.c
static long pps_cdev_ioctl(struct file *file,
{
case PPS_GETCAP:
copy_from_user(&fdata, uarg, sizeof(struct pps_fdata));
copy_from_user(&bind_args, uarg,
}
