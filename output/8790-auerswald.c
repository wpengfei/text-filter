/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/usb/misc/auerswald.c
static int auerchar_ioctl (struct inode *inode, struct file *file, unsigned int cmd, unsigned long arg)
{
get_user (u, user_arg);
copy_from_user (&devinfo, (void __user *) arg, sizeof (audevinfo_t))) {
}
static ssize_t auerchar_write (struct file *file, const char __user *buf, size_t len, loff_t *ppos)
{
copy_from_user ( bp->bufp+AUH_SIZE, buf, len)) {
copy_from_user failed");
}
