/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/char/ppdev.c
static int pp_do_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
case PPFCONTROL:
copy_from_user (&mask, argp,
copy_from_user (&reg, 1 + (unsigned char __user *) arg,
}
