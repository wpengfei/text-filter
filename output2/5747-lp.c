/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/lp.c

static ssize_t lp_write(struct file * file, const char __user * buf,
{
copy_from_user (kbuf, buf, copy_size))
copy_from_user(kbuf, buf, copy_size)) {
}
