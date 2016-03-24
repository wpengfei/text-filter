/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/ppp_generic.c
static int get_filter(void __user *arg, struct sock_filter **p)
{
copy_from_user(&uprog, arg, sizeof(uprog)))
copy_from_user(code, uprog.filter, len)) {
}
static int ppp_ioctl(struct inode *inode, struct file *file,
{
get_user(unit, p))
get_user(val, p))
get_user(val, p))
get_user(val, p))
get_user(val, p))
copy_from_user(&npi, argp, sizeof(npi)))
get_user(val, p))
}
static int ppp_unattached_ioctl(struct ppp_file *pf, struct file *file,
{
get_user(unit, p))
get_user(unit, p))
get_user(unit, p))
}
static int
{
copy_from_user(&data, (void __user *) arg, sizeof(data))
copy_from_user(ccp_option, (void __user *) data.ptr, data.length)))
}
