/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/infiniband/hw/qib/qib_diag.c
static ssize_t qib_diagpkt_write(struct file *fp,
{
copy_from_user(&dp, data, sizeof(dp))) {
copy_from_user(tmpbuf,
}
static ssize_t qib_diag_write(struct file *fp, const char __user *data,
{
copy_from_user while holding the lock.
copy_from_user(&data64, data, count);
}
