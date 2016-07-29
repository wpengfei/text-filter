/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/usb/core/devio.c
static int parse_usbdevfs_streams(struct usb_dev_state *ps,
{
get_user(num_streams, &streams->num_streams) ||
get_user(num_eps, &streams->num_eps))
get_user(ep, &streams->eps[i])) {
}
static int proc_control(struct usb_dev_state *ps, void __user *arg)
{
copy_from_user(&ctrl, arg, sizeof(ctrl)))
copy_from_user(tbuf, ctrl.data, ctrl.wLength)) {
}
static int proc_bulk(struct usb_dev_state *ps, void __user *arg)
{
copy_from_user(&bulk, arg, sizeof(bulk)))
copy_from_user(tbuf, bulk.data, len1)) {
}
static int proc_do_submiturb(struct usb_dev_state *ps, struct usbdevfs_urb *uurb,
{
default:
copy_from_user(buf, uurb->buffer, u)) {
copy_from_user(as->urb->transfer_buffer,
}
static int proc_bulk_compat(struct usb_dev_state *ps,
{
get_user(n, &p32->ep) || put_user(n, &p->ep) ||
get_user(n, &p32->len) || put_user(n, &p->len) ||
get_user(n, &p32->timeout) || put_user(n, &p->timeout) ||
get_user(addr, &p32->data) || put_user(compat_ptr(addr), &p->data))
}
static int get_urb32(struct usbdevfs_urb *kurb,
{
get_user(kurb->type, &uurb->type) ||
get_user(kurb->endpoint, &uurb->endpoint) ||
get_user(kurb->status, &uurb->status) ||
get_user(kurb->flags, &uurb->flags) ||
get_user(kurb->buffer_length, &uurb->buffer_length) ||
get_user(kurb->actual_length, &uurb->actual_length) ||
get_user(kurb->start_frame, &uurb->start_frame) ||
get_user(kurb->number_of_packets, &uurb->number_of_packets) ||
get_user(kurb->error_count, &uurb->error_count) ||
get_user(kurb->signr, &uurb->signr))
get_user(uptr, &uurb->buffer))
get_user(uptr, &uurb->usercontext))
}
static int proc_ioctl_compat(struct usb_dev_state *ps, compat_uptr_t arg)
{
get_user(ctrl.ifno, &uioc->ifno) ||
get_user(ctrl.ioctl_code, &uioc->ioctl_code) ||
get_user(udata, &uioc->data))
}
