/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/infiniband/core/user_mad.c
static ssize_t ib_umad_write(struct file *filp, const char __user *buf,
{
copy_from_user(&packet->mad, buf, hdr_size(file))) {
copy_from_user(packet->mad.data, buf, IB_MGMT_RMPP_HDR)) {
}
