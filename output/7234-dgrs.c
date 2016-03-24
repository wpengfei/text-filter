/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/dgrs.c
static int dgrs_ioctl(struct net_device *devN, struct ifreq *ifr, int cmd)
{
copy_from_user(&ioc, ifr->ifr_data, sizeof(DGRS_IOCTL)))
copy_from_user(S2HN(privN->bcomm->bc_filter_area),
}
