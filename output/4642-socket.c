/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/solaris/socket.c
static inline int msghdr_from_user32_to_kern(struct msghdr *kmsg,
{
get_user(tmp1, &umsg->msg_name);
get_user(tmp2, &umsg->msg_iov);
get_user(tmp3, &umsg->msg_control);
get_user(kmsg->msg_namelen, &umsg->msg_namelen);
get_user(kmsg->msg_controllen, &umsg->msg_controllen);
get_user(kmsg->msg_flags, &umsg->msg_flags);
}
asmlinkage int solaris_sendmsg(int fd, struct sol_nmsghdr __user *user_msg, unsigned user_flags)
{
get_user(cmlen, &ucmsg->cmsg_len);
copy_from_user(kcmsg, &ucmsg->cmsg_level,
}
