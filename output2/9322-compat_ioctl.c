/Users/wpf/Desktop/log/test/linux-2.6.9/fs/compat_ioctl.c

static int dev_ifsioc(unsigned int fd, unsigned int cmd, unsigned long arg)
{
copy_from_user(&ifr, uifr32, sizeof(ifr.ifr_name));
copy_from_user(&ifr, uifr32, sizeof(*uifr32)))
}
static int do_fontx_ioctl(unsigned int fd, unsigned int cmd, unsigned long arg, struct file *file)
{
get_user(op.height, &user_cfd->charheight) ||
get_user(op.height, &user_cfd->charheight) ||
get_user(op.charcount, &user_cfd->charcount) ||
get_user(op.charcount, &user_cfd->charcount) ||
get_user(data, &user_cfd->chardata))
get_user(data, &user_cfd->chardata))
}
