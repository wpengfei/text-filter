/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/scsi/3w-xxxx.c
static int tw_chrdev_ioctl(struct inode *inode, struct file *file, unsigned int cmd, unsigned long arg)
{
copy_from_user(&data_buffer_length, argp, sizeof(unsigned int));
copy_from_user(tw_ioctl, argp, data_buffer_length + sizeof(TW_New_Ioctl) - 1);
} /* End tw_chrdev_ioctl() */
int tw_ioctl(TW_Device_Extension *tw_dev, int request_id)
{
copy_from_user(data_ptr, (void *)(unsigned long)command_packet->byte8.param.sgl[i].address, command_packet->byte8.param.sgl[i].length);
copy_from_user(data_ptr, (void *)(unsigned long)command_packet->byte8.io.sgl[i].address, command_packet->byte8.io.sgl[i].length);
} /* End tw_ioctl() */
