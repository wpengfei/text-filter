/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/usb/gadget/function/f_hid.c
static ssize_t f_hidg_write(struct file *file, const char __user *buffer,
{
copy_from_user(hidg->req->buf, buffer, count);
copy_from_user error\n");
}
