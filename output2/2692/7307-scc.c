/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/drivers/net/hamradio/scc.c
static int scc_net_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
{
copy_from_user(&hwcfg, arg, sizeof(hwcfg)))
copy_from_user(&scc->modem, arg, sizeof(struct scc_modem)))
copy_from_user(&memcfg, arg, sizeof(memcfg)))
copy_from_user(&kiss_cmd, arg, sizeof(kiss_cmd)))
copy_from_user(&kiss_cmd, arg, sizeof(kiss_cmd)))
copy_from_user(&cal, arg, sizeof(cal)) || cal.time == 0)
}
