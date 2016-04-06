/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/video/fbdev/sbuslib.c
int sbusfb_ioctl_helper(unsigned long cmd, unsigned long arg,
{
get_user(index, &c->index) ||
get_user(count, &c->count) ||
get_user(ured, &c->red) ||
get_user(ugreen, &c->green) ||
get_user(ublue, &c->blue))
get_user(index, &c->index) ||
get_user(count, &c->count) ||
get_user(ured, &c->red) ||
get_user(ugreen, &c->green) ||
get_user(ublue, &c->blue))
}
