/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/drivers/net/eepro100.c
static int netdev_ethtool_ioctl(struct net_device *dev, void __user *useraddr)
{
copy_from_user(&ethcmd, useraddr, sizeof(ethcmd)))
copy_from_user(&ecmd, useraddr, sizeof(ecmd)))
copy_from_user(&edata, useraddr, sizeof(edata)))
}
