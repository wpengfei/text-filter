/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/x25/af_x25.c
static int x25_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
{
case SIOCX25SSUBSCRIP:
copy_from_user(&facilities, argp, sizeof(facilities)))
copy_from_user(&dtefacs, argp, sizeof(dtefacs)))
copy_from_user(&calluserdata, argp, sizeof(calluserdata)))
copy_from_user(&causediag, argp, sizeof(causediag)))
copy_from_user(&sub_addr, argp,
}
