/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/scsi/osst.c
static ssize_t osst_write(struct file * filp, const char __user * buf, size_t count, loff_t *ppos)
{
copy_from_user(&i, buf, 1) != 0 ||
copy_from_user(&i, buf + count - 1, 1) != 0)) {
}
static ssize_t osst_read(struct file * filp, char __user * buf, size_t count, loff_t *ppos)
{
copy_from_user(&i, buf, 1)             != 0 ||
copy_from_user(&i, buf + count - 1, 1) != 0 ||
}
