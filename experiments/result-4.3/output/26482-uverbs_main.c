/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/infiniband/core/uverbs_main.c
static ssize_t ib_uverbs_write(struct file *filp, const char __user *buf,
{
copy_from_user(&hdr, buf, sizeof hdr))
copy_from_user(&ex_hdr, buf + sizeof(hdr), sizeof(ex_hdr))) {
}
