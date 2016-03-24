/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/pcxx.c
static int pcxe_ioctl(struct tty_struct *tty, struct file * file,
{
get_user(value, (unsigned int *) arg))
get_user(mstat, (unsigned int *) arg))
copy_from_user(&ch->digiext, (char*)arg, sizeof(digi_t)))
copy_from_user(&dflow, (char*)arg, sizeof(dflow)))
}
