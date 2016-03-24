/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/block/ataflop.c

static int fd_ioctl(struct inode *inode, struct file *filp,
{
copy_from_user(&setprm, (void *) param, sizeof(setprm)))
copy_from_user(&fmt_desc, (void *) param, sizeof(fmt_desc)))
}
