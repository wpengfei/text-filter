/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/staging/rdma/hfi1/diag.c
static ssize_t hfi1_snoop_write(struct file *fp, const char __user *data,
{
copy_from_user(&byte_one, data, 1))
copy_from_user(&pbc, data, sizeof(pbc)))
}
