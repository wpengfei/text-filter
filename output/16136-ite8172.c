/Users/wpf/Desktop/log/test/linux-2.6.9/sound/oss/ite8172.c
static int mixdev_ioctl(struct ac97_codec *codec, unsigned int cmd,
{
get_user(val, (int *)arg))
get_user(val, (int *)arg))
get_user(val, (int *)arg))
}
static int copy_dmabuf_user(struct dmabuf *db, char* userbuf,
{
copy_from_user(bufptr, userbuf, partial))
copy_from_user(db->rawbuf,
copy_from_user(bufptr, userbuf, count))
}
static int it8172_ioctl(struct inode *inode, struct file *file,
{
get_user(val, (int *)arg))
get_user(val, (int *)arg))
get_user(val, (int *)arg))
get_user(val, (int *)arg))
get_user(val, (int *)arg))
get_user(val, (int *)arg))
get_user(val, (int *)arg))
}
