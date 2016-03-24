/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/usb/media/w9968cf.c
static int w9968cf_v4l_ioctl(struct inode* inode, struct file* filp,
{
copy_from_user(&chan, arg, sizeof(chan)))
copy_from_user(&chan, arg, sizeof(chan)))
copy_from_user(&pict, arg, sizeof(pict)))
copy_from_user(&win, arg, sizeof(win)))
copy_from_user(&mmap, arg, sizeof(mmap)))
copy_from_user(&f_num, arg, sizeof(f_num)))
copy_from_user(&tuner, arg, sizeof(tuner)))
copy_from_user(&tuner, arg, sizeof(tuner)))
}
