/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/usb/misc/rio500.c
static long ioctl_rio(struct file *file, unsigned int cmd, unsigned long arg)
{
case RIO_RECV_COMMAND:
copy_from_user(&rio_cmd, data, sizeof(struct RioCommand))) {
copy_from_user(buffer, rio_cmd.buffer, rio_cmd.length)) {
case RIO_SEND_COMMAND:
copy_from_user(&rio_cmd, data, sizeof(struct RioCommand))) {
copy_from_user(buffer, rio_cmd.buffer, rio_cmd.length)) {
}
