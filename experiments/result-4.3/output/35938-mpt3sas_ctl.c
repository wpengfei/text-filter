/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/scsi/mpt3sas/mpt3sas_ctl.c
static long
{
copy_from_user(mpi_request, mf, karg.data_sge_offset*4)) {
copy_from_user(data_out, karg.data_out_buf_ptr,
}
static long
{
copy_from_user(&ioctl_header, (char __user *)arg,
case MPT3COMMAND:
copy_from_user(&karg, arg, sizeof(karg))) {
}
