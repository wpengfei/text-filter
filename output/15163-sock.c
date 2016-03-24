/Users/wpf/Desktop/log/test/linux-2.6.9/net/core/sock.c
int sock_setsockopt(struct socket *sock, int level, int optname,
{
get_user(val, (int __user *)optval))
copy_from_user(&ling,optval,sizeof(ling))) {
copy_from_user(devname, optval, optlen)) {
copy_from_user(&fprog, optval, sizeof(fprog)))
}
