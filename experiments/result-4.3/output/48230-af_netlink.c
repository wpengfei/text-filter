/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/netlink/af_netlink.c
static int netlink_setsockopt(struct socket *sock, int level, int optname,
{
get_user(val, (unsigned int __user *)optval))
case NETLINK_TX_RING: {
copy_from_user(&req, optval, sizeof(req)))
}
