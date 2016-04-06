/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/drivers/ieee1394/raw1394.c
static int handle_async_request(struct file_info *fi,
{
case RAW1394_REQ_ASYNC_WRITE:
copy_from_user(&packet->header[3], int2ptr(req->req.sendb),
copy_from_user(packet->data, int2ptr(req->req.sendb),
}
