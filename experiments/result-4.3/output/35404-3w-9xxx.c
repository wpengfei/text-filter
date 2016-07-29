/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/scsi/3w-9xxx.c
static long twa_chrdev_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
copy_from_user(&driver_command, argp, sizeof(TW_Ioctl_Driver_Command)))
copy_from_user(tw_ioctl, argp, driver_command.buffer_length + sizeof(TW_Ioctl_Buf_Apache) - 1))
}
