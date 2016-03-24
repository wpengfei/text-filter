/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/hamradio/yam.c
static int yam_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
{
copy_from_user(&ioctl_cmd, ifr->ifr_data, sizeof(int)))
copy_from_user(ym, ifr->ifr_data, sizeof(struct yamdrv_ioctl_mcs))) {
copy_from_user(&yi, ifr->ifr_data, sizeof(struct yamdrv_ioctl_cfg)))
}
