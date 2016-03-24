/Users/wpf/Desktop/log/test/linux-2.6.9/net/irda/ircomm/ircomm_tty.c
static int ircomm_tty_write(struct tty_struct *tty, int from_user,
{
copy_from_user() under spinlock.
copy_from_user(kbuf, ubuf, count)) {
}
