/Users/wpf/Desktop/log/test/linux-2.6.9/net/core/dv.c

int divert_ioctl(unsigned int cmd, struct divert_cf __user *arg)
{
copy_from_user(&div_cf, arg, sizeof(struct divert_cf)))
copy_from_user(&div_cf, arg, sizeof(struct divert_cf)))
}
