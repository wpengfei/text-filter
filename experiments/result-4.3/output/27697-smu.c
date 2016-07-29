/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/macintosh/smu.c
static ssize_t smu_write(struct file *file, const char __user *buf,
{
copy_from_user(&hdr, buf, sizeof(hdr)))
copy_from_user(pp->buffer, buf + sizeof(hdr), hdr.data_len)) {
}
