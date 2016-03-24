/Users/wpf/Desktop/log/test/linux-2.6.9/net/ipv4/ip_sockglue.c
int ip_setsockopt(struct sock *sk, int level, int optname, char __user *optval, int optlen)
{
get_user(val, (int __user *) optval))
get_user(ucval, (unsigned char __user *) optval))
copy_from_user(&mreq,optval,sizeof(mreq)))
copy_from_user(&mreq.imr_address,optval,sizeof(struct in_addr)))
copy_from_user(&mreq,optval,sizeof(mreq)))
copy_from_user(&mreq,optval,sizeof(struct ip_mreq)))
copy_from_user(msf, optval, optlen)) {
copy_from_user(&mreqs, optval, sizeof(mreqs))) {
copy_from_user(&greq, optval, sizeof(greq)))
copy_from_user(&greqs, optval, sizeof(greqs))) {
copy_from_user(gsf, optval, optlen)) {
}
int ip_getsockopt(struct sock *sk, int level, int optname, char __user *optval, int __user *optlen)
{
get_user(len,optlen))
copy_from_user(&msf, optval, IP_MSFILTER_SIZE(0))) {
copy_from_user(&gsf, optval, GROUP_FILTER_SIZE(0))) {
}
