/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/scsi/3w-xxxx.c
static long tw_chrdev_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
copy_from_user(&data_buffer_length, argp, sizeof(unsigned int)))
copy_from_user(tw_ioctl, argp, data_buffer_length + sizeof(TW_New_Ioctl) - 1))
}
