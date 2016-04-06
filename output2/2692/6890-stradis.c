/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/drivers/media/video/stradis.c
static int saa_ioctl(struct inode *inode, struct file *file,
{
case VIDIOCSWIN:
copy_from_user(saa->dmavid2, vw.clips,
copy_from_user(vcp, vw.clips,
}
static ssize_t saa_write(struct file *file, const char __user *buf,
{
copy_from_user(saa->audbuf + saa->audtail, buf,
copy_from_user(saa->vidbuf + saa->vidtail, buf,
copy_from_user(saa->osdbuf, buf, count))
}
