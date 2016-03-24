/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/pci/proc.c
static ssize_t
{
get_user(val, buf);
get_user(val, (unsigned short __user *) buf);
get_user(val, (unsigned int __user *) buf);
get_user(val, (unsigned short __user *) buf);
get_user(val, buf);
}
