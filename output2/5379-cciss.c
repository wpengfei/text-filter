/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/block/cciss.c

static int cciss_ioctl(struct inode *inode, struct file *filep, 
{
copy_from_user(&intinfo, argp, sizeof( cciss_coalint_struct)))
copy_from_user(NodeName, argp, sizeof( NodeName_type)))
copy_from_user(&iocommand, argp, sizeof( IOCTL_Command_struct) ))
copy_from_user(ioc, argp, sizeof(*ioc))) {
copy_from_user(NodeName, argp, sizeof( NodeName_type)))
copy_from_user(&iocommand, argp, sizeof( IOCTL_Command_struct) ))
copy_from_user(ioc, argp, sizeof(*ioc))) {
copy_from_user(&iocommand, argp, sizeof( IOCTL_Command_struct) ))
copy_from_user(ioc, argp, sizeof(*ioc))) {
}
