/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/compat.c
int get_compat_msghdr(struct msghdr *kmsg,
{
get_user(uaddr, &umsg->msg_name) ||
get_user(kmsg->msg_namelen, &umsg->msg_namelen) ||
get_user(uiov, &umsg->msg_iov) ||
get_user(nr_segs, &umsg->msg_iovlen) ||
get_user(tmp3, &umsg->msg_control) ||
get_user(kmsg->msg_controllen, &umsg->msg_controllen) ||
get_user(kmsg->msg_flags, &umsg->msg_flags))
}
int cmsghdr_from_user_compat_to_kern(struct msghdr *kmsg, struct sock *sk,
{
get_user(ucmlen, &ucmsg->cmsg_len))
get_user(ucmlen, &ucmsg->cmsg_len))
get_user(kcmsg->cmsg_level, &ucmsg->cmsg_level) ||
get_user(kcmsg->cmsg_type, &ucmsg->cmsg_type) ||
copy_from_user(CMSG_DATA(kcmsg),
}
static int do_set_attach_filter(struct socket *sock, int level, int optname,
{
get_user(len, &fprog32->len) ||
get_user(ptr, &fprog32->filter) ||
}
static int do_set_sock_timeout(struct socket *sock, int level,
{
get_user(ktime.tv_sec, &up->tv_sec) ||
get_user(ktime.tv_usec, &up->tv_usec))
}
int compat_mc_setsockopt(struct sock *sock, int level, int optname,
{
case MCAST_MSFILTER:
get_user(interface, &gf32->gf_interface) ||
get_user(fmode, &gf32->gf_fmode) ||
get_user(numsrc, &gf32->gf_numsrc))
}
int compat_mc_getsockopt(struct sock *sock, int level, int optname,
{
get_user(ulen, optlen))
get_user(interface, &gf32->gf_interface) ||
get_user(fmode, &gf32->gf_fmode) ||
get_user(numsrc, &gf32->gf_numsrc) ||
get_user(klen, koptlen))
get_user(interface, &kgf->gf_interface) ||
get_user(fmode, &kgf->gf_fmode) ||
get_user(numsrc, &kgf->gf_numsrc) ||
}
