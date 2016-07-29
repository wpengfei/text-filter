/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/block/paride/pg.c
static ssize_t pg_write(struct file *filp, const char __user *buf, size_t count, loff_t *ppos)
{
copy_from_user(&hdr, buf, hs))
copy_from_user(dev->bufptr, buf + hs, count - hs))
}
