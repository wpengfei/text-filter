/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/infiniband/core/user_mad.c
static int copy_rmpp_mad(struct ib_mad_send_buf *msg, const char __user *buf)
{
copy_from_user(msg->mad + IB_MGMT_RMPP_HDR, buf + IB_MGMT_RMPP_HDR,
copy_from_user(ib_get_rmpp_segment(msg, seg), buf,
}
static ssize_t ib_umad_write(struct file *filp, const char __user *buf,
{
copy_from_user(&packet->mad, buf, hdr_size(file))) {
copy_from_user(packet->mad.data, buf, IB_MGMT_RMPP_HDR)) {
copy_from_user(packet->msg->mad + copy_offset,
}
