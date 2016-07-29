/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/net/bluetooth/bnep/sock.c
static int bnep_sock_compat_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
{
get_user(cl.cnum, (u32 __user *) arg) ||
get_user(uci, (u32 __user *) (arg + 4)))
}
