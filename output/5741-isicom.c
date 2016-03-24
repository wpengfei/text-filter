/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/isicom.c
static int ISILoad_ioctl(struct inode *inode, struct file *filp,
{
get_user(card, (int __user *)argp))
copy_from_user(&frame, argp, sizeof(bin_frame)))
copy_from_user(&frame, argp, sizeof(bin_header)))
}
