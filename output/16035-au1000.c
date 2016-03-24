/Users/wpf/Desktop/log/test/linux-2.6.9/sound/oss/au1000.c
static int translate_from_user(struct dmabuf *db,
{
copy_from_user(dmabuf, userbuf, dmacount))
copy_from_user(usersample, userbuf,
}
static int au1000_ioctl(struct inode *inode, struct file *file,
{
get_user(val, (int *) arg))
get_user(val, (int *) arg))
get_user(val, (int *) arg))
get_user(val, (int *) arg))
get_user(val, (int *) arg))
get_user(val, (int *) arg))
get_user(val, (int *) arg))
}
