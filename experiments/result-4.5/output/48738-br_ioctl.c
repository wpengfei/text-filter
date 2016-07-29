/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/net/bridge/br_ioctl.c
static int old_deviceless(struct net *net, void __user *uarg)
{
copy_from_user(args, uarg, sizeof(args)))
case BRCTL_DEL_BRIDGE:
copy_from_user(buf, (void __user *)args[1], IFNAMSIZ))
}
