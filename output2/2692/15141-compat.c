/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/net/compat.c
int cmsghdr_from_user_compat_to_kern(struct msghdr *kmsg,
{
get_user(ucmlen, &ucmsg->cmsg_len))
get_user(ucmlen, &ucmsg->cmsg_len);
}
