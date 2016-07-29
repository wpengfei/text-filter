/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/media/dvb-core/dvb_frontend.c
static int dvb_frontend_ioctl_properties(struct file *file,
{
copy_from_user(tvp, (void __user *)tvps->props,
copy_from_user(tvp, (void __user *)tvps->props,
}
