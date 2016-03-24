/Users/wpf/Desktop/log/test/linux-2.6.9/net/ipv6/raw.c
static void rawv6_probe_proto_opt(struct flowi *fl, struct msghdr *msg)
{
get_user(fl->fl_icmp_type, type);
get_user(fl->fl_icmp_code, code);
}
