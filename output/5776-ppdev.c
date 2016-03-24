/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/ppdev.c
static int pp_ioctl(struct inode *inode, struct file *file,
{
copy_from_user (&mode, argp, sizeof (mode)))
copy_from_user (&phase, argp, sizeof (phase))) {
copy_from_user (&uflags, argp, sizeof (uflags))) {
copy_from_user (&reg, argp, sizeof (reg)))
copy_from_user (&reg, argp, sizeof (reg)))
copy_from_user (&mask, argp,
copy_from_user (&reg, 1 + (unsigned char __user *) arg,
copy_from_user (&mode, argp, sizeof (mode)))
copy_from_user (&mode, argp, sizeof (mode)))
copy_from_user (&reg, argp, sizeof (reg)))
copy_from_user (&par_timeout, argp, sizeof(struct timeval))) {
}
