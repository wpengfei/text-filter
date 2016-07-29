/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/net/ipv4/ip_sockglue.c
static int do_ip_setsockopt(struct sock *sk, int level,
{
case IP_MULTICAST_IF:
copy_from_user(&mreq, optval, sizeof(mreq)))
copy_from_user(&mreq, optval,
copy_from_user(&mreq.imr_address, optval,
case IP_DROP_MEMBERSHIP:
copy_from_user(&mreq, optval, sizeof(mreq)))
copy_from_user(&mreq, optval, sizeof(struct ip_mreq)))
}
