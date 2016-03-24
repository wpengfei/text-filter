/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/pppoe.c
static int pppoe_ioctl(struct socket *sock, unsigned int cmd,
{
get_user(val,(int __user *) arg))
get_user(val, (int __user *) arg))
copy_from_user(&po->pppoe_relay,
}
