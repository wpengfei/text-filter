/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/block/DAC960.c
static long DAC960_gam_ioctl(struct file *file, unsigned int Request,
{
case DAC960_IOCTL_V1_EXECUTE_COMMAND:
copy_from_user(&UserCommand, UserSpaceUserCommand,
copy_from_user(&DCDB, UserCommand.DCDB,
copy_from_user(DataTransferBuffer,
case DAC960_IOCTL_V2_EXECUTE_COMMAND:
copy_from_user(&UserCommand, UserSpaceUserCommand,
copy_from_user(DataTransferBuffer,
case DAC960_IOCTL_V2_GET_HEALTH_STATUS:
copy_from_user(&GetHealthStatus, UserSpaceGetHealthStatus,
copy_from_user(&HealthStatusBuffer,
}
