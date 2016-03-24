/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/rocket.c
static int rp_write(struct tty_struct *tty, int from_user,
{
copy_from_user(info->xmit_buf, buf, c)) {
copy_from_user(info->xmit_buf + info->xmit_head, b, c)) {
}
