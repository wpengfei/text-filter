/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/s390/char/keyboard.c
static int
{
get_user(kb_func, &u_kbs->kb_func))
copy_from_user(p, u_kbs->kb_string, len)) {
}
int
{
get_user(ct, &a->kb_cnt))
copy_from_user(kbd->accent_table, a->kbdiacr,
}
