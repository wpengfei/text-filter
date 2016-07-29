/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/staging/ft1000/ft1000-usb/ft1000_debug.c
static long ft1000_ioctl(struct file *file, unsigned int command,
{
case IOCTL_REGISTER_CMD:
get_user(tempword, (__u16 __user *)argp);
get_user\n", result);
case IOCTL_SET_DPRAM_CMD:
get_user(msgsz, (__u16 __user *)argp);
copy_from_user(dpram_data, argp, msgsz+2)) {
}
