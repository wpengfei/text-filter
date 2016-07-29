/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/sctp/socket.c
static int sctp_getsockopt_connectx3(struct sock *sk, int len,
{
copy_from_user(&param32, optval, sizeof(param32)))
copy_from_user(&param, optval, sizeof(param)))
}
static int sctp_setsockopt_delayed_ack(struct sock *sk,
{
copy_from_user(&params, optval, optlen))
copy_from_user(&params, optval, optlen))
}
static int sctp_setsockopt_maxseg(struct sock *sk, char __user *optval, unsigned int optlen)
{
copy_from_user(&val, optval, optlen))
copy_from_user(&params, optval, optlen))
}
static int sctp_setsockopt_maxburst(struct sock *sk,
{
copy_from_user(&val, optval, optlen))
copy_from_user(&params, optval, optlen))
}
static int sctp_getsockopt_delayed_ack(struct sock *sk, int len,
{
copy_from_user(&params, optval, len))
copy_from_user(&params, optval, len))
}
