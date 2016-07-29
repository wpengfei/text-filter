/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/s390/char/monwriter.c
static ssize_t monwrite_write(struct file *filp, const char __user *data,
{
copy_from_user(to, data + written, len)) {
copy_from_user(to, data + written, len)) {
}
