/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/net/ipv4/tcp.c
int tcp_getsockopt(struct sock *sk, int level, int optname, char __user *optval,
{
get_user(len, optlen))
case TCP_WINDOW_CLAMP:
get_user(len, optlen))
}
