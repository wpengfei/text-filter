/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/i2c/i2c-dev.c

int i2cdev_ioctl (struct inode *inode, struct file *file, unsigned int cmd, 
{
copy_from_user(rdwr_pa[i].buf,
copy_from_user(&data_arg,
}
