/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/media/pci/ivtv/ivtv-fileops.c
static ssize_t ivtv_write(struct file *filp, const char __user *user_buf, size_t count, loff_t *pos)
{
copy_from_user(s, buf, user_buf,
copy_from_user(s, buf, user_buf, count);
}
