/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/char/lp.c
static ssize_t lp_write(struct file * file, const char __user * buf,
{
copy_from_user (kbuf, buf, copy_size)) {
copy_from_user(kbuf, buf, copy_size)) {
}
