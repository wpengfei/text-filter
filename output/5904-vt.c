/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/vt.c
int tioclinux(struct tty_struct *tty, unsigned long arg)
{
get_user(type, p))
get_user(data, p+1))
get_user(lines, (s32 __user *)(p+4))) {
}
static int set_get_cmap(unsigned char __user *arg, int set)
{
get_user(default_red[i], arg++);
get_user(default_grn[i], arg++);
get_user(default_blu[i], arg++);
}
int con_font_set(int currcons, struct console_font_op *op)
{
get_user(tmp, &charmap[32*i+h-1]))
copy_from_user(font.data, op->data, size)) {
}
