/Users/wpf/Desktop/log/test/linux-2.6.9/net/bluetooth/l2cap.c
static int l2cap_sock_setsockopt(struct socket *sock, int level, int optname, char __user *optval, int optlen)
{
copy_from_user((char *)&opts, optval, len)) {
get_user(opt, (u32 __user *)optval)) {
}
