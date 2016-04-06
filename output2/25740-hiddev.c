/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/hid/usbhid/hiddev.c
static noinline int hiddev_ioctl_usage(struct hiddev *hiddev, unsigned int cmd, void __user *user_arg)
{
copy_from_user(uref_multi, user_arg,
copy_from_user(uref, user_arg, sizeof(*uref)))
}
