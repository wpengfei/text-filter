/Users/wpf/Desktop/log/test/linux-2.6.9/fs/coda/psdev.c

static ssize_t coda_psdev_write(struct file *file, const char __user *buf, 
{
copy_from_user(&hdr, buf, 2 * sizeof(u_long)))
copy_from_user(dcbuf, buf, nbytes)) {
copy_from_user(req->uc_data, buf, nbytes)) {
copy_from_user(dcbuf, buf, nbytes)) {
copy_from_user(req->uc_data, buf, nbytes)) {
}
