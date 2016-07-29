/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/packet/af_packet.c
static int packet_getsockopt(struct socket *sock, int level, int optname,
{
get_user(len, optlen))
case PACKET_HDRLEN:
copy_from_user(&val, optval, len))
}
