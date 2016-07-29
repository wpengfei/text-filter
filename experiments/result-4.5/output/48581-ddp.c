/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/net/appletalk/ddp.c
static int atrtr_ioctl(unsigned int cmd, void __user *arg)
{
copy_from_user(&rt, arg, sizeof(rt)))
case SIOCADDRT: {
copy_from_user(name, rt.rt_dev, IFNAMSIZ-1))
}
