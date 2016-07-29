/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/staging/rdma/hfi1/file_ops.c
static ssize_t hfi1_file_write(struct file *fp, const char __user *data,
{
copy_from_user(&cmd, ucmd, sizeof(cmd))) {
default:
copy_from_user(dest, (void __user *)cmd.addr, copy)) {
}
