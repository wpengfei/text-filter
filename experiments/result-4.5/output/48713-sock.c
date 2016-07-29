/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/net/bluetooth/hidp/sock.c
static int hidp_sock_compat_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
{
get_user(cl.cnum, (u32 __user *) arg) ||
get_user(uci, (u32 __user *) (arg + 4)))
copy_from_user(&ca, (void __user *) arg, sizeof(ca)))
}
