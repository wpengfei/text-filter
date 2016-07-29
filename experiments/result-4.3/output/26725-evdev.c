/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/input/evdev.c
static int evdev_handle_set_keycode(struct input_dev *dev, void __user *p)
{
copy_from_user(ke.scancode, p, sizeof(unsigned int)))
get_user(ke.keycode, ip + 1))
}
static long evdev_do_ioctl(struct file *file, unsigned int cmd,
{
case EVIOCSREP:
get_user(u, ip))
get_user(v, ip + 1))
}
