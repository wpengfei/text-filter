/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/net/x25/af_x25.c
static int x25_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
{
case SIOCX25SSUBSCRIP:
copy_from_user(&facilities, argp,
copy_from_user(&calluserdata, argp,
}
