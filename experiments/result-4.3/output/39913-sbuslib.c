/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/video/fbdev/sbuslib.c
int sbusfb_ioctl_helper(unsigned long cmd, unsigned long arg,
{
case FBIOPUTCMAP_SPARC: {
get_user(index, &c->index) ||
get_user(count, &c->count) ||
get_user(ured, &c->red) ||
get_user(ugreen, &c->green) ||
get_user(ublue, &c->blue))
get_user(red8, &ured[i]) ||
get_user(green8, &ugreen[i]) ||
get_user(blue8, &ublue[i]))
case FBIOGETCMAP_SPARC: {
get_user(index, &c->index) ||
get_user(count, &c->count) ||
get_user(ured, &c->red) ||
get_user(ugreen, &c->green) ||
get_user(ublue, &c->blue))
}
static int fbiogetputcmap(struct fb_info *info, unsigned int cmd, unsigned long arg)
{
get_user(addr, &argp->red);
get_user(addr, &argp->green);
get_user(addr, &argp->blue);
}
static int fbiogscursor(struct fb_info *info, unsigned long arg)
{
get_user(addr, &argp->cmap.red);
get_user(addr, &argp->cmap.green);
get_user(addr, &argp->cmap.blue);
get_user(addr, &argp->mask);
get_user(addr, &argp->image);
}
