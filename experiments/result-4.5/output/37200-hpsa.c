/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/scsi/hpsa.c
static int hpsa_ioctl32_passthru(struct scsi_device *dev, int cmd,
{
copy_from_user(&arg64.LUN_info, &arg32->LUN_info,
copy_from_user(&arg64.Request, &arg32->Request,
copy_from_user(&arg64.error_info, &arg32->error_info,
get_user(arg64.buf_size, &arg32->buf_size);
get_user(cp, &arg32->buf);
}
static int hpsa_ioctl32_big_passthru(struct scsi_device *dev,
{
copy_from_user(&arg64.LUN_info, &arg32->LUN_info,
copy_from_user(&arg64.Request, &arg32->Request,
copy_from_user(&arg64.error_info, &arg32->error_info,
get_user(arg64.buf_size, &arg32->buf_size);
get_user(arg64.malloc_size, &arg32->malloc_size);
get_user(cp, &arg32->buf);
}
static int hpsa_passthru_ioctl(struct ctlr_info *h, void __user *argp)
{
copy_from_user(&iocommand, argp, sizeof(iocommand)))
copy_from_user(buff, iocommand.buf,
}
static int hpsa_big_passthru_ioctl(struct ctlr_info *h, void __user *argp)
{
copy_from_user(ioc, argp, sizeof(*ioc))) {
copy_from_user(buff[sg_used], data_ptr, sz)) {
}
