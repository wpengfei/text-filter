/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/drivers/char/mwave/mwavedd.c
static int mwave_ioctl(struct inode *inode, struct file *file,
{
case IOCTL_MW_READ_DATA:
copy_from_user(&rReadData, arg,
copy_from_user(&rReadData, arg,
copy_from_user(&rWriteData, arg,
copy_from_user(&rWriteData, arg,
}
