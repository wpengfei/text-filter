/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/net/tun.c
static long __tun_chr_ioctl(struct file *file, unsigned int cmd,
{
copy_from_user(&ifr, argp, ifreq_len))
copy_from_user(&ifindex, argp, sizeof(ifindex)))
copy_from_user(&tun->fprog, argp, sizeof(tun->fprog)))
}
