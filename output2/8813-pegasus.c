/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/usb/net/pegasus.c

static int pegasus_ethtool_ioctl(struct net_device *dev, void __user *useraddr)
{
copy_from_user(&ethcmd, useraddr, sizeof (ethcmd)))
copy_from_user(&ecmd, useraddr, sizeof (ecmd)))
copy_from_user(&edata, useraddr, sizeof (edata)))
copy_from_user(&ecmd, useraddr, sizeof (ecmd)))
copy_from_user(&edata, useraddr, sizeof (edata)))
}
