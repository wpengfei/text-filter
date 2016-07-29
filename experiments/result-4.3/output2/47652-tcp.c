/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/ipv4/tcp.c
static int do_tcp_getsockopt(struct sock *sk, int level,
{
get_user(len, optlen))
case TCP_INFO: {
get_user(len, optlen))
case TCP_CC_INFO: {
get_user(len, optlen))
case TCP_CONGESTION:
get_user(len, optlen))
case TCP_SAVED_SYN: {
get_user(len, optlen))
}
