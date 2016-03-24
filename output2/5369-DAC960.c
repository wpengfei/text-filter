/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/block/DAC960.c

static int DAC960_gam_ioctl(struct inode *inode, struct file *file,
{
copy_from_user(&UserCommand, UserSpaceUserCommand,
copy_from_user(&UserCommand, UserSpaceUserCommand,
copy_from_user(DataTransferBuffer,
copy_from_user(DataTransferBuffer,
copy_from_user(&HealthStatusBuffer,
copy_from_user(DataTransferBuffer,
copy_from_user(&HealthStatusBuffer,
}
