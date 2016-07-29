/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/irda/af_irda.c
static int irda_getsockopt(struct socket *sock, int level, int optname,
{
get_user(len, optlen))
case IRLMP_IAS_GET:
copy_from_user(ias_opt, optval, len)) {
case IRLMP_IAS_QUERY:
copy_from_user(ias_opt, optval, len)) {
case IRLMP_WAITDEVICE:
get_user(val, (int __user *)optval)) {
}
