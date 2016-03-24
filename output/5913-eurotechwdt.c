/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/watchdog/eurotechwdt.c
static int eurwdt_ioctl(struct inode *inode, struct file *file,
{
copy_from_user(&time, p, sizeof(int)))
get_user(options, p))
}
