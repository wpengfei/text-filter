/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/epca.c

static int pc_ioctl(struct tty_struct *tty, struct file * file,
{
get_user(value, (unsigned __user *)argp))
get_user(mstat, (unsigned __user *)argp))
copy_from_user(&ch->digiext, argp, sizeof(digi_t)))
copy_from_user(&dflow, argp, sizeof(dflow)))
}
