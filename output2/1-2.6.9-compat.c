/Users/wpf/Desktop/log/test/2.6.9-compat.c

int cmsghdr_from_user_compat_to_kern(struct msghdr *kmsg,
{
get_user(ucmlen, &ucmsg->cmsg_len))            //[2]
get_user(ucmlen, &ucmsg->cmsg_len);         //[6] //即代码在[2]~[6]执行时，ucmlen值有被更改的风险
}
