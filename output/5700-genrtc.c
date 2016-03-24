/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/genrtc.c
static int gen_rtc_ioctl(struct inode *inode, struct file *file,
{
copy_from_user(&pll, argp, sizeof(pll)))
copy_from_user(&wtime, argp, sizeof(wtime)))
}
