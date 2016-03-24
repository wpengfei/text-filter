/Users/wpf/Desktop/log/test/linux-2.6.9/net/ipv6/ipv6_sockglue.c
int ipv6_setsockopt(struct sock *sk, int level, int optname,
{
get_user(val, (int __user *) optval))
copy_from_user(opt+1, optval, optlen))
copy_from_user(&mreq, optval, sizeof(struct ipv6_mreq)))
copy_from_user(&mreq, optval, sizeof(struct ipv6_mreq)))
copy_from_user(&greq, optval, sizeof(struct group_req)))
copy_from_user(&greqs, optval, sizeof(greqs))) {
copy_from_user(gsf, optval, optlen)) {
}
int ipv6_getsockopt(struct sock *sk, int level, int optname,
{
get_user(len, optlen))
copy_from_user(&gsf, optval, GROUP_FILTER_SIZE(0)))
}
