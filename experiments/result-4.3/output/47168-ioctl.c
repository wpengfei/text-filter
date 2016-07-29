/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/atm/ioctl.c
static int do_atm_iobuf(struct socket *sock, unsigned int cmd,
{
get_user(len, &iobuf32->length) ||
get_user(data, &iobuf32->buffer))
}
