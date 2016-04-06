/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/tty/mxser.c
static int mxser_ioctl(struct tty_struct *tty,
{
get_user(opmode, (int __user *) argp))
case MOXA_SDS_RSTICOUNTER:
get_user(method, (int __user *)argp))
}
