/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/usb/input/hiddev.c
static int hiddev_ioctl(struct inode *inode, struct file *file, unsigned int cmd, unsigned long arg)
{
get_user(newflags, (int __user *)arg))
get_user(idx, (int __user *)arg))
copy_from_user(&rinfo, user_arg, sizeof(rinfo)))
copy_from_user(&rinfo, user_arg, sizeof(rinfo)))
copy_from_user(&rinfo, user_arg, sizeof(rinfo)))
copy_from_user(&finfo, user_arg, sizeof(finfo)))
copy_from_user(uref, user_arg, sizeof(*uref))) 
copy_from_user(uref_multi, user_arg, 
copy_from_user(uref, user_arg, sizeof(*uref)))
copy_from_user(&cinfo, user_arg, sizeof(cinfo)))
}
