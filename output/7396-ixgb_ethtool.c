/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/ixgb/ixgb_ethtool.c
int ixgb_ethtool_ioctl(struct net_device *netdev, struct ifreq *ifr)
{
get_user(cmd, (uint32_t __user *) addr))
copy_from_user(&ecmd, addr, sizeof(ecmd)))
copy_from_user(&gstrings, addr, sizeof(gstrings)))
copy_from_user(&regs, addr, sizeof(regs)))
copy_from_user(&id, addr, sizeof(id)))
copy_from_user(&eeprom, addr, sizeof(eeprom)))
copy_from_user(&eeprom, addr, sizeof(eeprom)))
copy_from_user(&epause, addr, sizeof(epause)))
copy_from_user(&edata, addr, sizeof(edata)))
copy_from_user(&edata, addr, sizeof(edata)))
copy_from_user(&edata, addr, sizeof(edata)))
copy_from_user(&edata, addr, sizeof(edata)))
}