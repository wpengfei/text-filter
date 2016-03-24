/Users/wpf/Desktop/log/test/linux-2.6.9/sound/oss/pss.c
static int pss_mixer_ioctl (int dev, unsigned int cmd, void __user *arg)
{
get_user(v, (int __user *)arg))
get_user(val, (int __user *)arg))
}
static int pss_coproc_ioctl(void *dev_info, unsigned int cmd, void __user *arg, int local)
{
copy_from_user(buf, arg, sizeof(copr_buffer))) {
copy_from_user(mbuf, arg, sizeof(copr_msg))) {
copy_from_user(&dbuf, arg, sizeof(dbuf)))
copy_from_user(&dbuf, arg, sizeof(dbuf)))
copy_from_user(&dbuf, arg, sizeof(dbuf)))
copy_from_user(&dbuf, arg, sizeof(dbuf)))
}
