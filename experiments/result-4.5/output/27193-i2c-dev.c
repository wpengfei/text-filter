/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/i2c/i2c-dev.c
static noinline int i2cdev_ioctl_smbus(struct i2c_client *client,
{
copy_from_user(&data_arg,
copy_from_user(&temp, data_arg.data, datasize))
}
