/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/ieee1394/raw1394.c
static int handle_async_request(struct file_info *fi,
{
copy_from_user(&packet->header[3], int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
}
static int handle_async_send(struct file_info *fi, struct pending_request *req)
{
copy_from_user(packet->header, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb) + header_length,
}
static int arm_set_buf(struct file_info *fi, struct pending_request *req)
{
copy_from_user( %p, %08X, %u )",
copy_from_user(arm_addr->addr_space_buffer+offset, int2ptr(req->req.sendb), req->req.length)) {
}
static int raw1394_iso_send_packets(struct file_info *fi, void __user *uaddr)
{
copy_from_user(&upackets, uaddr, sizeof(upackets)))
copy_from_user(&info, &upackets.infos[i],
}
static int raw1394_ioctl(struct inode *inode, struct file *file, unsigned int cmd, unsigned long arg)
{
copy_from_user(&args[0], argp, sizeof(args)))
copy_from_user(&mask, argp, sizeof(mask)))
copy_from_user(&args[0], argp, sizeof(args)))
}
