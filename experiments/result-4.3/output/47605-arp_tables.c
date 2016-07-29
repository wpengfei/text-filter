/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/ipv4/netfilter/arp_tables.c
static int do_replace(struct net *net, const void __user *user,
{
copy_from_user(&tmp, user, sizeof(tmp)) != 0)
copy_from_user(loc_cpu_entry, user + sizeof(tmp),
}
static int do_add_counters(struct net *net, const void __user *user,
{
copy_from_user(ptmp, user, size) != 0)
copy_from_user(paddc, user + size, len - size) != 0) {
}
static int compat_do_replace(struct net *net, void __user *user,
{
copy_from_user(&tmp, user, sizeof(tmp)) != 0)
copy_from_user(loc_cpu_entry, user + sizeof(tmp), tmp.size) != 0) {
}
