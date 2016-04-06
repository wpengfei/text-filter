/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/video/fbdev/omap2/omapfb/omapfb-ioctl.c
int omapfb_ioctl(struct fb_info *fbi, unsigned int cmd, unsigned long arg)
{
case OMAPFB_MEMORY_READ:
copy_from_user(&p.memory_read, (void __user *)arg,
copy_from_user(&p.tearsync_info, (void __user *)arg,
}
