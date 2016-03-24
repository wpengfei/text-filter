/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/usb/net/rtl8150.c
static int rtl8150_ethtool_ioctl(struct net_device *netdev, void __user *uaddr)
{
get_user(cmd, (int __user *) uaddr))
copy_from_user(&ecmd, uaddr, sizeof(ecmd)))
}
