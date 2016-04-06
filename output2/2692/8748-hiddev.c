/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/drivers/usb/input/hiddev.c
static int hiddev_ioctl(struct inode *inode, struct file *file, unsigned int cmd, unsigned long arg)
{
case HIDIOCGCOLLECTIONINDEX:
copy_from_user(uref_multi, user_arg, 
copy_from_user(uref, user_arg, sizeof(*uref)))
}
