/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/hamradio/bpqether.c
static int bpq_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
{
copy_from_user(&req, ifr->ifr_data, sizeof(struct bpq_req)))
copy_from_user(bpq->dest_addr, ethaddr->destination, ETH_ALEN))
copy_from_user(bpq->acpt_addr, ethaddr->accept, ETH_ALEN))
}
