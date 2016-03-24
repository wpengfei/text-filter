/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/generic_serial.c
int gs_write(struct tty_struct * tty, int from_user, 
{
copy_from_user */
copy_from_user (port->xmit_buf + port->xmit_head, 
}
