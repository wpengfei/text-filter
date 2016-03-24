/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/wan/sdla.c
static int sdla_xfer(struct net_device *dev, struct sdla_mem __user *info, int read)
{
copy_from_user(&mem, info, sizeof(mem)))
copy_from_user(temp, mem.data, mem.len))
}
