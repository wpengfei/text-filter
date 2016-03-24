/Users/wpf/Desktop/log/test/linux-2.6.9/net/atm/resources.c
int atm_dev_ioctl(unsigned int cmd, void __user *arg)
{
get_user(buf, &iobuf->buffer))
get_user(len, &iobuf->length))
get_user(buf, &sioc->arg))
get_user(len, &sioc->length))
get_user(number, &sioc->number))
copy_from_user(esi, buf, ESI_LEN)) {
copy_from_user(&addr, buf, sizeof(addr))) {
}
