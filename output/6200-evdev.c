/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/input/evdev.c
static int evdev_ioctl(struct inode *inode, struct file *file, unsigned int cmd, unsigned long arg)
{
get_user(t, ip)) return -EFAULT;
get_user(t, ip)) return -EFAULT;
get_user(v, ip + 1)) return -EFAULT;
copy_from_user(&effect, p, sizeof(effect)))
copy_from_user(&abs, p, sizeof(struct input_absinfo)))
}
