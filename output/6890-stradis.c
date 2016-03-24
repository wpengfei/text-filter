/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/media/video/stradis.c
static int saa_ioctl(struct inode *inode, struct file *file,
{
copy_from_user(&p, arg, sizeof(p)))
copy_from_user(&vw, arg, sizeof(vw)))
copy_from_user(saa->dmavid2, vw.clips,
copy_from_user(vcp, vw.clips,
copy_from_user(&v, arg, sizeof(v)))
copy_from_user(&v, arg, sizeof(v)))
copy_from_user(&v, arg, sizeof(v)))
copy_from_user((void *) &pmode, arg,
copy_from_user((void *) &mode, arg, sizeof(int)))
copy_from_user(&ucode, arg, sizeof(ucode)))
copy_from_user(udata, ucode.data, ucode.datasize)) {
copy_from_user(&v, arg, sizeof(v)))
copy_from_user(&v, arg, sizeof(v)))
}
static ssize_t saa_write(struct file *file, const char __user *buf,
{
copy_from_user(saa->audbuf +
copy_from_user(saa->audbuf + saa->audtail, buf,
copy_from_user(saa->vidbuf +
copy_from_user(saa->vidbuf + saa->vidtail, buf,
copy_from_user(saa->osdbuf, buf, count))
}
