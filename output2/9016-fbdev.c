/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/video/kyro/fbdev.c

static int kyrofb_ioctl(struct inode *inode, struct file *file,
{
copy_from_user(&ol_create, argp, sizeof(overlay_create));
copy_from_user(&ol_viewport_set, argp,
}
