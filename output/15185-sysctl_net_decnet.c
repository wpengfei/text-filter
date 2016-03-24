/Users/wpf/Desktop/log/test/linux-2.6.9/net/decnet/sysctl_net_decnet.c
static int dn_node_address_strategy(ctl_table *table, int __user *name, int nlen,
{
get_user(len, oldlenp))
get_user(addr, (unsigned short __user *)newval))
}
static int dn_def_dev_strategy(ctl_table *table, int __user *name, int nlen,
{
get_user(len, oldlenp))
copy_from_user(devname, newval, newlen))
}
