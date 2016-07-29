/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/video/fbdev/tmiofb.c
static int tmiofb_ioctl(struct fb_info *fbi,
{
case FBIO_TMIO_ACC_WRITE: {
get_user(len, argp))
copy_from_user(acc, argp + 1, sizeof(u32) * len))
}
