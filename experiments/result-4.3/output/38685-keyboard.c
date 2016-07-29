/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/tty/vt/keyboard.c
int vt_do_diacrit(unsigned int cmd, void __user *udp, int perm)
{
case KDSKBDIACR:
get_user(ct, &a->kb_cnt))
copy_from_user(dia, a->kbdiacr,
case KDSKBDIACRUC:
get_user(ct, &a->kb_cnt))
copy_from_user(buf, a->kbdiacruc,
}
