/Users/wpf/Desktop/log/test/linux-2.6.9/net/appletalk/ddp.c
static int atrtr_ioctl(unsigned int cmd, void __user *arg)
{
copy_from_user(&rt, arg, sizeof(rt)))
copy_from_user(name, rt.rt_dev, IFNAMSIZ-1))
}
