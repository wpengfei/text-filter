/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/fs/coda/psdev.c
static ssize_t coda_psdev_write(struct file *file, const char __user *buf, 
{
copy_from_user(&hdr, buf, 2 * sizeof(u_long)))
copy_from_user(dcbuf, buf, nbytes)) {
copy_from_user(req->uc_data, buf, nbytes)) {
}
