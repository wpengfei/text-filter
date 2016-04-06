/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/char/mwave/mwavedd.c
static long mwave_ioctl(struct file *file, unsigned int iocmd,
{
case IOCTL_MW_READ_DATA:
copy_from_user(&rReadData, arg,
copy_from_user(&rReadData, arg,
copy_from_user(&rWriteData, arg,
copy_from_user(&rWriteData, arg,
}
