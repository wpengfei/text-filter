/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/wan/lmc/lmc_main.c

int lmc_ioctl (struct net_device *dev, struct ifreq *ifr, int cmd) /*fold00*/
{
copy_from_user(&ctl, ifr->ifr_data, sizeof (lmc_ctl_t)))
copy_from_user(&new_type, ifr->ifr_data, sizeof(u_int16_t)))
copy_from_user(&ctl, ifr->ifr_data, sizeof (lmc_ctl_t)))
copy_from_user(&xc, ifr->ifr_data, sizeof (struct lmc_xilinx_control)))
copy_from_user(&new_type, ifr->ifr_data, sizeof(u_int16_t)))
copy_from_user(&ctl, ifr->ifr_data, sizeof (lmc_ctl_t)))
copy_from_user(&xc, ifr->ifr_data, sizeof (struct lmc_xilinx_control)))
copy_from_user(&ctl, ifr->ifr_data, sizeof (lmc_ctl_t)))
copy_from_user(&xc, ifr->ifr_data, sizeof (struct lmc_xilinx_control)))
}
