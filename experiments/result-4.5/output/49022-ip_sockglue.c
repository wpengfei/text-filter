/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/net/ipv4/ip_sockglue.c
static int do_ip_setsockopt(struct sock *sk, int level,
{
case IP_CHECKSUM:
get_user(val, (int __user *) optval))
get_user(ucval, (unsigned char __user *) optval))
case IP_MULTICAST_IF:
copy_from_user(&mreq, optval, sizeof(mreq)))
copy_from_user(&mreq, optval,
copy_from_user(&mreq.imr_address, optval,
case IP_DROP_MEMBERSHIP:
copy_from_user(&mreq, optval, sizeof(mreq)))
copy_from_user(&mreq, optval, sizeof(struct ip_mreq)))
}
static int do_ip_getsockopt(struct sock *sk, int level, int optname,
{
get_user(len, optlen))
case IP_MSFILTER:
copy_from_user(&msf, optval, IP_MSFILTER_SIZE(0))) {
case MCAST_MSFILTER:
copy_from_user(&gsf, optval, GROUP_FILTER_SIZE(0))) {
}
