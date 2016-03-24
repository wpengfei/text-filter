/Users/wpf/Desktop/log/test/linux-2.6.9/net/ipv4/raw.c
static void raw_probe_proto_opt(struct flowi *fl, struct msghdr *msg)
{
get_user(fl->fl_icmp_type, type);
get_user(fl->fl_icmp_code, code);
}
