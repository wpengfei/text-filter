/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/video/pm3fb.c
static int pm3fb_ioctl(struct inode *inode, struct file *file,
{
copy_from_user(&cm, (void *)arg, sizeof(u32)))
copy_from_user(cc, (void*)arg, 3 * sizeof(char)))
}
