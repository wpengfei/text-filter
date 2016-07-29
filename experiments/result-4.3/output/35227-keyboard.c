/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/s390/char/keyboard.c
static int
{
get_user(kb_func, &u_kbs->kb_func))
case KDSKBSENT:
copy_from_user(p, u_kbs->kb_string, len)) {
}
int kbd_ioctl(struct kbd_data *kbd, unsigned int cmd, unsigned long arg)
{
case KDSKBDIACR:
get_user(ct, &a->kb_cnt))
copy_from_user(&diacr, a->kbdiacr + i, sizeof(struct kbdiacr)))
case KDSKBDIACRUC:
get_user(ct, &a->kb_cnt))
copy_from_user(kbd->accent_table, a->kbdiacruc,
}
