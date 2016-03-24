/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/depca.c

static int depca_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
{
copy_from_user(tmp.addr, ioc->data, ETH_ALEN))
copy_from_user(tmp.addr, ioc->data, ETH_ALEN * ioc->len))
}
