/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/serial/mcfserial.c
static int mcfrs_ioctl(struct tty_struct *tty, struct file * file,
{
get_user(arg, (unsigned long *) arg);
get_user(val, (unsigned int *) arg);
}
