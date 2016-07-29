/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/lib/dma-debug.c
static ssize_t filter_write(struct file *file, const char __user *userbuf,
{
copy_from_user can fault and may sleep we
copy_from_user(buf, userbuf, len))
}
