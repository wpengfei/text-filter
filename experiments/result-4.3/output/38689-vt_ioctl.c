/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/tty/vt/vt_ioctl.c
int vt_ioctl(struct tty_struct *tty,
{
case VT_RESIZE:
get_user(ll, &vtsizes->v_rows) ||
get_user(cc, &vtsizes->v_cols))
case VT_RESIZEX:
get_user(ll, &vtconsize->v_rows);
get_user(cc, &vtconsize->v_cols);
get_user(vlin, &vtconsize->v_vlin);
get_user(clin, &vtconsize->v_clin);
get_user(vcol, &vtconsize->v_vcol);
get_user(ccol, &vtconsize->v_ccol);
}
