/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/viocons.c

static int viotty_write(struct tty_struct *tty, int from_user,
{
copy_from_user() into an event buffer from the cfu buffer before
copy_from_user() while holding a spin_lock.  Should internal_write()
}
