/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/ieee1394/raw1394.c

static int handle_async_request(struct file_info *fi,
{
copy_from_user(&packet->header[3], int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
}
static int raw1394_ioctl(struct inode *inode, struct file *file, unsigned int cmd, unsigned long arg)
{
copy_from_user(&args[0], argp, sizeof(args)))
copy_from_user(&mask, argp, sizeof(mask)))
copy_from_user(&args[0], argp, sizeof(args)))
copy_from_user(&mask, argp, sizeof(mask)))
copy_from_user(&args[0], argp, sizeof(args)))
}
