/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/amd8111e.c

static int amd8111e_ethtool_ioctl(struct net_device* dev, void __user *useraddr)
{
copy_from_user (&ethcmd, useraddr, sizeof (ethcmd)))
copy_from_user(&ecmd, useraddr, sizeof(ecmd)))
copy_from_user(&regs, useraddr, sizeof(regs)))
copy_from_user(&wol_info, useraddr, sizeof(wol_info)))
copy_from_user(&ecmd, useraddr, sizeof(ecmd)))
copy_from_user(&regs, useraddr, sizeof(regs)))
copy_from_user(&wol_info, useraddr, sizeof(wol_info)))
copy_from_user(&regs, useraddr, sizeof(regs)))
copy_from_user(&wol_info, useraddr, sizeof(wol_info)))
}
