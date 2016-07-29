/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/block/cciss.c
static int cciss_ioctl32_passthru(struct block_device *bdev, fmode_t mode,
{
copy_from_user(&arg64.LUN_info, &arg32->LUN_info,
copy_from_user(&arg64.Request, &arg32->Request,
copy_from_user(&arg64.error_info, &arg32->error_info,
get_user(arg64.buf_size, &arg32->buf_size);
get_user(cp, &arg32->buf);
}
static int cciss_ioctl32_big_passthru(struct block_device *bdev, fmode_t mode,
{
copy_from_user(&arg64.LUN_info, &arg32->LUN_info,
copy_from_user(&arg64.Request, &arg32->Request,
copy_from_user(&arg64.error_info, &arg32->error_info,
get_user(arg64.buf_size, &arg32->buf_size);
get_user(arg64.malloc_size, &arg32->malloc_size);
get_user(cp, &arg32->buf);
}
static int cciss_passthru(ctlr_info_t *h, void __user *argp)
{
copy_from_user
copy_from_user(buff, iocommand.buf, iocommand.buf_size)) {
}
static int cciss_bigpassthru(ctlr_info_t *h, void __user *argp)
{
copy_from_user(ioc, argp, sizeof(*ioc))) {
copy_from_user(buff[sg_used], data_ptr, sz)) {
}
