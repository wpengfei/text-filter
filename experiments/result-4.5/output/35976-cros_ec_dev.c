/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/platform/chrome/cros_ec_dev.c
static long ec_device_ioctl_xcmd(struct cros_ec_dev *ec, void __user *arg)
{
copy_from_user(&u_cmd, arg, sizeof(u_cmd)))
copy_from_user(s_cmd, arg, sizeof(*s_cmd) + u_cmd.outsize)) {
}
