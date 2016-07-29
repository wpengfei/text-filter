/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/compat.c
int cmsghdr_from_user_compat_to_kern(struct msghdr *kmsg, struct sock *sk,
{
get_user(ucmlen, &ucmsg->cmsg_len))
get_user(ucmlen, &ucmsg->cmsg_len))
}
