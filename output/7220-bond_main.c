/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/bonding/bond_main.c
static int bond_ethtool_ioctl(struct net_device *bond_dev, struct ifreq *ifr)
{
get_user(cmd, (uint32_t __user *)addr)) {
copy_from_user(&info, addr, sizeof(info))) {
}
static int bond_do_ioctl(struct net_device *bond_dev, struct ifreq *ifr, int cmd)
{
copy_from_user(&k_binfo, u_binfo, sizeof(ifbond))) {
copy_from_user(&k_sinfo, u_sinfo, sizeof(ifslave))) {
}
