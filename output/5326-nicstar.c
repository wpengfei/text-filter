/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/atm/nicstar.c
static int ns_ioctl(struct atm_dev *dev, unsigned int cmd, void __user *arg)
{
get_user(pl.buftype, &((pool_levels __user *) arg)->buftype))
copy_from_user(&pl, (pool_levels __user *) arg, sizeof(pl)))
}
