/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/scsi/osst.c
static ssize_t osst_write(struct file * filp, const char __user * buf, size_t count, loff_t *ppos)
{
cases where copy_user might catch
copy_from_user(&i, buf, 1) != 0 ||
copy_from_user(&i, buf + count - 1, 1) != 0)) {
}
static ssize_t osst_read(struct file * filp, char __user * buf, size_t count, loff_t *ppos)
{
case all further
copy_from_user(&i, buf, 1)             != 0 ||
copy_from_user(&i, buf + count - 1, 1) != 0 ||
}
