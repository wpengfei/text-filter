/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/ax25/af_ax25.c
static int ax25_setsockopt(struct socket *sock, int level, int optname,
{
get_user(opt, (unsigned int __user *)optval))
case SO_BINDTODEVICE:
copy_from_user(devname, optval, optlen)) {
}
