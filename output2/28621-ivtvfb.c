/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/media/pci/ivtv/ivtvfb.c
static ssize_t ivtvfb_write(struct fb_info *info, const char __user *buf,
{
copy_from_user(dst, buf, lead))
copy_from_user(dst, buf, tail))
}
