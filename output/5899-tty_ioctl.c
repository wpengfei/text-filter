/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/tty_ioctl.c
int n_tty_ioctl(struct tty_struct * tty, struct file * file,
{
get_user(pktmode, (int __user *) arg))
get_user(arg, (unsigned int __user *) arg))
}
