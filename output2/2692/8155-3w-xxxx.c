/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/drivers/scsi/3w-xxxx.c
static int tw_chrdev_ioctl(struct inode *inode, struct file *file, unsigned int cmd, unsigned long arg)
{
copy_from_user(&data_buffer_length, argp, sizeof(unsigned int));
copy_from_user(tw_ioctl, argp, data_buffer_length + sizeof(TW_New_Ioctl) - 1);
}
