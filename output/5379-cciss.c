/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/block/cciss.c
int cciss_ioctl32_passthru(unsigned int fd, unsigned cmd, unsigned long arg,
{
copy_from_user(&arg64.LUN_info, &arg32->LUN_info, sizeof(arg64.LUN_info));
copy_from_user(&arg64.Request, &arg32->Request, sizeof(arg64.Request));
copy_from_user(&arg64.error_info, &arg32->error_info, sizeof(arg64.error_info));
get_user(arg64.buf_size, &arg32->buf_size);
get_user(cp, &arg32->buf);
}
int cciss_ioctl32_big_passthru(unsigned int fd, unsigned cmd, unsigned long arg,
{
copy_from_user(&arg64.LUN_info, &arg32->LUN_info, sizeof(arg64.LUN_info));
copy_from_user(&arg64.Request, &arg32->Request, sizeof(arg64.Request));
copy_from_user(&arg64.error_info, &arg32->error_info, sizeof(arg64.error_info));
get_user(arg64.buf_size, &arg32->buf_size);
get_user(arg64.malloc_size, &arg32->malloc_size);
get_user(cp, &arg32->buf);
}
static int cciss_ioctl(struct inode *inode, struct file *filep, 
{
copy_from_user(&intinfo, argp, sizeof( cciss_coalint_struct)))
copy_from_user(NodeName, argp, sizeof( NodeName_type)))
copy_from_user(&iocommand, argp, sizeof( IOCTL_Command_struct) ))
copy_from_user(buff, iocommand.buf, iocommand.buf_size))
copy_from_user(ioc, argp, sizeof(*ioc))) {
copy_from_user(buff[sg_used], data_ptr, sz)) {
}
