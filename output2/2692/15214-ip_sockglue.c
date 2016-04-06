/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/net/ipv4/ip_sockglue.c
int ip_setsockopt(struct sock *sk, int level, int optname, char __user *optval, int optlen)
{
copy_from_user(&mreq,optval,sizeof(mreq)))
copy_from_user(&mreq.imr_address,optval,sizeof(struct in_addr)))
copy_from_user(&mreq,optval,sizeof(mreq)))
copy_from_user(&mreq,optval,sizeof(struct ip_mreq)))
copy_from_user(&greq, optval, sizeof(greq)))
}
