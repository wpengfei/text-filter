/Users/wpf/Desktop/log/test/linux-2.6.9/net/core/ethtool.c
static int ethtool_get_eeprom(struct net_device *dev, void __user *useraddr)
{
copy_from_user(&eeprom, useraddr, sizeof(eeprom)))
copy_from_user(data, useraddr + sizeof(eeprom), eeprom.len))
}
static int ethtool_set_eeprom(struct net_device *dev, void __user *useraddr)
{
copy_from_user(&eeprom, useraddr, sizeof(eeprom)))
copy_from_user(data, useraddr + sizeof(eeprom), eeprom.len))
}
