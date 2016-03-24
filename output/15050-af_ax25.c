/Users/wpf/Desktop/log/test/linux-2.6.9/net/ax25/af_ax25.c
static int ax25_setsockopt(struct socket *sock, int level, int optname,
{
get_user(opt, (int __user *)optval))
copy_from_user(devname, optval, optlen)) {
}
static int ax25_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
{
copy_from_user(&sax25, argp, sizeof(sax25))) {
get_user(amount, (long __user *)argp)) {
copy_from_user(&ax25_fwd, argp, sizeof(ax25_fwd))) {
}
