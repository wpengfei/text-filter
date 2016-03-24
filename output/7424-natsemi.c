/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/natsemi.c
static int netdev_ethtool_ioctl(struct net_device *dev, void __user *useraddr)
{
get_user(cmd, (u32 __user *)useraddr))
copy_from_user(&ecmd, useraddr, sizeof(ecmd)))
copy_from_user(&wol, useraddr, sizeof(wol)))
copy_from_user(&regs, useraddr, sizeof(regs)))
copy_from_user(&edata, useraddr, sizeof(edata)))
copy_from_user(&eeprom, useraddr, sizeof(eeprom)))
}
