/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/sbus/char/riowatchdog.c
static int riowd_ioctl(struct inode *inode, struct file *filp,
{
copy_from_user(&options, argp, sizeof(options)))
get_user(new_margin, (int __user *)argp))
}
