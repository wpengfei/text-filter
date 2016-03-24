/Users/wpf/Desktop/log/test/linux-2.6.9/net/compat.c
static inline int iov_from_user_compat_to_kern(struct iovec *kiov,
{
get_user(len, &uiov32->iov_len) ||
get_user(buf, &uiov32->iov_base)) {
}
int get_compat_msghdr(struct msghdr *kmsg, struct compat_msghdr __user *umsg)
{
get_user(tmp1, &umsg->msg_name) ||
get_user(kmsg->msg_namelen, &umsg->msg_namelen) ||
get_user(tmp2, &umsg->msg_iov) ||
get_user(kmsg->msg_iovlen, &umsg->msg_iovlen) ||
get_user(tmp3, &umsg->msg_control) ||
get_user(kmsg->msg_controllen, &umsg->msg_controllen) ||
get_user(kmsg->msg_flags, &umsg->msg_flags))
}
int cmsghdr_from_user_compat_to_kern(struct msghdr *kmsg,
{
get_user(ucmlen, &ucmsg->cmsg_len))
get_user(ucmlen, &ucmsg->cmsg_len);
get_user(kcmsg->cmsg_level, &ucmsg->cmsg_level);
get_user(kcmsg->cmsg_type, &ucmsg->cmsg_type);
copy_from_user(CMSG_DATA(kcmsg),
}
static int do_netfilter_replace(int fd, int level, int optname,
{
get_user(origsize, &urepl->size))
copy_from_user(name, urepl->name, sizeof(urepl->name)) ||
get_user(tmp32, &urepl->valid_hooks) ||
get_user(tmp32, &urepl->num_entries) ||
get_user(num_counters, &urepl->num_counters) ||
get_user(ucntrs, &urepl->counters) ||
get_user(tmp32, &urepl->hook_entry[i]) ||
get_user(tmp32, &urepl->underflow[i]) ||
}
static int do_set_attach_filter(int fd, int level, int optname,
{
get_user(len, &fprog32->len) ||
get_user(ptr, &fprog32->filter) ||
}
static int do_set_sock_timeout(int fd, int level, int optname, char __user *optval, int optlen)
{
get_user(ktime.tv_sec, &up->tv_sec) ||
get_user(ktime.tv_usec, &up->tv_usec))
}
