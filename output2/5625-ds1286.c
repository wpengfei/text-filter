/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/ds1286.c

static int ds1286_ioctl(struct inode *inode, struct file *file,
{
copy_from_user(&alm_tm, (struct rtc_time*)arg,
copy_from_user(&rtc_tm, (struct rtc_time*)arg,
}
