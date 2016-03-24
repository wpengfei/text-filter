/Users/wpf/Desktop/log/test/linux-2.6.9/net/irda/af_irda.c
static int irda_setsockopt(struct socket *sock, int level, int optname,
{
copy_from_user(ias_opt, optval, optlen)) {
copy_from_user(ias_opt, optval, optlen)) {
get_user(opt, (int __user *)optval))
get_user(opt, (int __user *)optval))
get_user(opt, (int __user *)optval))
}
static int irda_getsockopt(struct socket *sock, int level, int optname,
{
get_user(len, optlen))
copy_from_user(ias_opt, optval, len)) {
copy_from_user(ias_opt, optval, len)) {
get_user(val, (int __user *)optval))
}
