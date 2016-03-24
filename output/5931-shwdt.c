/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/watchdog/shwdt.c
static int sh_wdt_ioctl(struct inode *inode, struct file *file,
{
get_user(new_heartbeat, (int *)arg))
get_user(options, (int *)arg))
}
