/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/video/fbdev/core/fbmem.c
static int fb_getput_cmap(struct fb_info *info, unsigned int cmd,
{
get_user(data, &cmap32->red) ||
get_user(data, &cmap32->green) ||
get_user(data, &cmap32->blue) ||
get_user(data, &cmap32->transp) ||
}
