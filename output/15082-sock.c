/Users/wpf/Desktop/log/test/linux-2.6.9/net/bluetooth/cmtp/sock.c
static int cmtp_sock_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
{
copy_from_user(&ca, argp, sizeof(ca)))
copy_from_user(&cd, argp, sizeof(cd)))
copy_from_user(&cl, argp, sizeof(cl)))
copy_from_user(&ci, argp, sizeof(ci)))
}