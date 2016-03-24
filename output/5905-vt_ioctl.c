/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/vt_ioctl.c
int vt_ioctl(struct tty_struct *tty, struct file * file,
{
copy_from_user(&kbrep, up, sizeof(struct kbd_repeat)))
get_user(ct,&a->kb_cnt))
copy_from_user(accent_table, a->kbdiacr, ct*sizeof(struct kbdiacr)))
copy_from_user(&tmp, up, sizeof(struct vt_mode)))
get_user(ll, &vtsizes->v_rows) ||
get_user(cc, &vtsizes->v_cols))
get_user(ll, &vtconsize->v_rows);
get_user(cc, &vtconsize->v_cols);
get_user(vlin, &vtconsize->v_vlin);
get_user(clin, &vtconsize->v_clin);
get_user(vcol, &vtconsize->v_vcol);
get_user(ccol, &vtconsize->v_ccol);
copy_from_user(&op, up, sizeof(op)))
copy_from_user(&ui, up, sizeof(struct unimapinit));
}
