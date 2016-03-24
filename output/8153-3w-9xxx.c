/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/scsi/3w-9xxx.c
static int twa_chrdev_ioctl(struct inode *inode, struct file *file, unsigned int cmd, unsigned long arg)
{
copy_from_user(&driver_command, argp, sizeof(TW_Ioctl_Driver_Command)))
copy_from_user(tw_ioctl, argp, driver_command.buffer_length + sizeof(TW_Ioctl_Buf_Apache) - 1))
} /* End twa_chrdev_ioctl() */
