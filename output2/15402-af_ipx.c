/Users/wpf/Desktop/log/test/linux-2.6.9/net/ipx/af_ipx.c

static int ipxitf_ioctl(unsigned int cmd, void __user *arg)
{
copy_from_user(&ifr, arg, sizeof(ifr)))
copy_from_user(&ifr, arg, sizeof(ifr)))
get_user(val, (unsigned char __user *) arg))
get_user(val, (unsigned char __user *) arg))
}
