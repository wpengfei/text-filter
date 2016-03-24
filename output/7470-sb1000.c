/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/sb1000.c
static int sb1000_dev_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
{
get_user(frequency, (int __user *) ifr->ifr_data))
copy_from_user(PID, ifr->ifr_data, sizeof(PID)))
}
