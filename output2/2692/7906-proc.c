/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/drivers/pci/proc.c
static ssize_t
{
get_user(val, buf);
get_user(val, (unsigned short __user *) buf);
get_user(val, (unsigned short __user *) buf);
get_user(val, buf);
}