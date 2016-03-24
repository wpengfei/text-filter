/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/usb/core/devio.c
static int proc_control(struct dev_state *ps, void __user *arg)
{
copy_from_user(&ctrl, arg, sizeof(ctrl)))
copy_from_user(tbuf, ctrl.data, ctrl.wLength)) {
}
static int proc_bulk(struct dev_state *ps, void __user *arg)
{
copy_from_user(&bulk, arg, sizeof(bulk)))
copy_from_user(tbuf, bulk.data, len1)) {
}
static int proc_submiturb(struct dev_state *ps, void __user *arg)
{
copy_from_user(&uurb, arg, sizeof(uurb)))
copy_from_user(dr, uurb.buffer, 8)) {
copy_from_user(isopkt, &((struct usbdevfs_urb __user *)arg)->iso_frame_desc, isofrmlen)) {
copy_from_user(as->urb->transfer_buffer, uurb.buffer, as->urb->transfer_buffer_length)) {
}
static int proc_ioctl (struct dev_state *ps, void __user *arg)
{
copy_from_user(&ctrl, arg, sizeof (ctrl)))
copy_from_user (buf, ctrl.data, size)) {
}
