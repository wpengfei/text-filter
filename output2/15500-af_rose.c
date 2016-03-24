/Users/wpf/Desktop/log/test/linux-2.6.9/net/rose/af_rose.c

static int rose_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
{
copy_from_user(&rose_cause, argp, sizeof(struct rose_cause_struct)))
copy_from_user(&rose_callsign, argp, sizeof(ax25_address)))
}
