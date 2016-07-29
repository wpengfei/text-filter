/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/staging/rtl8712/rtl871x_ioctl_linux.c
static int r8711_wx_read32(struct net_device *dev,
{
get_user(addr, (u32 __user *)wrqu->data.pointer);
get_user(addr, (u32 __user *)wrqu->data.pointer);
}
