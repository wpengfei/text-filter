/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/pci/proc.c
static ssize_t proc_bus_pci_write(struct file *file, const char __user *buf,
{
get_user(val, buf);
get_user(val, (__le16 __user *) buf);
get_user(val, (__le32 __user *) buf);
get_user(val, (__le16 __user *) buf);
get_user(val, buf);
}
