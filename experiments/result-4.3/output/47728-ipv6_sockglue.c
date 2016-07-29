/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/ipv6/ipv6_sockglue.c
static int do_ipv6_setsockopt(struct sock *sk, int level, int optname,
{
get_user(val, (int __user *) optval))
case IPV6_PKTINFO:
copy_from_user(&pkt, optval, sizeof(struct in6_pktinfo))) {
case IPV6_2292PKTOPTIONS:
copy_from_user(opt+1, optval, optlen))
case IPV6_DROP_MEMBERSHIP:
copy_from_user(&mreq, optval, sizeof(struct ipv6_mreq)))
case IPV6_LEAVE_ANYCAST:
copy_from_user(&mreq, optval, sizeof(struct ipv6_mreq)))
case MCAST_LEAVE_GROUP:
copy_from_user(&greq, optval, sizeof(struct group_req)))
case MCAST_UNBLOCK_SOURCE:
copy_from_user(&greqs, optval, sizeof(greqs))) {
case MCAST_MSFILTER:
copy_from_user(gsf, optval, optlen)) {
}
static int do_ipv6_getsockopt(struct sock *sk, int level, int optname,
{
get_user(len, optlen))
case MCAST_MSFILTER:
copy_from_user(&gsf, optval, GROUP_FILTER_SIZE(0)))
case IPV6_FLOWLABEL_MGR:
copy_from_user(&freq, optval, sizeof(freq)))
}
