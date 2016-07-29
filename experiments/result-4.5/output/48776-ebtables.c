/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/net/bridge/netfilter/ebtables.c
static int do_replace(struct net *net, const void __user *user,
{
copy_from_user(&tmp, user, sizeof(tmp)) != 0)
copy_from_user(
}
