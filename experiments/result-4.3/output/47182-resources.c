/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/atm/resources.c
int atm_dev_ioctl(unsigned int cmd, void __user *arg, int compat)
{
case ATM_GETNAMES:
get_user(cbuf, &ciobuf->buffer))
get_user(buf, &iobuf->buffer))
get_user(len, iobuf_len))
default:
get_user(carg, &csioc->arg))
get_user(len, &csioc->length))
get_user(number, &csioc->number))
get_user(buf, &sioc->arg))
get_user(len, &sioc->length))
get_user(number, &sioc->number))
}
