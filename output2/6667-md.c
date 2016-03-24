/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/md/md.c

static int md_ioctl(struct inode *inode, struct file *file,
{
copy_from_user(&info, argp, sizeof(info))) {
copy_from_user(&info, argp, sizeof(info)))
}
