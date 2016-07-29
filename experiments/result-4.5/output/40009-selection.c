/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/tty/vt/selection.c
int set_selection(const struct tiocl_selection __user *sel, struct tty_struct *tty)
{
get_user(xs, &sel->xs);
get_user(ys, &sel->ys);
get_user(xe, &sel->xe);
get_user(ye, &sel->ye);
get_user(sel_mode, &sel->sel_mode);
}
