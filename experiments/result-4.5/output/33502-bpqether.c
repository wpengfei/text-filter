/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/net/hamradio/bpqether.c
static int bpq_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
{
case SIOCSBPQETHADDR:
copy_from_user(bpq->dest_addr, ethaddr->destination, ETH_ALEN))
copy_from_user(bpq->acpt_addr, ethaddr->accept, ETH_ALEN))
}
