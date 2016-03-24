/Users/wpf/Desktop/log/test/linux-2.6.9/net/atm/common.c
int vcc_setsockopt(struct socket *sock, int level, int optname,
{
copy_from_user(&qos,optval,sizeof(qos)))
get_user(value,(unsigned long __user *)optval))
}
