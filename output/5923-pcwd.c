/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/watchdog/pcwd.c
static int pcwd_ioctl(struct inode *inode, struct file *file,
{
copy_from_user(&rv, argp, sizeof(int)))
get_user(new_heartbeat, argp))
}
