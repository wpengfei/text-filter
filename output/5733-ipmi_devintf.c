/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/ipmi/ipmi_devintf.c
static int handle_send_req(ipmi_user_t     user,
{
copy_from_user(&addr, req->addr, req->addr_len))
copy_from_user(msg.data,
}
static int ipmi_ioctl(struct inode  *inode,
{
copy_from_user(&req, arg, sizeof(req))) {
copy_from_user(&req, arg, sizeof(req))) {
copy_from_user(&rsp, arg, sizeof(rsp))) {
copy_from_user(&val, arg, sizeof(val))) {
copy_from_user(&val, arg, sizeof(val))) {
copy_from_user(&val, arg, sizeof(val))) {
copy_from_user(&val, arg, sizeof(val))) {
copy_from_user(&val, arg, sizeof(val))) {
copy_from_user(&parms, arg, sizeof(parms))) {
}
